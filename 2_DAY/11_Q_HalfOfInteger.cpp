#include<iostream>
using namespace std;

int main () {
    cout<<"    Half of an Integer Value   "<<endl;
    int x;
    cout<<"Enter Your Integer Value = ";
    cin>>x;
    float half = (float)x/2;
    cout<<"Half of "<<x<<" is "<<half<<endl;

    cout<<"  Fractional Part of Real Number  ";
    float y;
    cout<<"Enter Your Number = ";
    cin>>y;   // {x} = x - [x]
                // {-1.3} = -1.3 - [-1.3]
                // {-1.3} = -1.3 - (-2)
                // {-1.3} = 0.7
    float z = y - (int)y;
    if(z<0) z = z+1;
    cout<<"Fractional Value of Your Number = "<< z;
     // check
     // use if else trick for negative fractional




    return 0;
}