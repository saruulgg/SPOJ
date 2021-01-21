#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    int rem ;
    int sum = 0 ;
    while(t>0){
        rem = t % 10 ;
        sum = sum*10+rem ;
        t = t / 10 ;
    }
    cout << sum << endl ;
    return 0;
}