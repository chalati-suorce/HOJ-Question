#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        for(int j=0;j<n;j++){
            int m,temp,sum=0;
            cin>>m;
        for(int i=0;i<m;i++){
            cin>>temp;
            sum+=temp;
        }
        cout<<sum<<endl;
        cout<<endl;
    }
}
}