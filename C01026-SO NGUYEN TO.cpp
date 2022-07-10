#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		if(a<2){
			printf("NO\n");
		}else{
		int dem=0;
		for (int i = 1; i <= sqrt(a); i++)
		{
			if(a%i==0){dem++;}
		}
		if (dem==1)
		{
			printf("YES\n");
		}else{printf("NO\n");}}
	}
}