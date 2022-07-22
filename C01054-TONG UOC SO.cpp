#include<stdio.h> 
#include<math.h> 
int pt(int n){ 
	long long sum=0; 
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0){ 
			while(n%i==0){ 
				sum+=i; n/=i;
			} 
		} 
	} 
	if(n>1) sum+=n; return sum; 
} 
int main(){ 
	int n; 
	scanf("%d",&n); 
	long long sum=0; 
	for(int i=1;i<=n;i++){ 
		int x; 
		scanf("%d",&x); 
		sum+=pt(x); 
	} 
	printf("%lld\n",sum); 
}