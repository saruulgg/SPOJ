#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double t ;
    cin >> t ;
    cout.setf(ios::fixed) ;
    cout << setprecision(2) ;
    cout << 2*t*3.14 << endl ;
    return 0;
}