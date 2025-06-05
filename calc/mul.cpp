#include "add.h"

int mul(int x, int y)
{
    int i = 0;
    int sum = 0;

    for (i = 0; i<y; i++)
    {
        sum = add(x,sum);
    }
    return sum;
}
