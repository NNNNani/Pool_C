#include <stdio.h>


int factorial(int nb)
{
    if (nb < 0)
        return 0;          // تقدر تبدلها حسب القاعدة ديال البروجي
    if (nb == 0 || nb == 1)
        return 1;
    return nb * factorial(nb - 1);
}
