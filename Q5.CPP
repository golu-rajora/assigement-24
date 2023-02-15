//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int x)
{
    int a=-1,b=1;
    int s=0;
    for(int i=0;i<=x;i++)
    {
        s=a+b;
        a=b;
        b=s;
        if(s==x)
        return 1;
    }
    return 0;
}
int main()
{
    int x;
    cout<<"enetr a number:-";
    cin>>x;
    if(fibonacci(x))
    cout<<"yes";
    else
    cout<<"no";
    getch();
    return 0;

}
