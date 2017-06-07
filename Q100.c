#include <stdio.h>

unsigned int count=0;
unsigned int max=0;

void problem(int,int);

int main(void)
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF )
	{
		if(a==0 && b==0)
		{
			break;
		}
		else
		{
			problem(a,b);
			printf("%d %d %d",a,b,max);
			max=0;							
		}
	}
}
void problem(int a,int b)
{
	int i=0,c=0;
	if(a>b){
		c=a;
		a=b;
		b=c;
		c=0;
	}
	for(i=a;i<=b;i++)
	{
		int reg=i;
		while(reg!=1)
		{
			if(reg%2==0)
			{
				reg=reg/2;
				count++;
			}
			else
			{
				reg=reg*3+1;
				count++;
			}
		}
	
		if(reg==1)
		{
			count++;
			if(count>max)
			{
				max=count;
			}
			count=0;
		}
	}
}
