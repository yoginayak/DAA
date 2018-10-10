#include<stdio.h>
#include<time.h>
void main()
{
	int a[100000],i,n,num,flag,time;
	clock_t start,end;
	printf("enter size of array");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		a[i]=random(100);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&num);
	start=clock();
	for(i=0;i<n;i++)
	{
    if(a[i]==num)
    {
    	flag=1;
    	break;
    }
}
    if(flag==1)
    {
    printf("Element %d found\n",num);
	}
	else
		
		{
			printf("NOT found\n");

    }
    end=clock();
time=(end-start)/CLOCKS_PER_SEC;
printf("time complexcity =%d",time);
}
