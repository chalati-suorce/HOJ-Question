#include<bits/stdc++.h>

using namespace std;

int arr[100];

int main(){
    int n,m;
    while(cin>>n>>m){
        if(n==0 && m==0) break;
        else{
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                int temp = arr[m-1];
                arr[m-1] = m;
                arr[n] = temp;
                sort(arr,arr+n+1);
                for(int i=0;i<=n;i++){
                cout<<arr[i]<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}