########################################################################
CC = gcc
OBJS = $(EX1:.c=.o) $(EX2:.c=.o)
BOBJS = $(BONUS:.c=.o)
CFLAGS = -Wall -Werror -Wextra -c
LIB = ar rcs
NAME = libft.a

EX1 = 	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c
		
EX2	=	ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

BONUS =	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

########################################################################
all: mklib

mklib: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

compile:
	$(CC) $(CFLAGS) $(EX1) $(EX2)

compileBonus:
	$(CC) $(CFLAGS) $(BOBJS)

bonus: $(BOBJS) $(OBJS)
	$(LIB) $(NAME) $(BOBJS) $(OBJS)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all