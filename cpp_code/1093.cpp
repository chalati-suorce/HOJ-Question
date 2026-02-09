#include<iostream>

using namespace std;

int main(){
    int n;cin>>n;
        for(int j=0;j<n;j++){
        int m;
        cin>>m;
        int sum=0;
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        cout<<sum<<endl;
     }
}