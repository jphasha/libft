#include "libft.h"

char        **ft_array_concat(char **arr, char *str)
{
    char    **new_arr;
    int     i;

    new_arr = NULL;
    i = ft_array_size(arr);
    if (str)
    {
        if (!arr)
        {
            ft_putendl("treo");
            if (!(new_arr = (char **)ft_memalloc(sizeof(char *) * 2)))
                return (NULL);
            new_arr[0] = ft_strdup(str);
            new_arr[1] = NULL;
            return (new_arr);
        }
        if (!(new_arr = (char **)ft_memalloc(sizeof(char *) * i + 2)))
            return (NULL);
        // ft_putnbr(i);
        i = 0;
        while (arr[i])
        {
            new_arr[i] = ft_strdup(arr[i]);
            i++;
        }
        ft_loop_memdel((void **)arr);
        new_arr[i] = ft_strdup(str);
        i++;
        new_arr[i] = NULL;
    }
    return (new_arr);
}