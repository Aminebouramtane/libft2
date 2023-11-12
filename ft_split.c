

// #include "libft.h"
#include <stdio.h>

int    count_alpha(char *str, char c)
{
    int i;
    int flag;
    int count;

    i = 0;
    flag = 1;
    count = 0;

    while (str[i])
    {
        if(str[i] != c && flag == 1){
            flag = 0;
            count++;
        }
        else if (str[i] == c){
            flag = 1;
        }
        i++;
    }
    return (count);
}



int main()
{
    char *ptr = " ";
    printf("%d \n",count_alpha(ptr, ' '));
    return (0);
}

// char **ft_split(char const *s, char c)
// {
    
// }