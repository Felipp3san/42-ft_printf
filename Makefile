CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

TEST_FILE = test_ft_printf

SRC_FILES = ft_printf.c \
			ft_printnbr.c \
			ft_putnbr_base.c \
			ft_printstr.c \
			ft_printchar.c \
			ft_printptr.c \
			ft_printunbr_base.c \
			ft_nbdigits_base.c \
			ft_uitoa_base.c

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

LIBPRINTF = -L./ -lftprintf

OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME) $(TEST_FILE)

$(TEST_FILE): $(NAME)
	cc $(CFLAGS) -o $@ $(addsuffix .c, $(TEST_FILE)) $(LIBPRINTF)

$(NAME): $(LIBFT) $(OBJ_FILES)
	@cp $(LIBFT) $(NAME)
	ar rcs $@ $(OBJ_FILES)

$(LIBFT):
	make -C $(LIBFT_PATH)

%.o: %.c
	cc $(CFLAGS) -c $^

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
