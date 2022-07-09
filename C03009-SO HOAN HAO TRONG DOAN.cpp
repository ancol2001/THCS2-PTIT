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
	int a,b,tmp; 
	scanf("%d%d", &a,&b);
	if (a>b)
	 {
	 	tmp=a;
	 	a=b;
	 	b=tmp;
	 }
	 if (a<=2)
	  {
	  	a=2;
	  } 
	for (int i=a; i<=b; i++) { 
		ktra(i); 
	} 
	return 0; 
} 