#include <stdio.h> 
int main() { 
	int m,n,p,q; 
	scanf("%d%d%d%d",&m,&n,&p,&q); 
	int a[m][n],b[n][p],c[p][q],ab[m][p],abc[m][q]; 
	int i,j,k; 
	for(i=0;i<m;i++) 
		for(j=0;j<n;j++) 
			scanf("%d",&a[i][j]); 
	for(i=0;i<n;i++) 
		for(j=0;j<p;j++) 
			scanf("%d",&b[i][j]); 
	for(i=0;i<p;i++) 
		for(j=0;j<q;j++) 
			scanf("%d",&c[i][j]); 
	for(i=0;i<m;i++) 
		for(j=0;j<p;j++) { 
			ab[i][j]=0; 
			for(k=0;k<n;k++) { 
				ab[i][j]+=a[i][k]*b[k][j]; 
			} 
		} 
	for(i=0;i<m;i++) 
		for(j=0;j<q;j++) { 
			abc[i][j]=0; 
	    	for(k=0;k<p;k++) { 
				abc[i][j]+=ab[i][k]*c[k][j]; 
			} 
		} 
	for(i=0;i<m;i++) { 
		for(j=0;j<q;j++) 
		printf("%d ",abc[i][j]); 
	printf("\n"); 
	} 
}
