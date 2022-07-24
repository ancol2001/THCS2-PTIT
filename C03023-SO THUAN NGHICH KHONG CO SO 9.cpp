#include<stdio.h>
#include<math.h>
int tn(long long a){
	long long s=0,n=a,r;
	while(a>0){
		r=a%10;
		if(r==9) return 0;
		s=s*10+r;
		a/=10;
	}
	if(s==n) return 1;
	else return 0;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(tn(i)==1) {
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}