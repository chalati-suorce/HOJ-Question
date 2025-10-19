#include <iostream>
#include <vector>
#include <cmath> // 用于处理浮点数比较，虽然在这个问题中直接比较可能也行，但严谨起见

using namespace std;

// 解决统计负数、零和正数个数的问题
void solve() {
    int n;
    // 循环读取每一组数据，直到 n=0
    while (cin >> n && n != 0) {
        int negative_count = 0; // 负数个数 a
        int zero_count = 0;     // 零的个数 b
        int positive_count = 0; // 正数个数 c
        double num;

        // 读取接下来的 n 个实数
        for (int i = 0; i < n; ++i) {
            if (!(cin >> num)) {
                // 如果读取失败，例如到达文件末尾或输入错误，可以退出
                return; 
            }

            // 统计
            if (num < 0) {
                negative_count++;
            } else if (num > 0) {
                positive_count++;
            } else {
                // num == 0，考虑浮点数与0的比较，
                // 如果输入是精确的 0，直接比较 num == 0 即可。
                // 更严谨的浮点数比较是使用一个很小的 epsilon (例如 1e-9)
                // if (fabs(num) < 1e-9)
                zero_count++;
            }
        }

        // 输出结果：a b c
        cout << negative_count << " " << zero_count << " " << positive_count << endl;
    }
}

int main() {
    // 提高输入输出效率
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}