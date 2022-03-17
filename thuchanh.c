//
//  thuchanh.c
//  bai1c
//
//  Created by hoang minh on 14/03/2022.
//

#include <stdio.h>

int main() {
  int a=50;
  int b=24;
  int c=68;
  int d;
  d=a*b+c/2;
  printf("giá trị sau khi a*b+c/2 là %d",d);
  d=a%b;
  printf("giá trị sau khi a%b là %d",d);
  d=a*b-c;
  printf("giá trị sau khi a*b-c là %d",d);
  d=a/b+c;
  printf("giá trị sau khi a/b+c là %d",d);
  d=a+b*c;
  printf("giá trị sau khi a+b*c là %d",d);
  d=(a+b)*c;
  printf("giá trị sau khi (a+b)*c là %d",d);
  d=a*(b+c+(a-c)*b);
    
    return 0;
}
