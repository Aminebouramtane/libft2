

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <unistd.h>

// int main() {
//     ft_putchar_fd('A', 1);

//     int fileDescriptor = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
//     if (fileDescriptor == -1) {
//         return 1;
//     }
//     ft_putchar_fd('B', fileDescriptor);
//     close(fileDescriptor);

//     return 0;
// }
