#include<iostream>
using namespace std;
int main() {
    int x = 5;
    cout<<x<<endl;
    x++;  // post increment  x = x + 1
    cout<<x<<endl;
    ++x;   // pre increment  x = x + 1
    cout<<x<<endl;
    cout<<endl<<endl<<endl;

    cout<<++x<<endl;  // first increase the value of x, then print x.
    cout<<x<<endl<<endl<<endl;

    cout<<x++<<endl;  // first print x then increase the value of x.
    cout<<x<<endl<<endl<<endl;
                    //SIMILARLY
    int y = 9;
    cout<<y<<endl;
    y--;                            // post decrement  y = y - 1
    cout<<y<<endl;
    --y;                            // pre decrement   y = y - 1
    cout<<y<<endl<<endl<<endl;

    cout<<--y<<endl<<endl<<endl;    // first decrease the value of y then print it

    cout<<y--<<endl;                // first print the value of y then increase the value of y
    cout<<y;
    return 0;



}