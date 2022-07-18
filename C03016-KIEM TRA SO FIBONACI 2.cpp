#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	long long a[10005];
	a[0]=0;
	a[1]=1;
	for (int i = 2; i < 1001; ++i)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long check=0;
		for (int i = 0; i < 1001; i++)
		{
			if (n==a[i])
			{
				check=1;
				break;
			}
		}
		if (check==1)
		{
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}