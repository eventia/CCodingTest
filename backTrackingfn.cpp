#include <stdio.h>
#include <algorithm>


/*
두더지 굴 문제

아래와 같이 입력 : 가로 세로의 크기 n 과 굴 내부의 모양을 0/1로 표시

7
0 1 1 0 1 0 0
0 1 1 0 1 0 1
1 1 1 0 1 0 1
0 0 0 0 1 1 1
0 1 0 0 0 0 0
0 1 1 1 1 1 0
0 1 1 1 0 0 0


출력 : 두더지 굴의 수, 각 두더지 굴의 크기를 내림 차순으로 출력

3
9
8
7

*/

int n, A[101][101], cnt, Size[101];

bool safe(int a, int b){
    return (0<=a && a<n) && (0<=b && b<n);
}

bool cmp(int a, int b){
    return a>b;
}

void dfs(int a, int b, int c)
{
    A[a][b]=c;
    if(safe(a+1, b) && A[a+1][b]==1)
    dfs(a+1, b, c);
    if(safe(a-1,b) && A[a-1][b]==1)
    dfs(a-1, b, c);
    if(safe(a,b+1) && A[a][b+1]==1)
    dfs(a, b+1, c);
    if(safe(a,b-1) && A[a][b-1]==1)
    dfs(a, b-1, c);
}
void solve()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i][j]==1)
            {
            cnt++;
            dfs(i,j,cnt+1);
            }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i][j])
                Size[A[i][j]-2]++;
    std::sort(Size, Size+cnt, cmp);
}

void input()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    scanf("%d", &A[i][j]);
}
void output()
{
    printf("%d\n", cnt);
    for(int i=0; i<cnt; i++)
    printf("%d\n", Size[i]);
}


int main(){

    input();
    solve();
    output();
    return 0;
}
