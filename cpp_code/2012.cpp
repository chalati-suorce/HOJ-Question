#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

/**
 * 函数：判断一个整数是否为素数 (Prime Number)
 * 仅用于本题的范围：N <= 2591
 * @param N 待判断的整数
 * @return 如果是素数返回 true，否则返回 false
 */
bool is_prime(long long N) {
    // 0 和 1 不是素数
    if (N <= 1) {
        return false;
    }
    
    // 2 是最小的素数
    if (N == 2) {
        return true;
    }
    
    // 偶数（大于2）不是素数
    if (N % 2 == 0) {
        return false;
    }

    // 从 3 开始，只试除到 sqrt(N) 的奇数
    // 由于 N 最大 2591，sqrt(2591) 约 50.9，所以循环次数很少。
    long long limit = (long long)sqrt(N);
    for (long long i = 3; i <= limit; i += 2) {
        if (N % i == 0) {
            return false;
        }
    }
    
    return true;
}

void solve() {
    int x, y;
    
    // 循环读取输入，直到 x=0 且 y=0
    while (cin >> x >> y) {
        if (x == 0 && y == 0) {
            break; // 结束标记
        }

        bool all_prime = true;
        
        // 遍历范围 [x, y] 内的所有整数 n
        for (int n = x; n <= y; ++n) {
            // 计算表达式的值：n^2 + n + 41
            // 结果可能需要 long long 来存储，虽然本题最大值 2591 int 足够，
            // 但计算 n*n 时最好使用 long long 以防溢出（虽然 n 最大 50 也不会）
            long long result = (long long)n * n + n + 41;
            
            // 判断结果是否为素数
            if (!is_prime(result)) {
                all_prime = false;
                break; // 只要有一个不是素数，就可以提前结束判断
            }
        }
        
        // 输出结果
        if (all_prime) {
            cout << "OK" << endl;
        } else {
            cout << "Sorry" << endl;
        }
    }
}

int main() {
    // 优化输入/输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}