#include <stdio.h>


int main()
{
  int i;

  for(i = 1; i < 8; i++) {
    printf("%d ", i);
  }
  printf("\n");
  for(i = 3; i < 24; i+=5) {
    printf("%d ", i);
  }
  printf("\n");
  for(i = 20; i > -11; i-=6){
    printf("%d ", i);
  }
  return 0;
}