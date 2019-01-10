#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,count=0;
    for(n=11;n<=500;n=n+2)
    {   
	    for(i=2;i<=sqrt(n);i++)
    	  if(n%i==0) break;
    	if(i>sqrt(n)) 
		{
			printf("%5d",n);
			count++;
			if(count%10==0) printf("\n");
		}
    }
    printf("\n%d",count);
	return 0;
}
