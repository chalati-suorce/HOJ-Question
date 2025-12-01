#include<iostream>
#include<string>
using namespace std;

 int main(){
    int n;
    string line;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
      string line;
      getline(cin,line);
      int count=0;
      for(char c:line){
         if(c >= '0' && c <= '9'){
         count++;
      }
      }
      cout<<count<<endl;
    }
    return 0;
 }