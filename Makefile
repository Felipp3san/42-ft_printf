#Variables
CC			= cc
AR			= ar rcs
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I
TESTFLAGS	= -g -fsanitize=address -I
NAME		= libftprintf.a
TEST_FILE	= test_ft_printf.c

#Folders
LIBFT_DIR	= libft
INCLUDE_DIR	= include
SRC_DIR		= src
BUILD_DIR	= build

# Colors
DEF_COLOR	= \033[0;39m
GRAY		= \033[0;90m
RED			= \033[0;91m
GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN		= \033[0;96m
WHITE		= \033[0;97m

# Sources
SRC_FILES =	ft_printf \
			ft_printnbr \
			ft_putnbr_base \
			ft_printstr \
			ft_printchar \
			ft_printptr \
			ft_printunbr_base \
			ft_nbdigits_base \
			ft_uitoa_base

SRCS		= $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRC_FILES)))
OBJS 		= $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(SRC_FILES)))

# Rules
all: $(NAME)

test: all $(SRC_DIR)/$(TEST_FILE)
	@cc $(TESTFLAGS) $(INCLUDE_DIR) -o $@ $(SRC_DIR)/$(TEST_FILE) -L. -lftprintf
	@echo "$(GREEN)Test file compiled!$(DEF_COLOR)"

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)" 
	@$(CC) $(CFLAGS) $(INCLUDE_DIR) -I./$(LIBFT_DIR)/$(INCLUDE_DIR) -c $< -o $@

$(BUILD_DIR):
	@echo "$(YELLOW)Build dir not found. Creating...$(DEF_COLOR)" 
	@mkdir $(BUILD_DIR)

clean:
	@rm -rf $(BUILD_DIR)
	@make -C $(LIBFT_DIR) clean
	@echo "$(CYAN)ft_printf object files cleaned!$(DEF_COLOR)" 
	@echo "$(CYAN)libft object files cleaned!$(DEF_COLOR)" 

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@$(RM) test
	@echo "$(CYAN)libftprintf.a cleaned!$(DEF_COLOR)" 
	@echo "$(CYAN)libft.a cleaned!$(DEF_COLOR)" 

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt ft_printf!$(DEF_COLOR)" 

# Phony
.PHONY:		all clean fclean re
