#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double n;
    double const PI=3.1415927;
    
    while(cin>>n){
        double volume = (4.0/3.0) * PI * pow(n, 3);
        cout << fixed << setprecision(3) << volume << endl;
    }
    return 0;
}
