//call by reference
#include<iostream>
using namespace std;
int fun(int *ptr)
{
cout<<"Address of pointer passed: "<<ptr<< endl;
cout<<"Address of pointer ptr: "<<&ptr<< endl;
*ptr+=100;
cout<<"In calling function:"<<*ptr<<endl;
}
int dis(int &ref){
cout<<"Reference address: "<<&ref ;
ref+=10;
cout<<"\ncall by reference outside the main function: "<<ref<<endl;
}
int main()
{
int i=10, j=20;
//int &ref=j;
cout<<"Address of 'j': "<<&j<<endl;
cout<<"Address of 'i': "<<&i<<endl;
//int *p;
//cout<<"Address of pointer: "<<&p<<endl;
fun(&i);
cout<<"In main function: "<<i<<endl;
dis(j);
cout<<"Call  in main function: "<<j;
}
