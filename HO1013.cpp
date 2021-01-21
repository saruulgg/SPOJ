#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    int last ;
    int first ;
    last = t % 10 ;
    first = (t / 1000) % 10;
    cout << last + first << endl ;
    return 0;
}