#include<iostream>
using namespace std;
int main (){
    // float P,R,T,SI;
    // P = 100;
    // R = 10;
    // T = 2;
    // SI = (P*R*T)/100;
    // cout<<"SI= "<<SI;

    float P,R,T,SI;
    cout<<endl;
    cout<<"       Calculation of SI        "<<endl;
    cout<<"Principle = ";
    cin>>P;
    cout<<"Rate = ";
    cin>>R;
    cout<<"Time = ";
    cin>>T;
    SI = (P*R*T)/100;
    cout<<"SI = "<<SI;
    return 0;


}