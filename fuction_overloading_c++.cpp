//function overloading
#include<iostream>
using namespace std;

float num(float r)
{
r=3.14*r*r;
cout<<"Radius:"<<r;
}
int num(int l, int b){
int area;
area=l*b;
cout<<"area:"<<area;
}
int num(int l, int b, int h){
int vol;
vol=l*b*h;
cout<<"volume:"<<vol;
}
int main()
{
int r;
cout<<"Enter radius\n";
cin>>r;
num(r);
int l,b;
cout<<"\nEnter length and breadth\n";
cin>>l>>b;
num( l, b);
int p,q,o;
cout<<"\nEnter length, breadth and height"<<endl;
cin>>p>>q>>o;
num(p, q,  o);
return 0;
}
