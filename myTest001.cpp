#include <stdio.h>

int S[5] = {5, 4, 1, 3, 2};
int n=5;
void print_array(){
    for (int i=0; i<n; i++) printf("%d ", S[i]);
}

void swap(int a, int b){
    int t = S[a];
    S[a] = S[b];
    S[b] = t;
}

void selection_sort(){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++) {
            if (S[i] > S[j]) swap(i,j);
        }
    }
}

int main(void){

//    n = 5;
//    n = sizeof(S)/sizeof(int);

    selection_sort();

    print_array();

    return 0;

}
