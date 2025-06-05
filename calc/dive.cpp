#include "sub.h"

int dive(int x, int y)
{
    int quotient = 0;

    while (x >= y)
    {
        x = sub(x, y);
        quotient++;
    }

    return quotient;
}
