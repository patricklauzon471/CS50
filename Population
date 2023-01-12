#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;

    do {
        int start = get_int("What is the starting population?");

    }
    while (start > 9);

    // TODO: Prompt for end size
    int end;

    do {
        int end = get_int("What is the end population?");
    }
    while (end > start);

    // TODO: Calculate number of years until we reach threshold

    int i;
    do
    {
        start = start + ((start/3) - (start/4));
        i++;
    }
    while(end < start);

    // TODO: Print number of years
    printf("The number of years is %i", i);


}
