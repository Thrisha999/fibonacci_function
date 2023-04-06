#include<stdio.h>
void main()
{
   void fibo(int a);
   int n;
   printf("enter upto which no. u want series:");
   scanf("%d",&n);
   printf("\n fibonacci series:\n");
   fibo(n);	
}
void fibo(int a)
{
	int b=0,c=1,d;
	printf("%d %d",b,c);
	d=b+c;
	while(d<a)
	{
		printf("%d\t",d);
		b=c;
		c=d;
		d=b+c;
		
	}
}
