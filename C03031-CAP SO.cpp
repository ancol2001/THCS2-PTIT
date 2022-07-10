#include<stdio.h>
#include<math.h>
long long ucln(long long a, long long b){
	long long tmp=a;
	if (a<=b)
	{
		tmp=a;
	}else{
		tmp=b;
	}
	for (long long i = tmp; i>=1; i--)
	{
		if (a%i==0 && b%i==0)
		{
			return i;
			//printf("%d\n",i );
			break;
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,c,d;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		if (ucln(a,b)==ucln(c,d))
		{
			printf("YES\n");
		}else printf("NO\n");	
	}
}