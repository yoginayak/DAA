/*consecutive method*/
#include <stdio.h>
int gcd(int m,int n)
{
  int t;
  if(m>n)
  {
  	printf("smaller no is %d",n);
  	t=n;
  }
  else{
  	printf("smaller no is %d",m);
  	t=m;
  }
  do{
  	if(m%t==0 && n%t==0)
  	{
  		return t;
  	}
  	else{
  		t--;
  	}
  }
  	while(t>0);
}

void main()
{
	int a,b,c;
	printf("enter value of m,n");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("gcd of two no %d and %d is %d",a,b,c);
}