//
//  btvn6.2 .c
//  bai1c
//
//  Created by hoang minh on 16/03/2022.
//

#include "btvn6.2 .h"
#include <stdio.h>
int main(){
  printf("số 555 ở dạng varius :\n");
  printf("không có bất kỳ modifler nào:\n");
  printf("[%d]\n",555);
    printf("với-modifler:\n");
  printf("[%-d]\n",555);
    printf("với chuỗi chữ số 10 là modifler:\n");
  printf("[%10d]\n",555);
  printf("với 0 dưới dạng modifle:\n");
  printf("[%0d]\n",555);
  printf("với chuỗi 0 và chữ số 10 dưới dạng modifler:\n");
  printf("[%010d]\n",555);
  printf("với-, 0 và chuỗi chữ số 10 là modifler:\n");
  printf("[%-010d]\n",555);
    
    return 0;

}
