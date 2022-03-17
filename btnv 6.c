//
//  btnv 6.c
//  bai1c
//
//  Created by hoang minh on 16/03/2022.
//

#include "btnv 6.h"
#include <stdio.h>
int main(){
 printf("con số 555,55 khác nhau từ:\n");
    printf("in float from without modifiers:\n");
  printf("[%f]\n", 555.55);
  printf("in exponential from withot any modifier:\n");
  printf("[%e]\n", 555.55);
  printf("in float from with-modifier:\n");
    printf("[%-f]\n", 555.55);
  printf("in float from with digit string 10.3 as modifier:\n ");
  printf("[%10.3f]\n, 555.55");
  printf ("in float from with 0 as modifier:\n");
  printf("[%0f]\n, 555.55");
  printf("in float from with 0 and digit string 10.3");
  printf("as modifiers:\n");
  printf("[%010.3f]\n, 555.55");
  printf ("in float from with -,0\n");
  printf ("and digit string 10.3 and modifiers:\n");
  printf("[%-010.3f]\n, 555.55");
  printf("in exponential from with 0");
  printf("and digit string 10.3 as modifiers:\n");
  printf("[%010.3e]\n, 555.55");
printf("in exponential from with -,0");
  printf("and digit string 10.3 as modifier:\n;");
  printf("[%-010.3e]\n\n", 555.55);
    return 0;
}
