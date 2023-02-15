//10. Write functions using function overloading to add two numbers having different data types
#include<iostream>
#include<conio.h>
using namespace std;
int add(int x)
{
    return x;
}
float add(float x)
{
    return x;
}
int main()
{
    int x;
    float y,z;
    cout<<"enter two number:-";
    cin>>x>>y;
    z=add(x)+add(y);
    cout<<x<<" " <<"and "<<y<<" number addtion is="<<z;
    getch();
    return 0;
}