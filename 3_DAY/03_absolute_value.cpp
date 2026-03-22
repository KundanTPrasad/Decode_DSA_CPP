#include<iostream>
using namespace std;

// int main () {
//     cout<<"Enter Your Integer = ";
//     int x;
//     cin>>x;
//     if(x<0){
//         cout<<-x;                    // case 1
//     }
//     else { 
//         cout<<x;
//     }

//     return 0;
// }
int main(){
    cout<<"Enter an integer = ";
    int x,y;
    cin>>x;             // case - 2
    if(x<0){
        y = -x;
    }
    cout<<"Absolute Value Of "<<x<<" is "<<y;
}