#include <iostream>
#include <iomanip>
#include <cmath> // 虽然在这个问题中用不到，但处理数学问题时常备

using namespace std;

void solve() {
    int m; // 测试实例的个数
    
    // 1. 读取测试实例的个数 m
    if (!(cin >> m)) {
        return;
    }
    
    // 2. 循环处理 m 个测试实例
    for (int i = 0; i < m; ++i) {
        int n; // 要求和的项数
        
        // 读取 n
        if (!(cin >> n)) {
            // 如果读取 n 失败，则提前退出循环
            break; 
        }
        
        double sum = 0.0;
        
        // 3. 循环计算前 n 项的和
        for (int k = 1; k <= n; ++k) {
            // 当前项的值为 1/k
            double term_value = 1.0 / k;
            
            // 4. 判断项的符号：
            // k 是项的序号，从 1 开始
            // 当 k 是奇数时 (k=1, 3, 5...)，符号为正 (+)
            // 当 k 是偶数时 (k=2, 4, 6...)，符号为负 (-)
            if (k % 2 != 0) {
                // 奇数项：加
                sum += term_value;
            } else {
                // 偶数项：减
                sum -= term_value;
            }
        }
        
        // 5. 输出结果，要求保留 2 位小数
        // fixed: 强制使用固定点表示法
        // setprecision(2): 设置小数点后保留 2 位
        cout << fixed << setprecision(2) << sum << endl;
    }
}

int main() {
    // 优化输入/输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}