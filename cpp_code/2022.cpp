#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

    int m,n;

    while(cin>>m>>n){
        int arr[m+1][n+1];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
            }
        }

        int max=arr[1][1];
        int l=1,r=1;

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if (abs(max) < abs(arr[i][j])){
                    max=arr[i][j];
                    l=i;
                    r=j;
                }
                else if (abs(max) == abs(arr[i][j])){
                    if(i<l || i==l && j<=r){
                        l=i;
                        r=j;
                    }
                }
            }
        }
        cout<<l<<" "<<r<<" "<<max<<endl;
    }
    return 0;
}