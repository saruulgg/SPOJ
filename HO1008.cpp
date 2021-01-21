#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    int sum = 0;
    int urj = 1 ;
    int tmp ;
    while(t>0){
        tmp = t % 10 ;
        sum += tmp ;
        urj *= tmp ;
        t /= 10 ;
    }
    cout << sum << " " << urj ;
    return 0;
}