https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>

int main() {
  int sum = 0, len = 0;
  int inp;

  while ((inp = getchar()) && len < 20) {
    sum += inp;
    len++;
  }

  int avg = sum / len;

  return 0;
}