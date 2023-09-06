#include<stdio.h>
int main()
{
	int n,d,sum=0,i;
	printf("Enter a no:");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		sum=sum+(d*d*d);
	}
	if(i==sum)
	  printf("Angstrong no");
	else
	printf("Not an Angstrong no");
	return 0;
}
