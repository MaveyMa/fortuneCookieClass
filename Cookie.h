#ifndef COOKIE_H
#define COOKIE_H
#include <string>

/*
	CLASS NAME: FortuneCookie 
	DESCRIPTION: Each fortune cookie will have an array of 
		10 strings that represent different fortune possibilities. 
	One of those fortunes will be the active one. 
	That active fortune will be selected by generating 
		a random number for the index.
*/

class FortuneCookie
{
	private:
		int randomIx;
		std::string fortunes[10];
	public:
		FortuneCookie();
		void openFortuneCookie();
		void generateNewFortune();
};

#endif //END COOKIE CLASS
