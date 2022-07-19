#include<stdio.h>
#include<math.h>
int ucln(int a,int b){
	int tmp;
	if (a<=b)
	{
		tmp=a;
	}else{
		tmp=b;
	}
	for (int i = tmp; i>=1; i--)
	{
		if (a%i==0 && b%i==0)
		{
			return i;break;
		}
	}
}
int bcnn(int b,int d){
	int tmp;
	tmp=b*d/ucln(b,d);
	return tmp;
}
void rutgon(int a,int b){
	int tmp1;
	tmp1=ucln(a,b);
	a=a/tmp1;
	b=b/tmp1;
	printf("%d/%d\n",a,b);
}
int main(){
	int t;
	scanf("%d",&t);
	int xx=t;
	while(t--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		printf("Case #%d:\n",xx-t);
		int tmp1;
		tmp1=ucln(a,b);
		a=a/tmp1;
		b=b/tmp1;
		int tmp2;
		tmp2=ucln(c,d);
		c=c/tmp2;
		d=d/tmp2;
		//printf("%d %d %d %d \n",a,b,c,d );	
		int x1,x2;
		x1=bcnn(b,d)/b;
		x2=bcnn(b,d)/d;
		printf("%d/%d ",a*x1,bcnn(b,d));
		printf("%d/%d\n",c*x2,bcnn(b,d));
		rutgon(a*x1+c*x2,bcnn(b,d));
		rutgon(a*d,b*c);
	}
}