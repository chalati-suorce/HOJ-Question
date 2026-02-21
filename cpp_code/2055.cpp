#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        char y;
        int x;
        for(int i=0;i<n;i++){
            int fx;
            cin>>y>>x;
            if(y>='A' && y<='Z'){
                fx=y-'A'+1;
            }else if(y>='a' && y<='z'){
                fx=-(y-'a'+1);
            }
            cout<<fx+x<<endl;
        }
        
    }
}