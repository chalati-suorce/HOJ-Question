#include <iostream>
#include <vector>
#include <algorithm> // 用于 std::sort
#include <iomanip>   // 用于 setprecision

using namespace std;

void solve() {
    int n; // 评委人数 (n > 2)
    
    // 循环读取多组输入
    while (cin >> n) {
        // 由于 n <= 100，分数通常是整数或浮点数。
        // 为了确保计算精度，我们使用 double 类型来存储分数。
        vector<double> scores(n);
        double sum = 0.0;

        // 1. 读取 n 个分数并计算总和
        for (int i = 0; i < n; ++i) {
            if (!(cin >> scores[i])) {
                // 读取失败，可能输入结束，退出当前组处理
                return; 
            }
            sum += scores[i];
        }

        // 2. 找到最大值和最小值
        // 方法一：使用 std::sort
        // 对分数进行排序。排序后，scores[0] 是最小值，scores[n-1] 是最大值。
        sort(scores.begin(), scores.end());
        
        // 最小值
        double min_score = scores[0]; 
        // 最大值
        double max_score = scores[n - 1];

        // 3. 计算有效分数的总和 (去掉一个最高分和一个最低分)
        double effective_sum = sum - min_score - max_score;
        
        // 4. 计算平均分
        // 评委人数 n > 2，所以 n-2 至少是 1。
        double average_score = effective_sum / (n - 2);

        // 5. 输出结果，保留 2 位小数
        cout << fixed << setprecision(2) << average_score << endl;
    }
}

int main() {
    // 优化输入/输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}