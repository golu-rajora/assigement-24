//2. Define a function to find the highest value digit in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int highest_degit(int x)
{
    int a[20]={0};
    for(int i=0;x>0;i++)
    {
        a[i]=x%10;
        x=x/10;
    }
    int max=-1;
    for(int i=0;i<20;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int main()
{
    int x;
    cout<<"enter a number:-";
    cin>>x;
    int z=highest_degit(x);
    cout<<x<<" number highest digit is="<<z;
    getch();
    
    return 0;
}