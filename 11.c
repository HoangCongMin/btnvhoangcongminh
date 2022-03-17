//
//  11.c
//  bai1c
//
//  Created by hoang minh on 17/03/2022.
//

#include "11.h"
#include <stdio.h>
int main(){
  char item [20];
  int partno;
  float cost;
  printf("nhap vat pham");
  scanf("%s %*d %f", &item, &partno, &cost);
  printf("ket qua la %s %d %.2f", item,  partno,  cost);
  
    return 0;}
