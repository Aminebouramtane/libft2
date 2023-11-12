

#include <stdio.h>
#include <stdlib.h>

// #include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ptr;

	// len = ft_strlen(s);
	len = 0;
	while (s[len])
	{
		len++;
	}
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (len +1));
	while (i < len)
	{
		ptr[i] = f(i,s[i]);
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
char myFunction(unsigned int index, char c) {
    return c + index;
}

int main() {
    const char *input1 = "hello";
    char *result1 = ft_strmapi(input1, myFunction);
    printf("Test Case 1: %s\n", result1);
    free(result1);

    const char *input2 = "world";
    char *result2 = ft_strmapi(input2, myFunction);
    printf("Test Case 2: %s\n", result2);
    free(result2);

    const char *input3 = "";
    char *result3 = ft_strmapi(input3, myFunction);
    printf("Test Case 3: %s\n", result3);
    free(result3);

    const char *input4 = NULL;
    char *result4 = ft_strmapi(input4, myFunction);
    printf("Test Case 4: %p\n", (void *)result4);
    free(result4);

    return 0;
}
