#include<iostream>

using namespace std;

int main(){
    double s = 0;
    int k;
    cin >> k;
    
    int n = 0;
    
    while(s <= k){ 
        n++;
        s += 1.0 / n;
    }
    
    cout << n;
    return 0;
}