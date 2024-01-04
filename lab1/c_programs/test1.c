https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>

int main() {
    int a = getchar() - '0';
    int b = getchar() - '0';

    b *= a;
    a = b / a;
    return 0;
}