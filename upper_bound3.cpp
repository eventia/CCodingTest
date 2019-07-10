#include <stdio.h>
#include <algorithm>

int n = 5;
int S[5] = {1,3,5,7,7};
int k = 5;

int main()
{
    printf("idx = %d\n", std::upper_bound(S, S+n, k)-S+1);
    return 0;
}
