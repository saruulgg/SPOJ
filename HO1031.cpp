#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b ;
    double sol  ;
    sol = a / b ;
    cout.setf(ios::fixed) ;
    cout.setf(ios::showpoint) ;
    cout << setprecision(1) ; 
    cout << sol << endl ;
    return 0;
}