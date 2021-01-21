#include<iostream>
using namespace std;
int main(){
    int t = 1; 
    int arr[5] ;
    for(int i=0;i<4;i++){
        cin >> arr[i] ;
        t *= arr[i] ;
    }
    cout << t << endl ;
    return 0;
}