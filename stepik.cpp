
#include <iostream>

using namespace std;

char *ft_joinchr(char const *line, char c, size_t len)
{
	char		*s;
	int			i;

	s = new char[len + 1];
	for(i = 0; i < len; i++)
		s[i] = (*line) ? *line++ : c;
	s[i] = '\0';
	return (s);
}

char * getline()
{
	char		*line;
	char		*tmp;
	char		c;
	size_t		len;


	line = new char[1];
	*line = '\0';
	len = 0;
	//while(cin >> noskipws >> c && c != '\n')
	while (cin.get(c) && c != '\n')
	{
		tmp = ft_joinchr(line, c, ++len);
		delete [] line;
		line = tmp;
	}
	return (line);
}
