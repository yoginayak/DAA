#include<stdio.h>
void main()
{
	int a[5],i,num,flag;
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("Enter the number to be searched\n");
	scanf("%d",&num);
	for(i=0;i<5;i++)
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
}
