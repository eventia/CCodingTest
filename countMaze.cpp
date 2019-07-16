#include <stdio.h>
#include <algorithm>

int n, A[101][101], cnt, Size[101];
int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};

bool safe(int a, int b){
    return (0<=a && a<n) && (0<=b && b<n);
}

bool cmp(int a, int b){
    return a>b;
}

/*
void dfs(int a, int b, int c) {
    A[a][b] = c;
        for(int i=0; i<4; i++) {
             if(safe(a+dx[i],b+dy[i]) && A[a+dx[i]][b+dy[i]]==1) {
                    dfs(a+dx[i], b+dy[i], c);
             }
        }
}
*/

void dfs(int a, int b, int c){
    A[a][b]=c;
    if (safe(a+1,b)&&A[a+1][b]==1) dfs(a+1,b,c);
    if (safe(a-1,b)&&A[a-1][b]==1) dfs(a-1,b,c);
    if (safe(a,b+1)&&A[a][b+1]==1) dfs(a,b+1,c);
    if (safe(a,b-1)&&A[a][b-1]==1) dfs(a,b-1,c);
}

void solve(){
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            if (A[i][j]==1) {
                cnt++;
                dfs(i,j,cnt+1);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (A[i][j]) Size[A[i][j]-2]++;
        }
    }

    std::sort(Size, Size+cnt, cmp);

}



void output(){
    printf("%d\n", cnt);
    for(int i=0; i<cnt; i++){
        printf("%d\n", Size[i]);
    }
}

void input(){
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) scanf("%d", &A[i][j]);
    }
}

int main(){
    input();
    solve();
    output();
    return 0;
}


