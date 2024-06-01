#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int start;
    do
    {
        start= get_int("start size illamas: ");

    }
    while (start<9);

    int end;
    do
    {
        end=get_int("end size illamas: ");

    }
    while (end<start);

    int year=0;
    while (start < end)
    {
        start+= round (start/12);
        year++;

    }
    printf("Years: %i\n",year);

}