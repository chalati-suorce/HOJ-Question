#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double n;
    while(cin>>n){
        if(n>=0)
        cout<<fixed<<setprecision(2)<<n<<endl;
        else if(n<0)
        cout<<fixed<<setprecision(2)<<(-1*n)<<endl;
    }
    return 0;
}