#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		if(a>0) printf("%.15f\n",(double)1/a);
	}
	return 0;
}