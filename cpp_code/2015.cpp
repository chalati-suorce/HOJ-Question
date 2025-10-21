#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

void solve() {
    int n, m; // n: 数列长度, m: 每组的个数
    
    // 循环读取多组输入
    while (cin >> n >> m) {
        // 用于存储计算得到的平均值
        vector<int> average_sequence;
        
        // 记录当前组的总和
        long long current_sum = 0; 
        // 记录当前组的元素个数
        int current_count = 0;
        
        // i 表示数列的项数，从 1 到 n
        for (int i = 1; i <= n; ++i) {
            // 数列的第 i 项是 2 * i
            long long term = 2 * i;
            
            current_sum += term;
            current_count++;
            
            // 检查当前组是否达到 m 个数，或者是否是数列的最后一项
            // 如果达到 m 个数，或者 i 已经等于 n (最后一项)
            if (current_count == m || i == n) {
                // 计算平均值。注意：题目示例输出是整数，说明平均值可能被要求取整。
                // 示例 1: n=3, m=2
                // 数列: 2, 4, 6
                // 第 1 组: 2, 4 -> Sum=6, Count=2, Avg=3. (输出 3)
                // 第 2 组: 6 -> Sum=6, Count=1, Avg=6. (输出 6)
                // 结果: 3 6。 
                // 结论: 平均值是整数计算。
                
                // 由于数列项都是偶数，m=2 时平均值是整数。
                // 但为了严谨和通用性，我们先用浮点数计算，然后取整 (或者直接使用整数除法)。
                // 鉴于样本输出是整数，我们使用整数除法，这在 ACM 题中通常表示向下取整或题目保证平均值为整数。
                // 考虑到题目要求输出平均值序列，且样本输出是整数，我们使用整数除法。
                int average_value = (int)(current_sum / current_count);
                
                average_sequence.push_back(average_value);
                
                // 重置计数器和总和，开始下一组
                current_sum = 0;
                current_count = 0;
            }
        }
        
        // 输出结果序列
        for (size_t i = 0; i < average_sequence.size(); ++i) {
            cout << average_sequence[i];
            if (i < average_sequence.size() - 1) {
                cout << " "; // 用空格隔开
            }
        }
        cout << endl;
    }
}

int main() {
    // 优化输入/输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}