if [ $# -ne 2 ]
then
echo "first argument must be number of module XX"
echo "second argument must be the number of exercises"
else
mkdir module_$1
cd module_$1
for (( i=0; i < $2; i++ ))
do
mkdir ex0$i
cd ex0$i
mkdir src include
echo 'CC         = clang++
CFLAGS     = -Wall -Wextra -Werror -Wshadow -Wno-shadow
INCLUDE    = ./include
NAME       =
SRCDIR     = src
OBJDIR     = .obj
SRCS       = main.cpp
SRCS       := $(addprefix $(SRCDIR)/, $(SRCS))
HFILES     =
HFILES     := $(addprefix $(INCLUDE)/, $(HFILES))
OBJS       = $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

GREEN      = \033[1;32m
RESET      = \033[0m

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

.PHONY: all clean fclean re' > Makefile
cd src
echo '#include <iostream>

int main()
{
	return 0;
}' > main.cpp
cd ..
cd ..
done
fi
