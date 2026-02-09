#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int sum=0;
        if(n==0)break;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
            cout<<sum<<endl;
    }
}