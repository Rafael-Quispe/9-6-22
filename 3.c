#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int array[n];
  for (int i = 0; i < n; i++) {
    array[i] = (rand() % m);
    printf("%d\n", array[i]);
  }
  return 0;
}
