#include <stdio.h>

int main()
{
  int num = 0;

    while(num <= 100){
    if(num % 2 == 0){
    printf("\n%i", num);
    }
    num++;
    }

  return 0;
}