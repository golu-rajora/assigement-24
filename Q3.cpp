//3. Define a function to calculate x raised to the power y.
#include<iostream>
#include<conio.h>
using namespace std;
int power(int x,int y)
{
    int s=x;
    for(int i=1;i<y;i++)
    {
        s=s*x;
    }
    return s;
}
int main()
{
    int x,y;
    cout<<"enter a number and the power:-";
    cin>>x>>y;
    cout<<x<<" number the power "<<y <<" is="<<power(x,y);
    getch();
    return 0;
}