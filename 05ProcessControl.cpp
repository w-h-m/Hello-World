// C语言
#include <stdio.h>

int main(void) {
  float score = 10000;
  int i = (90 <= score <= 100);  // i is always true
  printf("%d\n", i);
  return 0;
}
/**
 * @brief
 * 对于(90 <= score <= 100)
 * 先执行 90<=10000 ，得到的值为1
 * 再执行 1<=100,得到的值为1，所以i=1
 * 注：
 * 无论score的值是多少，90 <= score 得到的值为0或1，所以score <= 100的值恒为1
 * 因此，正确的写法是 score >= 90 && score <= 100
 *
 */