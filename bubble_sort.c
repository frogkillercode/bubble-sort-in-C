//Code of Nijat Mehdiyev
#include <stdio.h>
void bubble_sort(int a[]) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < 10; i++) {   // loop n times - 1 per element
        for (j = 0; j < 10 - i - 1; j++) { // last i elements are sorted already
            if (a[j] > a[j + 1]) {  // swop if order is broken
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main() {
  int a[10],i, d, swap;
  
  printf("Enter 10 integers\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  bubble_sort(a);
  printf("Printing the sorted array:\n");
  for (i = 0; i < 10; i++)
     printf("%d\n", a[i]);
  return 0;
}
