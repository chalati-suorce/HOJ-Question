#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // 如果数组只有一个元素，自动是Jolly
    if (n == 1) {
        cout << "Jolly" << endl;
        return 0;
    }
    
    // 使用集合来存储差的绝对值
    unordered_set<int> differences;
    
    // 计算相邻元素差的绝对值
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        differences.insert(diff);
    }
    
    // 检查是否包含[1, n-1]的所有整数
    bool isJolly = true;
    for (int i = 1; i < n; i++) {
        if (differences.find(i) == differences.end()) {
            isJolly = false;
            break;
        }
    }
    
    if (isJolly) {
        cout << "Jolly" << endl;
    } else {
        cout << "Not jolly" << endl;
    }
    
    return 0;
}
