#include <stdio.h>
#include <stdint.h>

typedef union My
{
    float   a_float;
    int     a_int;
    uint8_t pad[0];
}My;

void print_byte(My my)
{
    int i;
    for (i = 0; i < sizeof(My); i++)
    {
        printf("%ld  ", my.pad[i]);
    }
    puts(" ");
}

int main()
{
    My my;
    my.a_float = 10.3;
    print_byte(my);
}
