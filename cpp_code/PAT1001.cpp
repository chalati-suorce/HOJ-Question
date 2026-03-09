#include <iostream>

using namespace std;

int main(){
    int n,sum=0;
    while(cin>>n){
        for(n;n!=1;){
        if(n%2==0){
            n=n/2;
            ++sum;
    }
        else if( n==0 || n%2==1){
            n=(3*n+1)/2;
            ++sum;
        }
    }
    cout<<sum<<endl;
    }
}