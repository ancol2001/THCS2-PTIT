#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int s=0,tmp;
	if (a >= b)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	for (int i = a; i <= b; ++i)
	{
		s=s+i;
	}
	printf("%d\n",s );
}