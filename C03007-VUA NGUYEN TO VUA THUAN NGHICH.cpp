#include<stdio.h>
#include<math.h>
int ktsnt (long long a) {
    if (a<=1) return 0;
    else {
        for (long long i=2; i<=sqrt (a); i++) {
            if (a%i==0) return 0;
        }
    }
    return 1;
}
int kt(long long a){
	long long s=a,n=0;
	while(s>0){
		n=n*10+(s%10);
		s/=10;
	}
	if(n==a) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++){
			if(kt(i)==1&&ktsnt(i)==1) {
				printf("%d ",i);
				dem++;
			}
			if(dem==10) {
				printf("\n");
				dem = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
