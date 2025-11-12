/*Question 45
Print sum of all the multiples of 3 and 5 , time constraints 
1 ≤ T ≤ 10⁵
1 ≤ N ≤ 10⁹
*/

#include <stdio.h>

long long sumMultiples(long long k, long long n) {
    long long p = (n - 1) / k;
    return k * p * (p + 1) / 2;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        long long result = sumMultiples(3, N) + sumMultiples(5, N) - sumMultiples(15, N);
        printf("%lld\n", result);
    }

    return 0;
}
