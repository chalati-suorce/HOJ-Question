#include<iostream>

using namespace std;

int main(){
	int length,wide;
	while(cin>>length>>wide){
		for(int i=0;i<wide+2;i++){
			if(i==0){
				cout<<'+';
				for(int j=0;j<length;j++){
					cout<<'-';
				}
				cout<<'+'<<endl;
			}
			else if(i==wide+1){
				cout<<'+';
				for(int j=0;j<length;j++){
					cout<<'-';
				}
				cout<<'+'<<endl;
			}
			else {
				cout<<'|';
				for(int j=0;j<length;j++){
					cout<<' ';
				}
				cout<<'|'<<endl;
			}
		}
	}
}