#include <stdio.h>
#include <stdlib.h>

void carry(int,int);
int mathpow(int);

int main(void)
{
	int a,b,x;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a==0 && b==0)
			break;
		else
		{
			carry(a,b);
		}		
	}
	return 0;
}

void carry(int a,int b)
{
	int x[10]={0},y[10]={0},z[10]={0};
	int ans=a+b,i=0,count=0;
	for(i=0;i<10;i++)
	{
		x[i] = a / mathpow(9-i);
		a = a % mathpow(9-i);

		y[i] = b / mathpow(9-i);
		b = b % mathpow(9-i);

		z[i] = ans / mathpow(9-i);
		ans = ans % mathpow(9-i);
	}
	
	for(i=9;i>0;i--)
	{	
		int max=x[i];
		if(y[i]>max)
			max=y[i];
		if(max>z[i])	
			count++;
	}
	
	if(count>=1)
		printf("%d carry operation.\n",count);
	else
		printf("No carry operation.\n");		
}
int mathpow(int a)
{
	int x=0;
	int ans=1;
	if(a!=0)
	{
		for(x=0;x<a;x++)
		{
			ans*=10;
		}
		return ans;
	}else
	{
		return 1;
	}
}
