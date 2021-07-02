#ifndef KAREN_H
#define KAREN_H
#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
		Karen();
		~Karen();

};
#endif
