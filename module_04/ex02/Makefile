CC         = clang++
CFLAGS     = -Wall -Wextra -Werror -Wshadow -Wno-shadow
INCLUDE    = ./include
NAME       = brain
SRCDIR     = src
OBJDIR     = .obj
SRCS       = Brain.cpp Animal.cpp Dog.cpp main.cpp Cat.cpp tools.cpp
SRCS       := $(addprefix $(SRCDIR)/, $(SRCS))
HFILES     = Brain.hpp Animal.hpp Cat.hpp Dog.hpp tools.hpp
HFILES     := $(addprefix $(INCLUDE)/, $(HFILES))
OBJS       = $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

GREEN      = [1;32m
RESET      = [0m

all: $(NAME)
$(NAME): $(OBJS) $(HFILES)
	$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)Built target $(NAME)$(RESET)"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@
$(OBJDIR):
	@mkdir -p $@

clean:
	@-rm -rf $(OBJDIR)

fclean: clean
	@-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
