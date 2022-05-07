// C语言
#include <stdio.h>

int main(void) {
  int m = 88;
  printf("i = %x\n", m);
  /*
  printf的用法
    %d表示以十进制输出
    %x或%X表示以十六进制输出
    %o表示以八进制输出
  */

  float n = 123.45e-2;
  printf("x=%f\n", n);
  /*
    %f表示以浮点数float输出
    123.45e-2默认是double类型
  */

  int i = 45;
  long j = 102345;
  printf("%d %ld\n", i, j);
  float x = 6.6;
  float y = 8.8;
  printf("%f %lf\n", x, y);

  char ch = 'C';
  printf("%c\n", ch);

  int k = 47;
  printf("k = %x\n", k);
  printf("k = %X\n", k);
  printf("k = %#x\n", k);
  printf("k = %#X\n", k);

  int a;
  scanf("%d", &a);
  printf("a=%d\n", a);
  char c;
  while ((c = getchar()) != '\n') continue;
  int b;
  scanf("%d", &b);
  printf("b=%d\n", b);

  return 0;
}