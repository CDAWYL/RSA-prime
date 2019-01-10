#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int i;
	int t=45;
	int n=1;
	int o;//
	int s;//sqrt
	int r;//return
	int d;//210*turn
	int w=1;//wait for turn
	int p[519000]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939};
	FILE *fp;
	if ((fp=fopen("prime atp 4th.txt","w"))==NULL)
		{
		printf ("Fail to open the file");
		exit(0);
		}
	for (i=0;i<46;i++)
		fprintf (fp,"%8d",p[i]);
	do
	{
		d=w*2940;
		for (o=0;o<=t;o++) if (p[o]>sqrt(210+d)){s=o;break;}
		n=d+1;for(i=0;i<=s;i++)   if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+11;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+13;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+17;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+19;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+23;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+29;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+31;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+37;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+41;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+43;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+47;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+53;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+59;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+61;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+67;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+71;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+73;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+79;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+83;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+89;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+97;for(i=0;i<=s;i++)  if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+101;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+103;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+107;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+109;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+113;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+121;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 11
		n=d+127;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+131;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+137;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+139;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+143;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 13
		n=d+149;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+151;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+157;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+163;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+167;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+169;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//13 13		
		n=d+173;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+179;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+181;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+187;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 17
		n=d+191;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+193;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+197;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+199;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;
		n=d+209;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+211;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+223;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+227;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+229;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+233;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+239;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+241;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+251;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+257;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+263;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+269;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+271;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+277;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		n=d+281;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
n=d+283;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
n=d+293;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
n=d+307;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
n=d+311;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+313;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+317;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+331;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+337;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+347;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+349;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+353;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+359;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+367;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+373;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+379;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+383;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+389;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+397;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+401;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+409;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+419;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+421;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+431;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+433;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+439;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+443;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+449;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+457;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+461;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+463;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+467;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+479;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+487;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+491;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+499;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+503;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+509;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+521;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+523;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+541;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+547;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+557;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+563;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+569;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+571;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+577;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+587;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+593;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+599;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+601;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+607;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+613;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+617;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+619;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+631;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+641;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+643;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+647;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+653;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+659;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+661;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+673;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+677;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+683;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+691;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+701;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+709;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+719;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+727;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+733;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+739;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+743;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+751;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+757;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+761;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+769;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+773;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+787;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+797;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+809;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+811;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+821;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+823;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+827;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+829;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+839;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+853;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+857;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+859;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+863;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+877;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+881;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+883;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+887;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+907;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+911;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+919;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+929;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+937;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+941;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+947;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+953;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+967;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+971;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+977;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+983;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+991;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+997;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1009;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1013;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1019;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1021;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1031;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1033;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1039;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1049;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1051;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1061;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1063;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1069;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1087;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1091;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1093;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1097;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1103;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1109;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1117;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1123;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1129;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1151;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1153;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1163;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1171;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1181;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1187;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1193;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1201;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1213;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1217;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1223;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1229;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1231;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1237;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1249;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1259;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1277;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1279;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1283;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1289;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1291;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1297;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1301;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1303;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1307;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1319;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1321;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1327;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1361;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1367;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1373;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1381;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1399;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1409;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1423;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1427;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1429;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1433;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1439;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1447;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1451;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1453;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1459;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1471;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1481;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1483;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1487;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1489;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1493;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1499;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1511;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1523;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1531;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1543;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1549;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1553;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1559;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1567;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1571;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1579;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1583;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1597;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1601;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1607;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1609;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1613;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1619;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1621;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1627;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1637;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1657;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1663;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1667;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1669;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1693;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1697;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1699;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1709;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1721;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1723;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1733;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1741;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1747;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1753;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1759;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1777;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1783;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1787;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1789;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1801;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1811;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1823;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1831;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1847;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1861;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1867;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1871;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1873;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1877;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1879;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1889;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1901;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1907;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1913;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1931;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1933;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1949;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1951;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1973;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1979;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1987;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1993;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1997;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+1999;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2003;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2011;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2017;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2027;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2029;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2039;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2053;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2063;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2069;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2081;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2083;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2087;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2089;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2099;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2111;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2113;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2129;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2131;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2137;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2141;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2143;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2153;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2161;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2179;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2203;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2207;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2213;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2221;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2237;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2239;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2243;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2251;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2267;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2269;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2273;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2281;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2287;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2293;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2297;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2309;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2311;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2333;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2339;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2341;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2347;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2351;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2357;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2371;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2377;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2381;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2383;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2389;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2393;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2399;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2411;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2417;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2423;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2437;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2441;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2447;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2459;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2467;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2473;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2477;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2503;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2521;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2531;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2539;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2543;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2549;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2551;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2557;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2579;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2591;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2593;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2609;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2617;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2621;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2633;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2647;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2657;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2659;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2663;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2671;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2677;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2683;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2687;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2689;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2693;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2699;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2707;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2711;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2713;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2719;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2729;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2731;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2741;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2749;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2753;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2767;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2777;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2789;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2791;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2797;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2801;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2803;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2819;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2833;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2837;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2843;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2851;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2857;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2861;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2879;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2887;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2897;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2903;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2909;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2917;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2927;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19


		n=d+2939;for(i=0;i<=s;i++) if(n%p[i]==0)r=-1;if(r!=-1) {fprintf(fp,"%8d",n);p[t+1]=n;t++;}r=1;//11 19
		
		w++;
	}while (w<=36505);
printf ("\n num:%d",t+1);
return 0;
}
