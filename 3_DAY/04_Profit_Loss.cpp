#include<iostream>
using namespace std;

// int main () {
//     int x,y,z;
//     cout<<"Enter Your Purchase Price = Rs ";
//     cin>>x;
//     cout<<"Enter Your Selling Price = Rs ";
//     cin>>y;
//     if(x<y){
//         z = y - x;
//         cout<<"Profit of Rs "<<z;
//      }
//      else{      // x=>y;                     // if we put same amount we will get loss
//         z = x - y;
//         cout<<"Loss Of Rs "<<z;
//      } 
//     return 0;
//}


int main () {
    int x,y,z;
    cout<<"Enter Your Purchase Price = Rs ";
    cin>>x;
    cout<<"Enter Your Selling Price = Rs ";
    cin>>y;
    if(x<y){
        z = y - x;
        cout<<"Profit of Rs "<<z;
     }
    if (x>y){    
        z = x - y;
        cout<<"Loss Of Rs "<<z;
     } 
     if (x==y){
        cout<<"No Profit, No Loss!";
     }
    return 0;
}