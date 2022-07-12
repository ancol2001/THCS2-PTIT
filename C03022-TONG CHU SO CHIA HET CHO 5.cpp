/*
Viết chương trình nhập vào số nguyên dương n không quá 5 chữ số. 
Thực hiện liệt kê các số nguyên tố nhỏ hơn n 
và thỏa mãn có tổng các chữ số chia hết cho 5. 
Có bao nhiêu số như vậy.

Input

Chỉ có một dòng ghi số n.

Output

Gồm hai dòng: dòng đầu liệt kê các số thỏa mãn, 
dòng thứ 2 ghi số lượng các số tìm được.
*/
#include<stdio.h>
#include <math.h>
int snto(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	for(int i = 3; i <= sqrt(n); i += 2){
		if(n%i == 0) return 0;
	}
	return 1;
}
int tongchuso(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	if (sum%5==0)
	{
		return 1;
	}else return 0;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	for (int i = 2; i < n; i++)
	{
		if (snto(i)==1 && tongchuso(i)==1)
		{
			printf("%d ",i );
			dem++;
		}
	}
	printf("\n%d\n",dem);
}