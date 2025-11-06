# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 23:41:34 by rsao-pay          #+#    #+#              #
#    Updated: 2025/11/06 16:03:35 by rsao-pay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PART1 = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c

PART2 = ft_itoa.c ft_strjoin.c ft_split.c ft_striteri.c ft_strmapi.c \
		ft_substr.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c ft_lstsize.c ft_lstlast.c

SRC = ${PART1} ${PART2}

OBJS = ${SRC:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

%.o: %.c
	@${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@
	@echo "Compiling $< ... done!"

${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@echo "libft has appeared!"

all: ${NAME}

bonus: ${OBJS} ${BONUS_OBJS}
	@ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}
	@touch bonus
	@echo "Bonus features unlocked!"

clean:
	@${RM} ${OBJS} ${BONUS_OBJS}
	@echo "cleaning complete! (your workspace sparkles now)"
	@touch bonus
	@rm bonus

fclean: clean
	@${RM} ${NAME}
	@echo "libft.a yeeted into the void."

re: fclean all
	@echo "full rebuild complete. fresh and clean!"

.PHONY: all clean fclean re