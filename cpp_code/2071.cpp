#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int t;
    while(cin>>t){
        int n;
        for(int i=0;i<t;i++){
            while(cin>>n){
                double arr[n];
                for(int m=0;m<n;m++){
                    cin>>arr[m];
                }
                double max=arr[0];
                for(int x=0;x<n;x++){
                    if(max<arr[x])max=arr[x];
                }
                cout<<fixed<<setprecision(2)<<max<<endl;
            }
        }
    }
}