#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t ;
    int sol ;
    cin >> t ;
    sol = pow(t,4)-3*pow(t,3)+pow(t,2)-4*t+12 ;
    cout << sol << endl ;
    return 0;
}