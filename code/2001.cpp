#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
double x1,y1,x2,y2;
while(cin>>x1>>y1>>x2>>y2){
double res1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
cout<<fixed<<setprecision(2)<<res1<<endl;
}
return 0;
}
//cmath中sqrt表示根号运算，用法为sqrt(x）
//pow表示指数运算，用法为pow(x,n)x表示底数,n表示指数

// fixed 流操作符
//作用：设置浮点数以固定小数点格式输出
//特点：强制显示小数点，即使小数部分为0
//影响范围：会影响后续所有浮点数输出，直到被其他格式操作符改变

// setprecision 流操作符
//作用：设置浮点数的输出精度（总位数或小数位数）
//参数：整数，表示精度值
//需要头文件：<iomanip>

    // eg1：只使用 setprecision（显示总位数）
    //cout << "只使用 setprecision(3):" << endl;
    //cout << setprecision(3) << num1 << endl;  // 输出: 3.14
    //cout << num2 << endl;                     // 输出: 2.5
    //cout << num3 << endl;                     // 输出: 100
    //cout << endl;

    // eg：使用 fixed + setprecision（显示小数位数）
    //cout << "使用 fixed + setprecision(3):" << endl;
    //cout << fixed << setprecision(3);
    //cout << num1 << endl;  // 输出: 3.142
    //cout << num2 << endl;  // 输出: 2.500
    //cout << num3 << endl;  // 输出: 100.000
