//4. Define a function to print Pascal Triangle up to N lines
#include<conio.h>
#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    f=f*i;
    return f;
}
int comb(int n,int r)
{
    return (fact(n))/fact(n-r)*fact(r);
}
int main()
{
    int n;
    cout<<"enter a number to print pascal triangle in line :-";
    cin>>n;
    int i,r;
    for(int i=0;i<n;i++)
    {
        for(int r=0;r<=i;r++)
        {
            cout<<comb(i,r);
        }
        cout<<endl;
    }
    getch();

    return 0;
}