#ifndef TOOLS_H_
# define TOOLS_H_

#include <iostream>

# define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
# define C_YELLOW  "\e[1;33m"
# define C_BLUE    "\e[1;34m"
# define C_MAGENTA "\e[1;35m"
# define C_CYAN    "\e[1;36m"
# define C_RESET   "\e[0m"

# define ULINE   "\033[1;21m"

# define B_BLACK   "\e[30;40m"
# define B_RED     "\e[30;41m"
# define B_GREEN   "\e[30;42m"
# define B_YELLOW  "\e[30;43m"
# define B_BLUE    "\e[30;44m"
# define B_MAGENTA "\e[30;45m"
# define B_CYAN    "\e[30;46m"

void	putString(const std::string &str, std::string color);
void	putError(const std::string &str);

#endif
