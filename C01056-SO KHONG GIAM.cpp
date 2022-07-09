#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[103];
		long long n;
		scanf("%lld",&n);
		int x=0;
		while(n>0){
			a[x]=n%10;
			n=n/10;
			x++;
		}
		int ok=0;
		for (int i = x-1; i >=1; i--)
		{
			// printf("%d ",a[i]);
			if (a[i]>a[i-1])
			{
				ok=1;
			}
		}
		if (ok==0)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
