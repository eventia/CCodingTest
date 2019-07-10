#include <stdio.h>
#include <algorithm>

int n = 5;
int S[5] = {1,3,5,7,7};
int k = 7;

int main()
{
    printf("idx = %d\n", std::lower_bound(S, S+n, k)-S+1);
    printf("address of lower_bound = %d\n", std::lower_bound(S, S+n, k));
    printf("address of S = %d\n", S);
    printf("distance of [lower_bound - S] = %d\n", std::lower_bound(S, S+n, k)-S);

    return 0;
}
