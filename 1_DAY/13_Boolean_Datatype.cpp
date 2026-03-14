#include<iostream>
using namespace std;
int main () {
    bool flag = true;
    cout<<flag<<endl;
    bool flag1 = false;
    cout<<flag1<<endl;
    bool flag2 = 1;
    cout<<flag2<<endl;
    bool flag3 = 0;
    cout<<flag3<<endl;
    bool flag4 = 1.2;
    cout<<flag4<<endl;
    bool flag5 = -0.3243;
    cout<<flag5<<endl;
    cout<<(5<3);
    cout<<endl;
    cout<<(5>3);
    cout<<endl;

    int x,y,z;
    x = 5;
    y = 9;
    z = 5;
    cout<<(x>y)<<endl;
    cout<<(x>z)<<endl;
    cout<<(y>z)<<endl;
    cout<<(y>x)<<endl;
    cout<<(z>x)<<endl;
    cout<<(z>y)<<endl;
    cout<<(x==y)<<endl;
    cout<<(y==z)<<endl;
    cout<<(z==x)<<endl;
    cout<<(x==y==z)<<endl;
     cout<<(x!=y)<<endl;
    cout<<(y!=z)<<endl;    // !=  means not equal to
    cout<<(z!=x)<<endl;
    cout<<(x!=y!=z)<<endl;
    return 0;
}