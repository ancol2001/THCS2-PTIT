#include <stdio.h> 
void phanTich(int n){ 
	int i=2; 
	printf("%d = ", n ); 
	while(i<=n){ 
		if(n%i==0){ 
			int soMu=0; 
			while(n%i==0){ 
				soMu++; 
				n/=i; 
			} 
			printf("%d^%d", i, soMu); 
			if(n!=1){ printf(" * "); } 
			else printf("\n"); 
		} else i++; 
	} 
} 
int main(){ 
	int t; 
	scanf("%d", &t); 
	while(t--){ 
		int n; 
		scanf("%d", &n); 
		phanTich(n); 
	} 
}