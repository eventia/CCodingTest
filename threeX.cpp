#include <stdio.h>
int n;

void input(){
    scanf("%d", &n);
}

void solve(){
    for (int i=1; i<n+1; i++){
        if (i%3==0) printf("X ");
        else printf("%d ", i);
    }
}

int main(){
    input();
    solve();
    return 0;
}
