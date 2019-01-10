#include <stdio.h>
int main ()
{
	int n=3;
	int i;
	int t=0;
	int r;
	int e=1;
	int p[50000]={2};//519540
		printf("%8d",p[0]);
		//p[0]=2;//original value
	do{
		r=0;
		for(i=0;i<=t;i++)
		if(n%p[i]==0) r=-1;
		
		if(r!=-1)
			{
			printf("%8d",n);
			p[t+1]=n;
			t++;
			}
		n++;
	}while (n<=18679);//1000000 78498
	
	//for (i=0;i<t+1;i++)
	//e=e*p[i];
	//printf ("\n%d\n%d",p[t],e);
	printf ("\nnum :%d",t+1);
return 0;
}
