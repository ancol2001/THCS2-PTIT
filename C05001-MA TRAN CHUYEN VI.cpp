/*
Viết chương trình nhập một ma trận số nguyên dương cỡ M*N với 2<N,M<10, 
các số không quá 100. Hãy in ra chuyển vị của ma trận đó.

Dữ liệu vào

Mỗi bộ test viết trên một dòng hai số N và M lần lượt là số hàng và số cột 
của ma trận (2<N,M<10). Tiếp thep là N dòng ghi các số của ma trận.

Kết quả

In ra ma trận chuyển vị tương ứng.
*/
#include <stdio.h>
#include <math.h>
int a[10][10];
void nhap(int n,int m){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void out(int n, int m){
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	nhap(n,m);
	out(n,m);
}