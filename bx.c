#include<stdio.h>
#include<math.h>

int main()
{

	long int n,m=0,x,y,d=0;int i=0;
	if (scanf("%ld %ld %ld",&n ,&x, &y)!=0)
	{
		if(x<10)
			while(n>0)
			{
				d+=(n%10)*pow(x,i);
				i++;
				n/=10;
			}
		else
			d=n;
		i=0;
		while(d>0)
		{
			m+=(d%y)*pow(10,i);
			i++;
			d/=y;
		}
		printf("%ld",m);


	}
}
