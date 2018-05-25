#include <stdio.h>
#include "ANSI_Escape_Codes.h"

int main(int argc, char const *argv[])
{
    printf("---------+---------+---------+---------+\n");
    printf("---------+---------+---------+---------+\n");
    printf("---------+---------+---------+---------+\n");
    printf("---------+---------+---------+---------+\n");
    printf("---------+---------+---------+---------+\n");
    printf("---------+---------+---------+---------+\n");
    ANSI_Position_H(0, 0);
    ANSI_Position_f(4, 10);
    ANSI_Up(3);
    ANSI_Forward(10)
        printf("Ufd\n");
    return 0;
}
