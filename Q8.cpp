//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
#include<conio.h>
using namespace std;
int area(int x)
{
    return 3.14*x*x;
}
float area(float x,float y)
{
    return x*y;
}
int area(int x,int y)
{
    return 0.5*x*y;
}
int main()
{
    int x,y;
    float a,b;
    cout<<"area of circle:-"<<endl;
    cout<<"enter a radious:-";
    cin>>x;
    cout<<"area of circle is="<<area(x)<<endl;
    cout<<"area of rectangle:-"<<endl;
    cout<<"enter length and width:-";
    cin>>a>>b;
    cout<<"area of rectangle is="<<area(a,b)<<endl;
    cout<<"area of triangle:-"<<endl;
    cout<<"enter a base and height:-";
    cin>>x>>y;
    cout<<"area of triangle="<<area(x,y);
    getch();
    
    return 0;
}