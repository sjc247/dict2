
* //Project: CS2010, Assignment #2
* //Dictionary II
* //File: cdictionary */

#ifndef __CDICTIONARY__
#define __CDICTIONARY__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

typedef string WORD;

typedef struct Entry{


		WORD word;
		int freq;
} ENTRY;

class Dictionary{
	
	/* NOTE: The implementation of this Dictionary class allows for only a fixed
	* number of words. Ajust the parameter below to modify the size of
	* the Dictionary. */

	static const int WORD_MAX = 100;

	vector<ENTRY> entries;
	int word_index; 	/* The index of the current word Entry in the
				* Dictionary; also represents the num. of
				* Entries before it. */
	public:
	Dictionary(){word_index = 0;}
	
	bool isFull(){return (this -> word_index == WORD_MAX);}

	bool isEmpty(){return (this -> word_index == 0);}


	void getWords(); 	/* Opens the keyboard stream and collects a series of
				* chars to interpret them as words. If the word
				* does not already exist, the word is entered to a
				* Dictionary. */


	int addEntry(WORD word); /* Adds the word Entry to a Dictionary (as
				* long as it's not already full). */

	int findWord(WORD word); /* Compares the word with past Entries in a
				* Dictionary (as long as it's not empty) to
				* see if the word already exists. */
	
	int sortWords(); 	/* Sorts the word Entries in alphabetical
				* order (as long as the Dictionary isn't
				* empty). */

	int printWords(); 	/* Prints the contents of a Dictionary in a manner
				* that's clean, simple, and easy to look at (as long
				* as the Dictionary isn't empty). */

	int dumpWords(); 	/* Quick method of printing Entries in a Dictionary.
				* NOTE: Unless you're DEBUGing, use printWords
				* instead! */
};
#endif
