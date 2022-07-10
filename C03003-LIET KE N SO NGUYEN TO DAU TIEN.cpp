#include<stdio.h>
#include<math.h>
int ktsnt (long long a) {
    if (a<=1) return 0;
    else {
        for (long long i=2; i<=sqrt (a); i++) {
            if (a%i==0) return 0;
        }
    }
    return 1;
}
int main() {
 	long long n;
    scanf("%lld",&n); 
    long long i = 2;   
    while (n>0) {
        if (ktsnt(i)==1) {
            printf("%lld\n", i);
            n--;
        }
        i++;
    }
    return 0;
}
