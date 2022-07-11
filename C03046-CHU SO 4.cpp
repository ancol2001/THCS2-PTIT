#include<stdio.h> 
#include<math.h> 
int kiemtra(int n) { 
	int t; 
	while(n) { 
		t=n%10; 
		if(t==4) { return 0; break; } 
		n/=10; 
	} 
	return 1; 
} 
int kiemtraSTN (int n){ 
	int m=n; 
	int dao = 0; 
	while (m>0){ 
		dao = dao*10+m%10; 
		m/=10; 
	} 
	if (dao==n) return 1; 
	else return 0; 
} 
int tong(int n) { 
	int tong=0; 
	while(n) { 
		tong+=n%10; 
		n/=10; 
	} 
	if(tong%10==0) { 
		return 1; 
	} else { return 0; } 
} 
int main () { 
	int t; 
	scanf("%d",&t); 
	while(t--) { 
		int n; 
		scanf("%d",&n); 
		for(int i=pow(10,n-1);i<pow(10,n);i++) { 
			if(kiemtra(i) && kiemtraSTN(i) && tong(i)) { 
				printf("%d ",i); 
			} 
		} 
		printf("\n"); 
	} 
}