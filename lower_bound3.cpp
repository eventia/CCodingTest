#include <stdio.h>
#include <algorithm>

int n = 5;
int S[5] = {1,3,5,7,7};
int k = 7;


// int n, k, S[1000000];
// 5, 7,    1 3 5 7 7
// 8, 6,    1 2 3 5 7 9 11 15
// 5, 7,    1 2 3 4 5
// 5, 1,    2 2 2 2 2

void input(){
    scanf("%d", &n);
    for (int i=0; i<n; i++) scanf("%d", S+i);
    scanf("%d", &k);
}

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
    // input();
    printf("%d\n", std::lower_bound(S, S+n, k)-S+1);
    return 0;
}
