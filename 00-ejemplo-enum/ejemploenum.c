#include <stdio.h>

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday} //elementos fijos en los dias de la semana

int main()
{
    enum weekDays today;
    today = Wednesday;
    printf("Day %d", today + 1);
    return 0;
}

enum designElements
{
    ITALICS = 1;
    BOLD = 2;
    STRIKE = 3;
}
