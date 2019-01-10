#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int i;
	int t=45;
	long long n=1;
	int o;//
	int s;//sqrt
	int r;//return
	int d;//210*turn
	long long w=1;//wait for turn//279786881184
	int p[519000]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};
	FILE *fp;
	if ((fp=fopen("prime o.txt","w"))==NULL)
		{
		printf ("Fail to open the file");
		exit(0);
		}
	for (i=0;i<46;i++)
		fprintf (fp,"%d ",p[i]);
	do
	{
		d=w*210;
		for (o=0;o<=t;o++) if (p[o]>sqrt(210+d)){s=o;break;}
		n=d+1;for(i=0;i<=s;i++)   if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+11;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+13;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+17;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+19;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+23;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+29;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+31;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+37;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+41;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+43;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+47;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+53;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+59;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+61;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+67;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+71;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+73;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+79;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+83;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+89;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+97;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+101;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+103;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+107;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+109;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+113;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+121;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;//11 11
		n=d+127;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+131;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+137;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+139;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+143;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;//11 13
		n=d+149;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+151;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+157;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+163;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+167;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+169;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;//13 13		
		n=d+173;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+179;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+181;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+187;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;//11 17
		n=d+191;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+193;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+197;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+199;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;
		n=d+209;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);p[t+1]=n;t++;}r=1;//11 19
		printf ("%d ",w);
		w++;
	}while (w<=36500);
	
	do 
	{
	d=w*210;
		for (o=0;o<=t;o++) if (p[o]>sqrt(210+d)){s=o;break;}
		n=d+1;for(i=0;i<=s;i++)   if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+11;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+13;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+17;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+19;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+23;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+29;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+31;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+37;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+41;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+43;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+47;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+53;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+59;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+61;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+67;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+71;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+73;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+79;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+83;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+89;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+97;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+101;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+103;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+107;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+109;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+113;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+121;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;//11 11
		n=d+127;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+131;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+137;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+139;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+143;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;//11 13
		n=d+149;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+151;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+157;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+163;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+167;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+169;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;//13 13		
		n=d+173;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+179;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+181;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+187;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;//11 17
		n=d+191;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+193;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+197;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+199;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;
		n=d+209;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%d ",n);t++;}r=1;//11 19
		printf ("%d ",w);
		w++;		
	}while (w>36500&&w<=329999);//279786880000//329999 4079200
printf ("\n num:%d",t+1);
return 0;
}
