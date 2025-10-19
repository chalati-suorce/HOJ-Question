#include <iostream>
#include <cmath>

using namespace std;

// 解决猴子吃桃逆向递推问题
void solve() {
    int n; // 剩下一个桃子是在第 n 天
    
    // 循环读取多组输入
    while (cin >> n) {
        // n 的约束是 1 < n < 30，最终结果不会超过 long long 范围
        long long current_p = 1; // P_n：第 n 天早上（准备吃时）的桃子数量
        
        // 从第 n 天开始，逆推到第 1 天。
        // 循环 n-1 次，因为是从 P_n 逆推到 P_1
        // k 表示当前逆推到的天数
        for (int k = n; k > 1; --k) {
            // P_{k-1} = 2 * (P_k + 1)
            // 这里的 current_p 扮演 P_k，循环结束后得到 P_1
            current_p = 2 * (current_p + 1);
        }
        
        // current_p 即为 P_1，第一天开始吃的桃子总数
        cout << current_p << endl;
    }
}

int main() {
    // 优化输入/输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}