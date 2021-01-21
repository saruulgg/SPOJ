#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double t ;
    cin >> t ;
    double sol ;
    sol = t*2.54 ;
    cout.setf(ios::fixed) ;
    cout.setf(ios::showpoint) ;
    cout << setprecision(1) ;
    cout << sol << endl ;
    return 0;
}