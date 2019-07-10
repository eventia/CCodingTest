#include <stdio.h>
int n = 5;
int S[5] = {1,3,5,7,7};
int k = 7;

int solve(int s, int e){
    while(s-e<0){
        int m = (s+e)/2;
        if (S[m] < k) s=m+1;
        else e = m;
    }
    return e+1;
}

int main()
{
    printf("%d\n", solve(0, n));
    return 0;
}
