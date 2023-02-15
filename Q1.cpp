//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
#include<conio.h>
using namespace std;
int  prime(int x)
{
    int i;
    for( i=2;i<x;i++)
    {
        if(x%i==0)
        break;
    }
    if(x==i)
    return 1;
    else
    return 0;
}
int main()
{
    int x;
    cout<<"enter a number:-";
    cin>>x;
    if(prime(x))
    cout<<x<<" " <<"number is prime";
    else
    cout<<x<<" "  <<"number is not prime";
    getch();
    return 0;
}