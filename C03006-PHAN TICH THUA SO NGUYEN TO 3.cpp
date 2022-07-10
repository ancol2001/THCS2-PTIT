#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	int x=t;
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("Test %d: ",x-t);
		for (int i = 2; i <=n; i++)
		{
			int dem=0;
			if (n%i==0)
			{
				while(n%i==0){
					dem++;
					n=n/i;
				}
				printf("%d(%d) ",i,dem);
			}
		}
		printf("\n");
	}
}
