#include<iostream>
using namespace std;
int main(){
    int arr[3] ;
    int sum = 0 ;
    for(int i=0;i<=2;i++){
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    if(sum%2==0){
        cout << "Yes" << endl ;
    }
    else cout << "No" << endl ;
    return 0;
}