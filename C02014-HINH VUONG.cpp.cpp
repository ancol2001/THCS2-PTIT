#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[20][20]; 
	int k=0; 
	int m=n; 
	while(n>0){ 
		for(int i=k;i<2*m-1-k;i++){ 
			for(int j=2*m-2-k;j>=k;j--){
				if(i==k||j==k||j==2*m-k-2||i==2*m-k-2){
					a[i][j]=n; 
				} 
			} 
		} 
		k++; 
		n--; 
	} 
	for(int i=0;i<2*m-1;i++) { 
		for(int j=0;j<2*m-1;j++) { 
			printf("%d", a[i][j]); 
		} 
		printf("\n"); 
	} 
}
