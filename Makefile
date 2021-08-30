# **************************************************************************** #
#                                                                              #
#                                                           :::      ::::::::  #
#  Makefile                                               :+:      :+:    :+:  #
#                                                       +:+ +:+         +:+    #
#  By: mirueta- <mirueta-@student.42urduliz.com>      +#+  +:+       +#+       #
#                                                   +#+#+#+#+#+   +#+          #
#  Created: 2021/07/21 12:19:19 by mirueta-              #+#    #+#            #
#  Updated: 2021/08/03 09:55:09 by mirueta-             ###   ########.fr      #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCS    = ft_isalpha.c\
		  ft_toupper.c\
		  ft_tolower.c\
		  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isascii.c\
		  ft_strlen.c\
		  ft_strncmp.c\
		  ft_isprint.c\
		  ft_strlcat.c\
		  ft_strlcpy.c\
		  ft_strnstr.c\
		  ft_strchr.c\
		  ft_strrchr.c\
		  ft_memset.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_calloc.c\
		  ft_strdup.c\
		  ft_substr.c\
		  ft_atoi.c\
		  ft_strjoin.c\
		  ft_strtrim.c\
		  ft_itoa.c\
		  ft_striteri.c\
		  ft_strmapi.c\
		  ft_split.c\
		  ft_putchar_fd.c\
		  ft_putnbr_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c

LIBC		= ar -rcs

OBJ			= $(SRCS:.c=.o)

BONUS		= ft_lstnew.c\
			  ft_lstsize.c\
			  ft_lstadd_front.c\
			  ft_lstadd_back.c\
			  ft_lstlast.c\
			  ft_lstdelone.c\
			  ft_lstclear.c\
			  ft_lstiter.c\
			  ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC      	= gcc -c -o

RM      	= rm -f

CFLAGS  	= -Wall -Wextra -Werror

INCLUDE    	= libft.h

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ) $(INCLUDE)
	$(LIBC) $(NAME) $(OBJ)

all:    $(NAME)

bonus:	$(OBJ) $(BONUS_OBJS) $(INCLUDE)
	$(LIBC) $(NAME) $(BONUS_OBJS) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re .c .o
