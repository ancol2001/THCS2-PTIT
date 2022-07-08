#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if (n%2!=0)
			{
				printf("NO\n");
			}
		else{
			int dem=0;
			while(n>0){
				if (n%10%2==0)
				{
					dem=0;
				}
				else{dem=1;
				break;}
				n=n/10;
			}
		if (dem==0)
		{
			printf("YES\n");
		}else printf("NO\n");
		}
	}
}