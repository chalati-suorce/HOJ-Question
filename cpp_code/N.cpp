#include<bits/stdc++.h>

using namespace std;

int a[10],b[10],c[10];

int main(){
for(int i=0;i<=9;i++){
    a[i]=i;
    b[i]=20+i;
    c[i]=100+i;
}
for(int i=10;i<=20;i++){
    cout<<b[i]<<" ";
}
    return 0;
}