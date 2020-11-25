#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    long dp[91];
    int N;

    scanf("%d", &N);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    printf("%ld\n", dp[N]);
    return (0);
}