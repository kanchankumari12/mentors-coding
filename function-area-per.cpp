#include <iostream>

using namespace std;

int area ( int,int);
int pri (int,int);
int main()
{
    int a,b,l,m;
    cout<<"enter the length and breath";
    cin>>l>>m;
    a=pri(l,m);
    b=area(l,m);
    cout<<"pri is"<<a<<endl;
    cout<<"area is"<<b;
    
}
int area (int m,int n)
{
int c;
c=m*n;
return c;
}
int pri (int m,int n)
{
int d;
d=(2*(m+n));
return d;
}
