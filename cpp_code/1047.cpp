#include<iostream>
#include<vector>

using namespace std;

int main(){
    int l,m;
    cin>>l>>m;
    int u,v;
    vector<int>trees(l+1,1);
    for(int i=0;i<m;++i){
        cin>>u>>v;
        for(int j=u;j<=v;j++){
            trees[j]=0;
        }
    }
               int count=0;
        for(int i=0;i<=l;++i){
            if(trees[i]==1){
                count++;
            }
        }
        cout<<count<<endl;
}