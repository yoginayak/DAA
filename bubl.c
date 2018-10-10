#include<stdio.h>
void main()
{
	int a[5],n,i,j,swap;
	printf("enter  elements\n");
	for(i=0;i<5;i++)
	{
scanf("%d",&a[i]);
	}
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
		if(a[i]>a[j])
		{
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
		}
	}
}
printf("sorted in assending order");
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}