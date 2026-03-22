#include<iostream>
using namespace std;
int main() {
    cout<<"     Grade Assigning         "<<endl;
    float x;
    cout<<"Enter Your Percentage: ";
    cin>>x;
    if(x>=91 && x<=100){
        cout<<"Excellent";
    }
    if(x>=81 && x<=90){
        cout<<"Very Good";
    }
    if(x>=71 && x<=80){
        cout<<"Good";
    }
     if(x>=61 && x<=70){
        cout<<"Can do Better";
    }
     if(x>=51 && x<=60){
        cout<<"Average";
    }
     if(x>=41 && x<=50){
        cout<<"Below Average";
    }
     if(x<40){
        cout<<"Fail";
    }
    return 0;
}