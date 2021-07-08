CC         = clang++
CFLAGS     = -Wall -Wextra -Werror
INCLUDE    = ./include
NAME       = bsp
SRCDIR     = src
OBJDIR     = .obj
SRCS       = main.cpp \
             Fixed.cpp \
			 Point.cpp \
			 bsp.cpp
SRCS       := $(addprefix $(SRCDIR)/, $(SRCS))
OBJS       = $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

GREEN      = [1;32m
RESET      = [0m

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
