#include<iostream>
using namespace std;
int main(){
    int t ;
    int rem ;
    int sum = 0 ;
    cin >> t ;
    while(t>0){
    rem = t % 10 ;
    sum += rem*rem ;
    t = t / 10 ;
}
cout << sum << endl ;
return 0;
}