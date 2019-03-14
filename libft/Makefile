# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ititkov <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/19 21:08:09 by ititkov           #+#    #+#              #
#    Updated: 2019/03/14 11:39:17 by ititkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCCW = gcc -Wall -Werror -Wextra
SRC = ft_atoi.c ft_isascii.c ft_lstdel.c ft_memalloc.c ft_memmove.c		\
ft_putchar_fd.c ft_putnbr_fd.c ft_strclr.c ft_strequ.c ft_strlen.c  	\
ft_strnequ.c ft_strstr.c ft_toupper.c ft_bzero.c ft_isdigit.c 			\
ft_lstdelone.c ft_memchr.c ft_memset.c ft_putendl.c ft_putstr.c			\
ft_strcmp.c ft_striter.c ft_strmap.c ft_strnew.c ft_strsub.c			\
ft_funintarr.c ft_isprint.c ft_lstiter.c ft_memcmp.c ft_numevenodd.c	\
ft_putendl_fd.c ft_putstr_fd.c ft_strcpy.c ft_striteri.c				\
ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_isalnum.c ft_itoa.c			\
ft_lstmap.c ft_memcpy.c ft_numposneg.c ft_putintarr.c ft_strcat.c		\
ft_strdel.c ft_strjoin.c ft_strncat.c ft_strncmp.c ft_strrchr.c			\
ft_swapintarr.c ft_isalpha.c ft_lstadd.c ft_lstnew.c ft_memdel.c		\
ft_putchar.c ft_putnbr.c ft_strchr.c ft_strdup.c ft_strlcat.c			\
ft_strncpy.c ft_strsplit.c ft_tolower.c ft_memccpy.c ft_itoa_base.c		\
ft_bchar.c ft_putwchar.c ft_putwchar_fd.c ft_strccrt.c ft_update.c		\
ft_strtoupper.c ft_tolower.c ft_wstrdup.c ft_wstrlen.c

OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		@$(GCCW) -c $(SRC)
		@ar rc $(NAME) $(OBJECT)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJECT)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
