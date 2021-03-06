#include "FortuneCookie.h"
#include <iostream>
#include <string>
#include <cstdlib> //rand(),srand()
#include <ctime> // time()
using namespace std;

FortuneCookie::FortuneCookie()
{
	srand(time(0));
    randomIx = rand() % 10; //[0, 9]
	fortunes[0] = "Remember to fulfill the promise you made to yourself.";
	fortunes[1] = "A day for firm decisions! Or is it?";
	fortunes[2] = "You don't stop laughing because you grow old.\n|You grow old because you stop laughing.";
	fortunes[3] = "If your desires are not to extravagant they will be granted.";
	fortunes[4] = "Good things are being said about you.";
	fortunes[5] = "Whatever has been attained is attainable.";
	fortunes[6] = "I don't know the key to success,\n|but the key to failure is trying to please everybody.";
	fortunes[7] = "Now is the time to try something new.";
	fortunes[8] = "The impossible is often the untried.";
	fortunes[9] = "The nicer anything tastes, the worse it is for you.";
}//END DEFAULT CONSTRUCTOR

void FortuneCookie::openFortuneCookie()
{
	cout << "|=============================================================|" << endl;
	cout << "|" << fortunes[randomIx] << "|" << endl;
	cout << "|=============================================================|" << endl;
	cout << endl;
	return;
}//END OPEN FORTUNE COOKIE

void FortuneCookie::generateNewFortune()
{
	srand(time(0));
    randomIx = rand() % 10; //[0, 9]
	return;
}//END GENERATE NEW FORTUNE
