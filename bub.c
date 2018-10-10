#include<stdio.h>
#include<time.h>
void main()
{
	int a[100000],n,i,j,swap,time;
	clock_t start,end;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		a[i]=random(100);
	}
	start=clock();
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++);
		{
		if(a[i]>a[j])
		{
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
		}
	}
}
end=clock();
time=(end-start)/CLOCKS_PER_SEC;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("time complexcity =%d",time);
}