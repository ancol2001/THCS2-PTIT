#include<stdio.h> 
#include<math.h>
int kiem_tra(int n){ 
	int i, m = n/10; 
	while(m != 0){ 
		if(m%10 <= n%10) return 0; 
		m /= 10; 
		n /= 10; 
	} 
	return 1; 
} 
void nhap(){ 
	int n,i,a,b, dem = 0; 
	scanf("%d%d", &a, &b); 
	if(a > b){ n = a; a = b; b = n; } 
	for(i = a; i <= b; i++){ 
		if(kiem_tra(i)) dem++; 
	} 
	printf("%d\n", dem); 
} 
int main(){ 
	int t; 
	scanf("%d", &t); 
	while(t--){ 
		nhap(); 
	} 
	return 0; 
}