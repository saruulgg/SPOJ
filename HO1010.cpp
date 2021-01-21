#include<iostream>
using namespace std;
int main(){
    int t ;
    int rem ; 
    int rev ;
    int sol = 0 ;
    int temp ;
    cin >> t ;
    temp = t ;
    while(t>0){
        rem = t % 10 ;
        sol = (sol*10)+rem ;
        t = t / 10 ;
    }
    cout << sol << endl ;
    return 0;

}