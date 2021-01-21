#include<iostream>
using namespace std;
int main(){
    int t ;
    int rem ; 
    cin >> t ;
    int first ;
    int mid ;
    first = (t / 100) % 10 ;
    mid = (t/10)% 10 ;
    rem = t % 10 ;
    cout << first*first << " " << mid*mid << " " << rem*rem ;
    return 0;

}