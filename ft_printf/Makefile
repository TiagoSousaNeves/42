# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 19:02:38 by tcosta-f          #+#    #+#              #
#    Updated: 2024/05/27 02:17:22 by tcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_HEADER = $(LIBFT_DIR)/libft.h

FUNC = ft_printf.c ft_split_printf.c ft_itoa_printf.c ft_callocate_string.c
FUNC += ft_str_str_cmp.c ft_what_to_do.c ft_handle_specifier.c ft_calloc_printf.c
FUNC += ft_intlen.c ft_ptr_to_str.c ft_base_nb_len.c ft_reverse_string.c
FUNC += ft_chrstr.c ft_strndup.c ft_handle_space.c ft_handle_end_p_or_xs.c
FUNC += ft_n_char_in_str.c ft_ispositive.c ft_atoi_printf.c ft_bspace_printf.c 
FUNC += ft_count_words_printf.c ft_chr_str_cmp.c ft_uintlen.c ft_strnstr_printf.c
FUNC += ft_strrchr_printf.c ft_check_fill_width_organize_to_print.c
FUNC += ft_save_to_print_and_check_flag.c ft_check_what_to_do.c ft_bzero_printf.c
FUNC += ft_organize_to_print.c ft_handle_dot.c ft_handle_zero.c ft_apply_precision.c
FUNC += ft_handle_aux_negative.c ft_handle_space_and_zero.c ft_handle_plus.c
FUNC += ft_hexa_to_str.c ft_hexa_to_print.c ft_arg_to_str.c ft_unsigint_to_str.c 
FUNC += ft_handle_default_condition.c ft_handle_aux_positive_and_plus.c 

OBJS = ${FUNC:.c=.o}

RM = @rm -fr
CC = @gcc
MK_LIB = @ar rcs
CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

bonus: all

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) .
	cp $(LIBFT_HEADER) .

$(NAME): $(LIBFT) $(OBJS)  
	$(MK_LIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) libft.a
	$(RM) libft.h
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
