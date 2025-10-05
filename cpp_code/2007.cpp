#include<iostream>

using namespace std;

int main(){
    int first, last;
    
    while(cin >> first >> last){
        long long r1 = 0;
        long long r2 = 0;

        int start = min(first, last);
        int end = max(first, last);
        
        for(int i = start; i <= end; i++){
            if(i % 2 == 0){
                r1 += (long long)i * i;
            } else {
                r2 += (long long)i * i * i;
            }
        }
        
        cout << r1 << " " << r2 << endl;
    }
    
    return 0;
}
