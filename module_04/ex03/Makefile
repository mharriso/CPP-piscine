CC         = clang++
CFLAGS     = -Wall -Wextra -Werror -Wshadow -Wno-shadow
INCLUDE    = ./include
NAME       = materia
SRCDIR     = src
OBJDIR     = .obj
SRCS       = AMateria.cpp main.cpp Ice.cpp Cure.cpp \
			MateriaSource.cpp Character.cpp
SRCS       := $(addprefix $(SRCDIR)/, $(SRCS))
HFILES     = AMateria.hpp Ice.hpp Cure.hpp IMateriaSource.hpp \
			MateriaSource.hpp Character.hpp ICharacter.hpp
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
