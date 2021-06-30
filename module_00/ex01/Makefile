CC         = clang++
CFLAGS     = -Wall -Wextra -Werror
INCLUDE    = ./include
NAME       = crappybook
SRCDIR     = src
OBJDIR     = .obj
SRCS       = main.cpp \
              Contact.cpp
SRCS       := $(addprefix $(SRCDIR)/, $(SRCS))
OBJS       = $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

GREEN      = \033[1;32m
RESET      = \033[0m

all: $(NAME)
$(NAME): $(OBJS)
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

