#include<iostream>
using namespace std;

int main () {
    int x;
    cout<<"Enter Your Integer = ";
    cin>>x;
    // if((x%3==0 || x%5==0) && (x%15!=0)){
    //     cout<<"Divisible By 3 or 5 but not by 15";

    // }
    if(x%3==0 ||x%5==0){
        if (x%15!=0){
            cout<<"The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"Not Matching Condition";
        }
    }
    else{
        cout<<"Not Matching Condition";
    }
    return 0;
}