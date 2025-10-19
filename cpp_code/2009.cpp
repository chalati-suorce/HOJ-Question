#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 解决数列求和问题
void solve() {
    // n 是数列的第一项 (a1)，m 是要求和的项数
    int n, m;

    // 循环读取每一组输入
    // 使用 while 循环来处理多组测试数据，直到输入失败（如文件结束）
    while (cin >> n >> m) {
        // 数列的第一项 a1 = n
        double current_term = (double)n; 
        
        // 用于累加和
        double sum = 0.0;

        // 循环计算前 m 项的和
        for (int i = 0; i < m; ++i) {
            // 第 i+1 项是 current_term
            sum += current_term; 

            // 根据数列的定义，计算下一项：下一项是当前项的平方根
            // 只有在计算下一项时才需要更新 current_term
            // i=0 时，current_term = n, sum += n, next_term = sqrt(n)
            // i=1 时, current_term = sqrt(n), sum += sqrt(n), next_term = sqrt(sqrt(n))
            // ...
            current_term = sqrt(current_term); 
        }

        // 输出结果，要求保留 2 位小数
        cout << fixed << setprecision(2) << sum << endl;
    }
}

int main() {
    // 提高输入输出效率
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}