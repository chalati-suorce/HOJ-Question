#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a%b==0)cout<<"YES"<<endl;
            if(a%b!=0)cout<<"NO"<<endl;
        }
    }
}