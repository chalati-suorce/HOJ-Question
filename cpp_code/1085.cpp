#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>week(7,0);
    int a,b;
    int max=0,notice,x=0;
    for(int i=0;i<7;i++){
        cin>>a>>b;  
        if(a+b>8){
            week[i]=a+b;
        }
        else x++;
    }
    if(x<7){
        for(int j=6;j>=0;j--){
            if(week[j]>=max){
                max=week[j];
                notice=j+1;
            }
        }
    }
    else {
        notice=0;
    }
    cout<<notice;
}