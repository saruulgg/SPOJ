#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    int hour, minut, secund ;
    hour = t / 3600 ;
    minut = (t - (3600*hour))/60 ;
    secund = t-(3600*hour) - (minut*60) ;
    cout << hour << " tsag" << endl ;
    cout << minut << " minut" << endl ;
    cout << secund << " secund" << endl ;
    return 0;
}