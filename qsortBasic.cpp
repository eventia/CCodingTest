#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <time.h>

int n, S[1000000];

void print_array(){
    for (int i=0; i<n; i++) printf("%d ", S[i]);
}

bool compare(int a, int b){
    return a > b;
}

int main(){
    srand(time(NULL));
    scanf("%d", &n);
    for (int i=0; i<n; i++) S[i] = rand();

    std::sort(S, S+n, compare);

    print_array();
    return 0;
}
