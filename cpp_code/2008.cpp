#include<iostream>
using namespace std;
int main(){
    double n;
    while(cin>>n){
        int a=0,b=0,c=0;
        double *num=new double[int(n)];
        for(int i=0;i<int(n);i++){
            cin>>num[i];
        }
        for(int i=0;i<int(n);i++){
            if(num[i]==0){
                b+=1;
            }
            else if(num[i]>0){
                c+=1;
            }
            else{
                a+=1;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        delete[] num; 
    }
    return 0;
}
