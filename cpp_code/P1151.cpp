#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    
    bool found = false;
    
    // 遍历10000到30000之间的所有五位数
    for (int i = 10000; i <= 30000; i++) {
        // 提取各位数字
        int a1 = i / 10000;          // 万位
        int a2 = (i / 1000) % 10;    // 千位
        int a3 = (i / 100) % 10;     // 百位
        int a4 = (i / 10) % 10;      // 十位
        int a5 = i % 10;             // 个位
        
        // 计算三个子数
        int sub1 = a1 * 100 + a2 * 10 + a3;  // a1a2a3
        int sub2 = a2 * 100 + a3 * 10 + a4;  // a2a3a4
        int sub3 = a3 * 100 + a4 * 10 + a5;  // a3a4a5
        
        // 检查是否都能被k整除
        if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) {
            cout << i << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "No" << endl;
    }
    
    return 0;
}
