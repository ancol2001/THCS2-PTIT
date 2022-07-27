#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		int le=0;
		int x;
		int dk1;
		scanf("%lld",&a);
		if (a%2!=0)
		{
			dk1=1;
		}
		else{ dk1==0;}
		while(a>0){
			x=a%10;
			if (x%2!=0)
			{
				le++;
			}else le--;
			a=a/10;
		}
		if (dk1==1 && le>0)
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}