#include <stdio.h>
int main(void) {
  int a, b;
  do {
    scanf("%d%d", &a, &b);
    if (a==0 && b==0) break;
    if (a>b) printf("Yes\n");
    else printf("No\n");
  } while (0==0);
  return 0;
}