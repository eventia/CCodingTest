#include <queue>
#include <stdio.h>
using namespace std;

int main(void){
  queue<int> test;
  int a, sizet;

  test.push(1);
  test.push(2);
  test.push(3);
  test.push(4);

  test.pop();

  a = test.front();
  printf("queue front value = %d\n", a);

  a = test.back();
  printf("queue back value = %d\n", a);

  a = test.size();
  printf("queue size = %d\n", a);

  a = test.empty();
  printf("queue is empty ? %d\n", a);

  sizet = test.size();
  for (int i=0; i<sizet; i++){
    a = test.front();
    printf("queue front value = %d\n", a);
    test.pop();
    a = test.empty();
    printf("queue is empty ? %d\n", a);
  }

  return 0;
}
