#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int* arr = new int[n];  // 动态分配数组
        int product = 1;
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        for(int j=0;j<n;j++){
            if(arr[j] % 2 != 0){
                product *= arr[j];
            }
        }
        cout<<product<<endl;
        delete[] arr;  // 释放内存
    }
    return 0;
}
//new操作符的用法
// 分配单个对象
//类型* 指针名 = new 类型;
//类型* 指针名 = new 类型(初始值);

// 分配对象数组
//类型* 指针名 = new 类型[数组大小];
// 分配单个整数
//int* p1 = new int;        未初始化
//int* p2 = new int(42);    初始化为42

// 分配单个对象
//string* str = new string("hello");

// 分配数组
//int* arr1 = new int[10];           10个整数数组
//double* arr2 = new double[5];      5个双精度数组
//delete
// 释放单个对象
//delete 指针名;

// 释放对象数组
//delete[] 指针名;

// 释放单个对象
//delete p1;
//delete p2;
//delete str;

// 释放数组
//delete[] arr1;
//delete[] arr2;
