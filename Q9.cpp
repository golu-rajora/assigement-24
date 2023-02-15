//9. Write functions using function overloading to find a maximum of two numbers and both  the numbers can be integer or real.
#include<iostream>
#include<conio.h>
using namespace std;
int maximum(int x,int y)
{
    if(x<y)
    return y;
    else
    return x;
}
float maximum(float x,float y)
{
    
    if(x<y)
    return y;
    else
    return x;
}
int main()
{
    int x,y;
    float a,b;
    cout<<"enter two interger value :-";
    cin>>x>>y;
    cout<<"maxmimum value is="<<maximum(x,y)<<endl;
    cout<<"enter two real value :-";
    cin>>a>>b;
    cout<<"maxmimum value is="<<maximum(a,b)<<endl;
    getch();

    return 0;
}