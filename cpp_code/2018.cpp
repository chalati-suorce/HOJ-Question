#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int res;
    while(cin>>n){
        if (n==0)break;
        else if ( 0 < n && n<=4){
            cout<<n<<endl;
        }
        else if (n>4){
            res = (n % 4) + (n / 4);
            cout<<res<<endl;
        } 
    }
    return 0;
}