#include<stdio.h>
#include<math.h>
int main()
{
	long int n,t,m;
	if(scanf("%ld",&t)!=-1)
	{	
		while(t>0)
		{	
			if(scanf("%ld",&n)!=-1)
			{
				m=(int)sqrt(n);
				printf("%ld\n",m);
				t--;
			}
		}
	}
}


