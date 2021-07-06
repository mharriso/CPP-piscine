#include <iostream>
#include <fstream>
#include <cerrno>

void	exit_error(std::string msg)
{
	if(errno)
		perror(msg.c_str());
	else
		std::cerr << msg << std::endl;
	exit(EXIT_FAILURE);
}

int main(int argc, char const *argv[])
{
	std::string buf;
	std::string filename;
	std::string s1;
	std::string s2;

	if(argc != 4)
		exit_error("INVALID ARGUMENTS: FILENAME STRING_1 STRING_2");
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream fin(filename);
	if(!fin.is_open() || !getline(fin, buf))
		exit_error("INVALID FILE");
	std::ofstream fout(filename + ".replace");
	if(!fin.is_open())
		exit_error("CAN NOT CREATE FILENAME.replace");
	while(!fin.eof() && !fin.fail())
	{
		if(buf == s1)
			fout << s2 << std::endl;
		else
			fout << buf << std::endl;
		getline(fin, buf);
	}
	fin.close();
	fout.close();
	return (0);
}
