#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    char arr[3];
    while(cin>>arr[0]>>arr[1]>>arr[2]){
    sort(arr,arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
}
    return 0;
}
//algorithm中sort表示对元素进行升序排序
//用法为sort(First,Last)