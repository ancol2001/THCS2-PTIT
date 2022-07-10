#include <stdio.h>
#include <math.h>
int kt(long long n){
	if(n==0) return 1;
	else{
		long long x=0,y=1;
		long long z=x+y;
		while(z<n){
			x=y;
			y=z;
			z=x+y;
		}
		if(z==n) return 1;
		else return 0;
	}
} 
int main(){
		long long n;
		scanf("%lld",&n);
		if(kt(n)==1) printf("1");
		else printf("0");
	return 0;	
}
