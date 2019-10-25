#include <stdio.h>
int main()
{
	long int n,a,cnt=0,r=0,f;
	scanf("%ld",&n);
	for (int i = 0; i < n; ++i)

	{
		scanf("%ld",&a);
		if(2*r<=a)
		{
			f=r;
			a-=2*r;
			r=0;
			f+=(a/3);
			r+=a%3;
		}
		else
		{
			f=a/2;
			r-=f;
			r+=a%2;
		}
		cnt+=f;
	}
	printf("%ld",cnt);
}