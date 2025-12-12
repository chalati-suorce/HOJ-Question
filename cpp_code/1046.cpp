#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,e,f,g,h,i,j;
    int length;
    int count=0;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>length;
        int arrry[10]={a,b,c,d,e,f,g,h,i,j};
        for(int m=0;m<10;m++){
            if(arrry[m]<=(length+30)){
                count+=1;
            }
        }
        cout<<count<<endl;
}