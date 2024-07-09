#include <stdio.h>

int main()
{
  int num = 0;

    do{
    if(num % 2 != 0){
    printf("\n%i", num);
    }
    num++;
    }while(num <= 100);

  return 0;
}