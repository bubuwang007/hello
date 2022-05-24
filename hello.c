#include <stdio.h>
#include <ctype.h>

int main()
{
    while (1)
    {
        char ch = getchar();
        if (isalpha(ch))
        {
            printf("%c is an alphabet\n", ch);
        }
        else
        {
            printf("%c is not an alphabet\n", ch);
        }
    }

    return 0;
}