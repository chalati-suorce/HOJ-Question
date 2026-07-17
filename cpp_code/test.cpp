#include <iostream>

using namespace std;

// 判断一个整数的各个数位中是否包含数字 2
bool hasTwo(int n) {
    while (n > 0) {
        if (n % 10 == 2) {
            return true;
        }
        n /= 10;
    }
    return false;
}

// 判断是否为闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取某年某月的天数
int getDaysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

int main() {
    int count = 0;
    
    // 遍历年份
    for (int y = 1900; y <= 9999; ++y) {
        bool yHasTwo = hasTwo(y);
        

        for (int m = 1; m <= 12; ++m) {
            bool mHasTwo = hasTwo(m);
            int days = getDaysInMonth(y, m);
            
            // 遍历天数
            for (int d = 1; d <= days; ++d) {
                // 如果年、月、日中任意一个包含 2，则符合条件
                if (yHasTwo || mHasTwo || hasTwo(d)) {
                    count++;
                }
            }
        }
    }
    
    // 按题目要求只输出结果
    cout << count << endl;
    
    return 0;
}