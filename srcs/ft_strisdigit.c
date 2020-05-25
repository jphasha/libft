#include "libft.h"

int     ft_strisdigit(const char *str)
{
    int i;
    int v_d;

    i = 0;
    v_d = 1;
    if (str)
    {
        while (str[i])
        {
            if (!ft_isdigit(str[i]))
            {
                v_d = 0;
            }
            i++;
        }
    }
    return (v_d);
}