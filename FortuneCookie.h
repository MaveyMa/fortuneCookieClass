#ifndef FORTUNECOOKIE_H
#define FORTUNECOOKIE_H
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
		//***********************************************************
		FortuneCookie();
		// SUMMARY: Default constructor assigns a fortune to each
		// index in the fortunes array. It also initializes the randomIx
		// to a random number from 0 to 9.
		// PRE: FortuneCookie has garbage values in the variables.
		// POST: The FortuneCookie object has been initialized so
		// that randomIx has a value from 0 – 9 and the array of fortunes has a
		// fortune at each index.
		//***********************************************************
		//
		//***********************************************************
		void openFortuneCookie();
		// SUMMARY: Displays fortune at randomIx in the array
		// of strings. Sample output shown below:
		// |=========================|
		// | You will get great news!|
		// |=========================|
		// PRE: String array with fortunes has been initialized.
		// randIx has been assigned a value from 0 to 9.
		// POST: Random fortune displayed with the format shown above.
		//***********************************************************
		//
		//***********************************************************
		void generateNewFortune();
		// SUMMARY: Creates a new random index that
		// represents a different fortune. Fortunes are stored
		// in a string array called fortunes, of size 10.
		// PRE: Array of 10 fortunes has been
		// initialized so that there are no empty strings.
		// POST: A new index between 0 - 9 has been
		// generated and assigned to randomIx.
		//***********************************************************
};

#endif //END FORTUNE COOKIE CLASS
