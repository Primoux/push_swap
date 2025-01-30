CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
LIBNAME = libft
LIB_EXE = $(addsuffix .a, $(LIBNAME))
LIB_HEADER = $(addsuffix .h, $(LIBNAME))

# Directories
DIR_LIB = libft/
DIR_INCLUDE = include/
DIR_SOURCE = src/
DIR_OBJ = $(DIR_SOURCE)objects/

# Components
COMPONENT := PARSING \
			SOLVING \
			OPERATION

# Generate component paths
define gen_path
DIR_$(1) = $$(addprefix $$(DIR_SOURCE), $(shell echo $(1) | tr '[:upper:]' '[:lower:]')/)
endef

# Generate paths for each component
$(foreach comp, $(COMPONENT), $(eval $(call gen_path, $(comp))))

# Targets
.PHONY: all clean fclean re print-

all: $(NAME)

$(NAME): $(LIB_EXE)
	$(CC) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(DIR_OBJ)/*.o
	$(MAKE) -C $(DIR_LIB) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(DIR_LIB) fclean

re: fclean all

print-%:
	@echo $($*)