//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
#include<conio.h>
using namespace std;
 int add(int x,int y,int z=0)
{
    return x+y+z;
}
int main()
{
    int x,y,z;
    cout<<"enter two number:-";
    cin>>x>>y;
    cout<<x <<" and "<<y<<" number add is="<<add(x,y);
     cout<<endl<<"enter three number:-";
    cin>>x>>y>>z;
    cout<<x <<" " <<y<<" and "<<z <<" number add is="<<add(x,y,z);
    getch();

    return 0;
}