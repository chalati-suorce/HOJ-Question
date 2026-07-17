#include<bits/stdc++.h>

using namespace std;

long long int fun(long long int n,long long int res){
    if(0<n && n<=3){
        res = n;
        return res;
    }
    else if(n >= 4){
        res = fun(n - 1,res) +fun(n - 3,res);
        return res;
    }
    
}

int main(){
    long long int n=0;
    long long int res=0;
    while(cin>>n){
        if (n==0)break;
        else if ( 0 < n && n < 4){
            cout<<n<<endl;
            
        }
        else if (n >= 4){
            res = fun(n,res);
            cout<<res<<endl;
        } 
    }
    return 0;
}