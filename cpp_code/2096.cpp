#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a,b;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a>=100)a=a%100;
            if(b>=100)b=b%100;
            sum=a+b;
            if(sum>=100)sum=sum%100;
            cout<<sum<<endl;
        }
    }
}