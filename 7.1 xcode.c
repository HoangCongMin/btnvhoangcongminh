//
//  7.1 xcode.c
//  bai1c
//
//  Created by hoang minh on 17/03/2022.
//

#include "7.1 xcode.h"
#include <stdio.h>
int main ()
{
  int a;
  float d;
  char ch, name[40];
  printf("please enter data\n");
  scanf("%d %f %c %s", &a, &d, &ch, name);
  printf("the values accepted are: %d %f %c %s",a , d, ch,name);
    return 0;

}
