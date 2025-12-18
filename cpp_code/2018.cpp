#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAXN = 200005;

int n, m;
int a[MAXN]; // 节点权值
vector<int> tree[MAXN]; // 树结构
int parent[MAXN]; // 父节点
int depth[MAXN]; // 深度
int sz[MAXN]; // 子树大小
int heavy[MAXN]; // 重儿子
int top[MAXN]; // 链顶
int dfn[MAXN]; // DFS序
int dfn_cnt = 0; // DFS序计数器

// 第一次DFS：计算深度、父节点、子树大小、重儿子
void dfs1(int u, int p, int d) {
    parent[u] = p;
    depth[u] = d;
    sz[u] = 1;
    heavy[u] = -1;
    int max_sz = 0;
    
    for (int v : tree[u]) {
        if (v == p) continue;
        dfs1(v, u, d + 1);
        sz[u] += sz[v];
        if (sz[v] > max_sz) {
            max_sz = sz[v];
            heavy[u] = v;
        }
    }
}

// 第二次DFS：计算链顶和DFS序
void dfs2(int u, int t) {
    top[u] = t;
    dfn[u] = ++dfn_cnt;
    
    if (heavy[u] != -1) {
        dfs2(heavy[u], t);
    }
    
    for (int v : tree[u]) {
        if (v == parent[u] || v == heavy[u]) continue;
        dfs2(v, v);
    }
}

// 获取LCA
int get_lca(int u, int v) {
    while (top[u] != top[v]) {
        if (depth[top[u]] > depth[top[v]]) {
            u = parent[top[u]];
        } else {
            v = parent[top[v]];
        }
    }
    return depth[u] < depth[v] ? u : v;
}

// 获取路径上的权值集合的mex
int get_path_mex(int u, int v) {
    vector<int> values;
    
    // 使用树链剖分优化路径查询
    while (top[u] != top[v]) {
        if (depth[top[u]] < depth[top[v]]) swap(u, v);
        
        // 将u到top[u]路径上的权值加入集合
        for (int i = u; i != parent[top[u]]; i = parent[i]) {
            values.push_back(a[i]);
        }
        u = parent[top[u]];
    }
    
    // 处理同一条链上的部分
    if (depth[u] > depth[v]) swap(u, v);
    for (int i = u; i <= v; i++) {
        values.push_back(a[i]);
    }
    
    // 计算mex
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());
    
    int mex = 0;
    for (int val : values) {
        if (val == mex) {
            mex++;
        } else if (val > mex) {
            break;
        }
    }
    
    return mex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    // 预处理树链剖分
    dfs1(1, 0, 0);
    dfs2(1, 1);
    
    // 处理每个查询
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        
        // 使用更高效的路径查询方法
        vector<int> path_values;
        
        // 获取路径上的所有节点权值
        int lca = get_lca(x, y);
        
        // 从x到lca
        int u = x;
        while (u != lca) {
            path_values.push_back(a[u]);
            u = parent[u];
        }
        path_values.push_back(a[lca]);
        
        // 从y到lca（不包括lca）
        u = y;
        while (u != lca) {
            path_values.push_back(a[u]);
            u = parent[u];
        }
        
        // 计算mex
        sort(path_values.begin(), path_values.end());
        path_values.erase(unique(path_values.begin(), path_values.end()), path_values.end());
        
        int mex = 0;
        for (int val : path_values) {
            if (val == mex) {
                mex++;
            } else if (val > mex) {
                break;
            }
        }
        
        cout << mex << endl;
    }
    
    return 0;
}
