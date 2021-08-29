CC         = clang++
CFLAGS     = -Wall -Wextra -Werror -Wshadow -Wno-shadow
INCLUDE    = ./include
NAME       = bureaucratic_machine
SRCDIR     = src
OBJDIR     = .obj
SRCS       = Bureaucrat.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp \
			tools.cpp Form.cpp RobotomyRequestForm.cpp main.cpp
SRCS       := $(addprefix $(SRCDIR)/, $(SRCS))
HFILES     = Bureaucrat.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp \
			Form.hpp RobotomyRequestForm.hpp tools.hpp
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
