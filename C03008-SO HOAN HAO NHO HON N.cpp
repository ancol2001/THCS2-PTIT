#include<stdio.h> 
#include<math.h> 
void ktra(int k){ 
	int sum=1; 
	for (int j=2; j<=sqrt(k); j++) { 
		if (k%j==0) { 
			sum=sum+j+k/j; 
		} 
	} 
	if (sum==k) printf("%d ", k); 
} 
int main() { 
	int n; 
	scanf("%d", &n); 
	for (int i=2; i<=n; i++) { 
		ktra(i); 
	} 
	return 0; 
} 