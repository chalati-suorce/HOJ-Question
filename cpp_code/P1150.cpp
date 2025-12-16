#include <iostream>
using namespace std;

int main() {
    long long n, k;
    while (cin >> n >> k) {
        // 公式：总烟数 = n + (n-1)/(k-1)
        long long total = n + (n - 1) / (k - 1);
        cout << total << endl;
    }
    return 0;
}
