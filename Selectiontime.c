#include<stdio.h>
#include<time.h>
void main()
{
int n,i,j,a[100000],min,num,time;
clock_t start,end;
printf("enter the size of array");
scanf("%d",&n);
printf("enter array of elements\n");
for(i=0;i<n;i++)
{
a[i]=random(100);
 }
 start=clock();
for(i=0;i<n;i++)
 {
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;

num=a[i];
a[i]=a[min];
a[min]=num;

}
}
}
 end=clock();
 time=(end-start)/CLOCKS_PER_SEC;
 for(i=0;i<n;i++)
 {
   printf("%d\n",a[i]);

}
printf("the time is taken is = %d",time);
}
