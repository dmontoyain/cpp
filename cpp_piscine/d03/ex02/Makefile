NAME = "02"
FILES =	FragTrap	ScavTrap	ClapTrap \
		main

CC = g++
FLAGS = -Wall -Werror -Wextra

GREEN = \033[32m
CYAN = \033[36m
NO_COLOR=\033[0m

PREP_STR = $(CYAN)Preparing $(PROJECT)...$(NO_COLOR)
CLEANO_STR = $(CYAN)Cleaning object files...$(NO_COLOR)
CLEANB_STR = $(CYAN)Cleaning binary files...$(NO_COLOR)
OK_STR = $(GREEN)[OK]$(NO_COLOR)

CPP_F = $(addsuffix .cpp, $(FILES))

all: $(NAME)

$(NAME):
	@echo "$(PREP_STR)"
	@$(CC) $(FLAGS) $(CPP_F) -o $(NAME)
	@echo "$(PROJECT) Complete! $(NAME)...$(OK_STR)"

clean:
	@echo "$(CLEANO_STR)"
	@rm -f obj/*.o
	@echo "$(OK_STR)"

fclean: clean
	@echo "$(CLEANB_STR)"
	@rm -f $(NAME)
	@rm -rf obj
	@echo "$(OK_STR)"