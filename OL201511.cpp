#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b ;
    while(a>=b){
        if(a%2==0){
            a = a / 2 ;
            cout << ":2" << " ";
        }
        if(a%2==1){
            a = a - 1; 
            cout << "-1" << " ";
        }
    }
    return 0;
}