#include <stdio.h>
#include <math.h>
int main()
{
	int a[20][20],b[20][20],i,j,k,mul;
	int c,d,e,f,sum=0;
	printf("enter the order of first matrix\n");
	scanf("%d %d",&c,&d);
	
	printf("enter the order ofsecond matrix\n");
	scanf("%d %d",&e,&f);
	for(i=1;i<=1;i++)
	{
		if(d!=e)
		{
	   printf("matrix does not exist\n");
	   break;
		}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
		
		printf(" Enter the  element a[%d][%d]:",i+1,j+1);
		scanf("%d",&a[i][j]);
	
	
}
	}
	printf("enter the elements of second matrix\n");
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++)
		{
		printf(" Enter the  element a[%d][%d]:",i+1,j+1);
	scanf("%d",&b[i][j]);
  }
 }
  for(i=0;i<c;i++)
	{
		{
			for(k=0;k<f;k++)
		{
		for(j=0;j<f;j++)
		
	{
	   mul=a[i][j]*b[j][k];
	sum+=mul;	
	   
			
    }
     printf("%d\t",sum);
   sum=0;
    }
    printf("\n");
	}
}
}
}


