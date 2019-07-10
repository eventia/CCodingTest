#include <stdio.h>

int S[10] = {1,2,4,5,7,9,10,12,15,16};
int n = 10, k = 15;

int find(int s, int e){
    while(s<=e){
        int m = (s+e)/2;
        if (S[m] == k) return m;
        if (S[m] > k) e=m-1;
        else s = m+1;
    }
    return -1;
}

int main()
{

    printf("%d\n", find(0, n-1));
    return 0;
}
