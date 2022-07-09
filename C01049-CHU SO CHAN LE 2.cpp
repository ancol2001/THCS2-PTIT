#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n;
	scanf("%lld",&n);
	int chan=0;
	int le=0;
	long long tmp;
	while(n>0){
		tmp=n%10;
		n=n/10;
		if(tmp%2==0){
			chan++;
		}else{
			le++;
		}
	}printf("%d %d\n",le,chan);
}
}