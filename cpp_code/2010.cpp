#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// 函数：判断一个三位数是否为水仙花数
bool is_narcissistic(int num) {
    // 检查是否在三位数范围，虽然题目保证了输入范围，但作为判断函数可以更通用
    if (num < 100 || num > 999) {
        return false;
    }

    int original_num = num;
    int sum_of_cubes = 0;
    
    // 提取个位、十位、百位数字
    int a = num / 100;      // 百位
    int b = (num / 10) % 10; // 十位
    int c = num % 10;        // 个位
    
    // 计算各位数字的立方和
    sum_of_cubes = a * a * a + b * b * b + c * c * c;
    
    // 判断是否相等
    return sum_of_cubes == original_num;
}

void solve_narcissistic() {
    int n, m;
    
    // 循环处理多组输入
    while (cin >> n >> m) {
        vector<int> results;
        
        // 遍历 n 到 m 范围内的所有数字
        for (int i = n; i <= m; ++i) {
            if (is_narcissistic(i)) {
                results.push_back(i);
            }
        }
        
        // 输出结果
        if (results.empty()) {
            cout << "no" << endl;
        } else {
            // 按要求从小到大输出，用空格隔开
            for (size_t i = 0; i < results.size(); ++i) {
                cout << results[i];
                if (i < results.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}

 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve_narcissistic();
     return 0;
 }