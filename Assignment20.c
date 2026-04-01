#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
  printf("Before swapping: x = %d, y = %d\n", x, y);
  swap(&x, &y);
  printf("After swapping: x = %d, y = %d\n", x, y);
  return 0;
}

#include <stdio.h>
void swapRecursive(int *a, int *b, int count) {
    if (count == 0)
        return;
  int temp = *a;
  *a = *b;
  *b = temp;
  swapRecursive(a, b, count - 1);
}
int main() {
    int x = 10, y = 20;
  printf("Before swapping: x = %d, y = %d\n", x, y);
  swapRecursive(&x, &y, 1);
  printf("After swapping: x = %d, y = %d\n", x, y);
  return 0;
}
