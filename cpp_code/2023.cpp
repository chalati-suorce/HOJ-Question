#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int m,n;

    while(cin>>n>>m){
        int arr[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>arr[i][j];
            }
        }

        int isum=0,jsum=0;
        int avgi,avgj;
        int temp=0,sum=0;

        for(int i=1;i<=n;i++){
            int stu_sum = 0;
            for(int j=1;j<=m;j++){
                stu_sum += arr[i][j];
            }
            double avgi= (double) stu_sum/m;
            cout<<fixed<<setprecision(2)<<avgi<<" ";
        }
        cout<<endl;

        for(int j=1;j<=n;j++){
            int course_sum = 0;
            for(int i=1;i<=m;i++){
                course_sum += arr[i][j];
            }
            double avgj = (double)course_sum/n;
            cout<<fixed<<setprecision(2)<<avgj<<" ";
        }
        cout<<endl;

        int count = 0;
        for(int j=1;j<=n;j++){
            for(int i=1;i<=m;i++){
                if(arr[i][j]>=avgi){
                    ++temp;
                }
                else continue;
            }
            if(temp==m){
                ++sum;
                temp=0;
            }
        }
        cout<<sum<<endl;
    }
}