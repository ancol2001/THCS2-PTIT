#include<stdio.h>
#include<math.h>
int tn(long long a){
	long long s=0,n=a;
	while(a>0){
		s=s*10+(a%10);
		a/=10;
	}
	if(s==n) return 1;
	else return 0;
}
int kt(long long a){
	long long s=0;
	while(a>0){
		s+=(a%10);
		a/=10;
	}
		if(s%10==8) return 1;
		else return 0;
}
int sau(long long a){
	long long s;
	while(a>0){
		s=a%10;
		if(s==6) return 1;
		a/=10;
	}	
	return 0;
}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(a<=b){
		for(long long i=a;i<=b;i++){
		if(tn(i)==1&&kt(i)==1&&sau(i)==1 ) printf("%lld ",i);
		}
	}
	else{
		for(long long i=b;i<=a;i++){
		if(tn(i)==1&&kt(i)==1&&sau(i)==1 ) printf("%lld ",i);
		}
	}
	return 0;
}