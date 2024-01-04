https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "prelude.h"

int main(int argc, char **argv) {
  int x;
  int y;
  if (argc > 2) {
    x = 0;
    y = x;
  } else {
    x = tainted_input();
    y = x;
  }
  int z = 4 / y; // alarm
}
