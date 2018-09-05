/* middle school methods */

#include <stdio.h>
 main()
 {
 	int m,n,temp;
 	printf("enter the numbers m and n\n");
 	scanf("%d%d",&m,&n);
 	temp = (m < n) ? m:n;
 	while(1)
 	{
 		if((m % temp !=0 )|| (n % temp !=0))
 		{
           temp--;
 		}
 		else
 			break;
 	} 
 	printf("\n gcd is %d \n\n",temp);
 }