#include<iostream>

using namespace std;
int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            int SH=0,SM=0,SS=0;
            int AH,AM,AS,BH,BM,BS;
            int S1,S2,S3;
            cin>>AH>>AM>>AS>>BH>>BM>>BS;
            SS+=AS+BS;
            if(SS>=60){
                SS=SS%60;
                SM++;
            }
            SM+=AM+BM;
            if(SM>=60){
                SM=SM%60;
                SH++;
            }
            SH+=AH+BH;
            cout<<SH<<" "<<SM<<" "<<SS<<endl;
        }
    }
}