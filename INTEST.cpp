#include<stdio.h>
int main()
{
	long int t,t2;
	int n,count=0;
	scanf("%d %ld",&n,&t);
	while(n>0)
	{
		n--;
		scanf("%ld",&t2);
		if(t2%t==0)
		count++;
	}
	printf("%d\n",count);
}