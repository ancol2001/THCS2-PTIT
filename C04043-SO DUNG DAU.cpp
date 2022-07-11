/*Cho dãy số A[] gồm có N phần tử. Một phần tử được gọi là số đứng đầu 
nếu như nó lớn hơn tất cả các phần tử nằm bên phải của nó.
Nhiệm vụ của bạn là hãy tìm các số đứng đầu trong dãy số A[] đã cho.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test gồm số nguyên N (1≤ N ≤ 1000), số lượng phần tử trong dãy số ban đầu.
Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 106).

Output: 

Với mỗi test, in ra trên một dòng các số tìm được, in ra theo thứ tự giảm dần
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[1005];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		int dem;
		for (int i = 0; i < n-1; ++i)
		{
			dem=0;
			for (int j = i+1; j < n; j++)
			{
				if(a[i]<=a[j]){
					dem++;
				}
			}
			if (dem==0)
			{
				printf("%d ",a[i]);
			}
		}
		printf("%d\n",a[n-1]);
	}
	return 0;
}