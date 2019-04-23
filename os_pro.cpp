#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int Max[10][10], need[10][10], alloc[10][10], avail[10], completed[10], safeSequence[10];
int p, r, i, j, process, count=0;

cout<<"Enter the no of processes : ";
cin>>p;

for(i = 0; i< p; i++)
completed[i] = 0;

cout<<"\n\nEnter the no of resources : ";
cin>>r;

for(i = 0; i < p; i++)
{
cout<<"\n\nEnter the max matrix For process:: "<<i + 1<<endl;
for(j = 0; j < r; j++)
cin>>Max[i][j];
}

for(i = 0; i < p; i++)
{
cout<<"\nEnter the allocation For process:: "<<i + 1<<endl;
for(j = 0; j < r; j++)
cin>>alloc[i][j];
}

cout<<"\n\nEnter the Available Resources : ";
for(i = 0; i < r; i++)
cin>>avail[i];

for(i = 0; i < p; i++){
for(j = 0; j < r; j++){
need[i][j] = Max[i][j] - alloc[i][j];
}
}

do
{
cout<<"\nMax matrix:\tAllocation matrix:\n";

for(i = 0; i < p; i++)
{
for( j = 0; j < r; j++){
cout<<Max[i][j]<<"  ";
}
for( j = 0; j < r; j++){
cout<<"\t"<<alloc[i][j]<<"  ";
}
cout<<endl;
}

process = -1;
for(i = 0; i < p; i++)
{
if(completed[i] == 0)
{
process = i ;
for(j = 0; j < r; j++)
{
if(avail[j] < need[i][j])
{
process = -1;
break;
}
}
}
if(process != -1)
break;
}
if(process != -1)
{
cout<<"\nProcess "<<process + 1<<" runs to completion!";
safeSequence[count] = process + 1;
count++;
for(j = 0; j < r; j++)
{
avail[j] += alloc[process][j];
alloc[process][j] = 0;
Max[process][j] = 0;
completed[process] = 1;
}
}
}
while(count != p && process != -1);

if(count == p)
{
cout<<"\nThe system is in a safe state!!\n";
cout<<"Safe Sequence : < ";
for( i = 0; i < p; i++)
cout<<safeSequence[i]<<"\n";
}
else
cout<<"\nThe system is in an unsafe state!!";
}
