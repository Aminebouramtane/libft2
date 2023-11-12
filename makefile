# files = ft_isalpha.c main.c libft.h ft_isdigit.c ft_isalnum.c \
# 		ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
# 		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
# 		ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_calloc.c \
# 		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strchr.c \
# 		ft_itoa.c 
# gcc = gcc -Wall -Wextra -Werror 

# all : exe
# 	./a.out
# exe : libft.h
# 	$(gcc)$(files)

NAME=	libft.a
cc=	cc 
CFLAGS=	-Wall -Wextra -Werror

AF=	ft_isalpha.c	\
ft_isdigit.c	\
ft_isalnum.c	\
ft_isascii.c	\
ft_toupper.c	\
ft_tolower.c	\
ft_isprint.c	\
ft_atoi.c	\
ft_strncmp.c	\
ft_bzero.c	\
ft_memset.c	\
ft_memcpy.c	\
ft_memmove.c	\
ft_memchr.c	\
ft_memcmp.c	\
ft_strlcpy.c	\
ft_strlcat.c	\
ft_strlen.c	\
ft_strchr.c	\
ft_strrchr.c	\
ft_calloc.c	\
ft_strnstr.c	\
ft_strdup.c	\
ft_substr.c	\
ft_strjoin.c	\
ft_strtrim.c	\
ft_itoa.c	\
ft_strmapi	\


HLB=	$(AF:.c=.o)

%.o : %.c
	$(cc) $(CFLAGS) -c  $?

all:	$(NAME)
	
$(NAME):	$(HLB)
	ar r $(NAME) $(HLB)
	


clean:
	rm -f $(HLB) $(BONUSO)

fclean:	clean
	rm -f $(NAME)

re: fclean all 