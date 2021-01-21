#include<iostream>
using namespace std;
 int main(){
     int t ;
     int rem;
     cin >> t ;
     int sum = 0 ;
     int urj = 1 ;
     while(t>0){
         rem = t % 10 ;
         sum += rem ;
         urj = urj*rem ;
         t = t / 10 ;
     }
     cout << sum << endl ;
     cout << urj << endl ;
     return 0;
 }