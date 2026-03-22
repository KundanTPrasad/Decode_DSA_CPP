#include<iostream>
using namespace std;

int main () {
    
    cout<< "   Divisibility By 5 & 3   "<<endl;
    cout<<"Enter Your Number = ";
    int x ;
    cin>>x;
    //if(x%5==0 && x%3==0){//          M E T H O D - 1
    if(x%15==0){        //          M E T H O D - 2
        cout<<x<<" Is Divisible By 5 & 3 ";
    }
    else{
        cout<<x<<" Is NOT Divisible By 5 & 3";
    }
    return 0;
}