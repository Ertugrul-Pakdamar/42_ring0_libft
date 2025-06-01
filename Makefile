NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c
CC = cc

SRCS = srcs/ft_atoi.c \
	srcs/ft_bzero.c \
	srcs/ft_calloc.c \
	srcs/ft_isalnum.c \
	srcs/ft_isalpha.c \
	srcs/ft_isascii.c \
	srcs/ft_isdigit.c \
	srcs/ft_isprint.c \
	srcs/ft_itoa.c \
	srcs/ft_memchr.c \
	srcs/ft_memcmp.c \
	srcs/ft_memcpy.c \
	srcs/ft_memmove.c \
	srcs/ft_memset.c \
	srcs/ft_putchar_fd.c \
	srcs/ft_putendl_fd.c \
	srcs/ft_putnbr_fd.c \
	srcs/ft_putstr_fd.c \
	srcs/ft_split.c \
	srcs/ft_strchr.c \
	srcs/ft_strdup.c \
	srcs/ft_striteri.c \
	srcs/ft_strjoin.c \
	srcs/ft_strlcat.c \
	srcs/ft_strlcpy.c \
	srcs/ft_strlen.c \
	srcs/ft_strmapi.c \
	srcs/ft_strncmp.c \
	srcs/ft_strnstr.c \
	srcs/ft_strrchr.c \
	srcs/ft_strtrim.c \
	srcs/ft_substr.c \
	srcs/ft_tolower.c \
	srcs/ft_toupper.c
OBJS = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o

BONUS = bonus/ft_lstnew_bonus.c \
	bonus/ft_lstadd_front_bonus.c \
	bonus/ft_lstsize_bonus.c \
	bonus/ft_lstlast_bonus.c \
	bonus/ft_lstadd_back_bonus.c \
	bonus/ft_lstdelone_bonus.c \
	bonus/ft_lstclear_bonus.c \
	bonus/ft_lstiter_bonus.c \
	bonus/ft_lstmap_bonus.c
BONUS_OBJS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
bonus: 
	$(CC) $(CFLAGS) $(SRCS) $(BONUS) -Iincludes
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -Iincludes

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re