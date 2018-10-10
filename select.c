#include <stdio.h>
 void selsort(int a[],int n);
 int main()
 {
 	int i,max=5;
 	int a[max];
 	
 	printf("Enter the elements\n");
 	for(i=0;i<max;i++)
 		scanf("%d",&a[i]);
 	selsort(a,max);
    printf("The sorted elements are:\n");
    for(i=0;i<max;i++)
    {
    	printf("%d\n",a[i]);
    }
}
void selsort(int a[],int n)
{

int i,j,min,t;
 	for(i=0;i<=n-2;i++)
 	{
 		min=i;
	 for(j=i+1;j<=n-1;j++)
     if(a[j]<a[min])
     {
       min=j;
       t=a[i];
       a[i]=a[min];
       a[min]=t;
     }
 }
 }