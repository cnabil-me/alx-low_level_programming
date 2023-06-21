#include <unistd.h>
int _putchar(char c);

void print_alphabet_x10(void)
{
        int count;
        char lower;

        for (count = 1; count <= 10; count++)
        {
                for (lower = 'a'; lower <= 'z'; lower++)
                {
                        _putchar(lower);
                }
                _putchar('\n');
        }
}
