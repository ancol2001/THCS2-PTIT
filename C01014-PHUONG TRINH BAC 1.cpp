#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0){
		if(b==0){
			printf("Vo so nghiem\n");
		}
		else{printf("Vo nghiem\n");}
	}else {printf("%.2f\n",(double)-b/a);}
}