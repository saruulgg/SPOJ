#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double t ;
    cin >> t ;
    double a,b;
    double tmp1, tmp2 ;
    a = t*10 ;
    b = t * 100 ;
    tmp1 = int(a) % 10 ;
    tmp2 = int(b) % 10 ;

    cout << tmp1*tmp2 << endl ;
    return 0;
}