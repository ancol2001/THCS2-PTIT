#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m>=n){
		for(int i=m;i>=1;i--){
			int x=i,y=1;
			for(int j=1;j<=n;j++){
				if(x>1){
					printf("%d",x);
					x--;
				}
				else if(x==1){
					printf("%d",y);
					y++;
					
				}
			}
		printf("\n");
		}
	}
	else{
		for(int i=n;i>=n-m+1;i--){
			int x=i,y=1;
			for(int j=1;j<=n;j++){
				if(x>1){
					printf("%d",x);
					x--;
				}
				else if(x==1){
					printf("%d",y);
					y++;
					
				}
			}
		printf("\n");
		}
	}
	return 0;
}