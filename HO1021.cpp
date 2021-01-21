#include<iostream>
using namespace std ;
int main(){
    int t ;
    cin >> t ;
    int first, second, third, fourth, fifth ;
    first = (t / 10000) % 10 ;
    second = (t/1000)% 10 ;
    third = (t/100) % 10 ;
    fourth = (t/10) % 10 ;
    fifth = t % 10 ;

    cout << first << " " << second << " " << third << " " << fourth << " " << fifth << endl ;
    return 0;
}