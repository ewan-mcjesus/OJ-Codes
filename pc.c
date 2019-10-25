#include<stdio.h>
int main()
{
	long int N,b;
	if(scanf("%ld",&N)!=-1)
	{
		b=N;
		if (N>2)
			b+=(N-2);
		printf("%ld",b);
	}
	return 0;
}
