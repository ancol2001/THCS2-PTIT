#include<stdio.h>
#include<math.h>
int main(){
	long long m,n;
	scanf("%lld%lld",&m,&n);
	int dem=0;
	int scp;
	for (int i = 1; i <= sqrt(n); i++)
	{
		scp=i*i;
		if (scp>=m && scp <=n)
		{
			dem++;
		}
	}
	printf("%d\n",dem);
	for (int i = 1; i <= sqrt(n); i++)
	{
		scp=i*i;
		if (scp>=m && scp <=n)
		{
			printf("%d\n",scp);
		}
	}
}