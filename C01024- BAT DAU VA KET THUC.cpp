#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		int cuoi=a%10;
		int dau;
		while(a!=0){
			dau=a%10;
			a=a/10;
		}
		if(cuoi==dau){
			printf("YES\n");
		}else{ printf("NO\n");}
	}
}