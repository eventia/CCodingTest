#include <stdio.h>

int i, ans=0, idx=0, n=9;
int A[9] = {2,5,9,1,4,5,3,5,7};

void inputArr(){
    for (i=0; i<n; i++) scanf("%d", A+i);
}

void calculate(){
    for (i=0; i<n; i++) {
        if (ans < A[i]) {
            ans = A[i];
            idx = i+1;
        }
    }
}

void out() {
    printf("%d\n", ans); // 9
    printf("%d\n", A); //
    printf("%d\n", A+1); // A[0] �� �ּ� ... int �� 4 ����Ʈ ũ�� ���´�.
    printf("%d\n", &A[1]); // A[2] �� �ּ� ...
    printf("%d\n", &A[2]); // A[2] �� �ּ� ...
    printf("%d\n", idx); // 3
}

int main(){

    // �Էºκ�
    // inputArr();

    // ���κ�
    calculate();

    // ��ºκ�
    out();
    return 0;
}
