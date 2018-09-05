/*euclid method*/
#include <stdio.h>
int gcd(int m,int n)
{
	if(n==0)
	{
		return m;
	}
	else if(m>n && n>0)
	{
		return gcd(n,(m%n));
	}
}

int main()
{
	int a,b,c;
	printf("enter value of m,n");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("gcd of two no %d and %d is %d",a,b,c);
}