NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
CFILES = push_swap.c create_stack.c print_stack.c find_last_node.c swap_a.c swap_b.c swap_swap.c lst_add_front.c lst_new.c \
		stack_size.c destroy_node.c push_a.c push_b.c rotate_a.c rotate_b.c rotate_rotate.c reverse_rotate_a.c \
		reverse_rotate_b.c reverse_r_r.c is_sorted.c update_index.c
OFILES = $(CFILES:.c=.o)
LIBFT_DIR = ./LIBFT/
LIBFT = $(LIBFT_DIR)libft.a

all: libft $(NAME)

libft:
	make -C $(LIBFT_DIR)

$(NAME): $(OFILES) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re libft