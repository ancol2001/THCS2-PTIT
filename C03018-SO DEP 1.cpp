#include<stdio.h>
#include<math.h>
int ktsnt (int a) {
    if (a<=1) return 0;
    else {
        for (int i=2; i<=sqrt (a); i++) {
            if (a%i==0) return 0;
        }
    }
    return 1;
}
int kt(int a){
	long long s=0;
	while(a>0){
		s=s+a%10;
		a/=10;
	}
	if(s==2) return 1;
	else if(s==3) return 1;
	else if(s==5) return 1;
	else if(s==8) return 1;
	else if(s==13) return 1;
	else if(s==21) return 1;
	else return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b) {
		int x=a;
		a=b;
		b=x;
	}
	for(int i=a;i<=b;i++){
		if(kt(i)==1&&ktsnt(i)==1) printf("%d ",i);
	}
	return 0;
}
