#include <stdio.h> 
#include <math.h> 
int k, A[100]; 
int STN(long long n) { 
	int tong = 0; 
	k=0; 
	while(n) { 
		A[k++] = n%10; 
		tong+=n%10; 
		n/=10; 
	} 
	if(tong%10 != 0) return 0; 
	for(int i=0;i<k/2;i++){ 
		if(A[i]!=A[k-i-1]) return 0; 
	} 
	return 1; 
} 
int main() { 
	int t, n; 
	scanf("%d", &t); 
	while(t--) { 
		int dem = 0; 
		scanf("%d", &n); 
		long long a = pow(10, n-1); 
		long long b = pow(10, n); 
		for(long long i = a; i < b; i++) { 
			if(i%10!= i/a|| i%10==0) continue; 
			if(STN(i)) dem++; 
		} 
		printf("%d\n", dem); 
	} 
}