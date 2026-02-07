#include<bits/stdc++.h>
using namespace std;

long long dp[25][25]; // 1. 改用 long long
bool horse[25][25];   // 标记马的位置

int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y; // a,b是终点；x,y是马的位置

    // 2. 马的偏移量（放在循环外面更清晰）
    int dx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

    // 3. 标记马及其控制点
    for(int i = 0; i < 9; ++i){
        int tempx = x + dx[i];
        int tempy = y + dy[i];

        // 核心修正：先检查边界，必须在 (0,0) 到 (a,b) 之间
        if (tempx >= 0 && tempx <= a && tempy >= 0 && tempy <= b) {
            horse[tempx][tempy] = true;
        }
    }

    dp[0][0] = 1;

    for(int i = 0; i <= a; ++i){
        for(int j = 0; j <= b; ++j){
            // 4. 如果是马，路径数为0，直接跳过
            if(horse[i][j]){
                dp[i][j] = 0; 
                continue; 
            }

            // 起点上面已经赋值为1了，跳过
            if(i == 0 && j == 0) continue;

            // 状态转移
            if(i > 0) dp[i][j] += dp[i-1][j];
            if(j > 0) dp[i][j] += dp[i][j-1];
        }
    }

    cout << dp[a][b] << endl;

    return 0;
}