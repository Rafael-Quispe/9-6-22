#include <stdio.h>
#include <stlib.h>

int main(int argc, char const *argv[]) {
  int n = 10;
  int e[n];
  for (int i = 0; i <= n; i++) {
    e[i] = i;
    printf("%d\n", e[i]);
  }
  return 0;
}
