# Project `libft`

## Description
This project is part of the 42 curriculum, focusing on creating your own C library called `libft`. The library contains reimplementation of standard C library functions, as well as additional utility functions to aid in future projects. The `libft` project aims to enhance your understanding of basic data structures, memory management, and string manipulation in C programming.

## Requirements
- A C compiler (gcc/clang recommended)
- Basic knowledge of C programming
- Understanding of memory allocation and string manipulation functions in C

## Installation
1. Clone the repository:
  `git clone [repository_url]`
  `cd libft`
2. Compile the project:
  `make`
This will compile the `libft.a` library.

## The `libft` library includes the following components:
### Part 1: Standard Functions
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memccpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strnstr
- ft_strncmp
- ft_atoi

### Part 2: Additional Functions
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower
- ft_calloc
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Bonus Functions (Optional)
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Usage
1. Include the `libft.h` header file in your C program.
2. Use the provided functions from the `libft` library in your code.

Example usage:
```c
#include "libft.h"

int main(void)
{
 char *str = "Hello, world!";
 ft_putstr(str);
 return (0);
}
