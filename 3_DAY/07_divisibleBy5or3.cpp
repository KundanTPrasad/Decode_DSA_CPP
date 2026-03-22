#include<iostream>
using namespace std;

int main () {
    cout<<"   If divisible by 5 or 3   "<<endl;
    cout<<"Enter Your Number = ";
    int x;
    cin>>x;
    if (x%5==0 || x%3==0){
        cout<<x<<" is divisible by 3 or 5 ";
    }
    else{
         cout<<x<<" is NOT divisible by 3 or 5 ";
    }
    return 0;
}