#include "fun.h"

int DecimalToBinary(int Decimal)
{
    if (Decimal == 0)
        return 0;
    else
        return (Decimal % 2 + 10 *DecimalToBinary(Decimal/ 2));
}