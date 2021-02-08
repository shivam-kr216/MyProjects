#include<stdio.h>
int main()
{
int i,j,k=0,l=1,m;
printf("enter the value\n");
scanf("%d",&j);
for(i=1;i<j;i++)
{
m=k+l;
k=l;
l=m;

}
printf("sum= %d\n",m);

	
}
