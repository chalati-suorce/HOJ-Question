//输入：反复输入a和 b，当a和b 都等于0的时候，程序结束；//
//输出：a和b的和//

#include<iostream>

using namespace std;

int main(){
    int a,b,sum;
    while(cin>>a>>b){
        sum=a+b;
        if(a==0&&b==0)break;
        cout<<sum<<endl;
    }
}