//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
#include<conio.h>
using namespace std;
 void swap(int &p,int &q)
 {
     int a;
     a=p;
     p=q;
     q=a;
 }
int main()
{
    int a,b;
    cout<<"enter two number:-";
    cin>>a>>b;
    cout<<"before swap value a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout<<"after swap value a="<<a<<" and b="<<b<<endl;
    getch();
    return 0;
}