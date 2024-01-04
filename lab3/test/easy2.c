https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>
#include <string.h>

int main() {
  char input[65536];
  fgets(input, sizeof(input), stdin);
  int x = 13;
  int z = 21;

  if (strlen(input) % 13 == 0) {
    z = x / 0;
  }

  if (strlen(input) > 100 && input[25] == 'a') {
    z = x / 0;
  }

  return 0;
}
