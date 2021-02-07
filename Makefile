# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 17:32:49 by areinhar          #+#    #+#              #
#    Updated: 2021/02/07 21:21:45 by areinhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef LIBFT_H
# define LIBFT_H

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
       ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
       ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
       ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
       ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
       ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}

CC		= cc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY : all clean fclean re so