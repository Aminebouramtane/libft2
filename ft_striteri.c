

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (s == NULL || f == NULL)
		return;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}


// void myFunction(unsigned int index, char *c) {
//     *c = *c + index;
// }

// int main() {
//     char str[] = "hello";
//     ft_striteri(str, myFunction);
//     printf("Modified String: %s\n", str);
//     return 0;
// }
