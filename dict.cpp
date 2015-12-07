#include "dictionary.h"
BOOL InsertWord(DICT dict, WORD word){
/*
adds word to dictionary , if word can't be added returns false else returns true
*/
BOOL found = 1; //BOOL the function will be returning
if((NumWords<MAX) && (word.length()<=20)){ //Compare number of words to MAX and check length of word purely to keep formatting nice
dict[NumWords] = word; //Copy word at next position in dict
count[NumWords]++; //Increment count at word position
NumWords++; //Increment number of words
}
else{
badcount++; //Increment global variable that tracks numbers of words not added
found = 0; //return BOOL will be 0
}
return found;
}
void DumpDictionary(DICT dict, int count[]) {
/*
will sort the dictionary, and display the contents
*/
//sort(dict, dict+NumWords); //Too many errors
WORD tmp; //Temp WORD for sorting
int tmp2; //Temp int for sorting
//Oh boy! Bubble sort!
for(int i=0; i<(NumWords-1); i++){ //NumWords-1 so it doesnt go include a null space,because its an array of fixed size, not a vector
for(int j=0;j<(NumWords-1)-i;j++){ //Probably doing more checks than necessary
if(dict[j]>dict[j+1]){ //Compare the two string that are next to each other
tmp = dict[j+1]; //Swapping the strings
dict[j+1] = dict[j];
dict[j] = tmp;
tmp2 = count[j+1]; //Also have to swap stuff in count array
count[j+1] = count[j];
count[j] = tmp2;
}
}
}
cout << endl;
cout << "Word Frequency" << endl;
cout << "---------------------------" << endl;
for(int i=0; i<NumWords; i++){
cout << dict[i];
for(int j=0; j< 20 - dict[i].length(); j++) cout << ' '; //Prints a fixed amount of spaces based off length of word
cout << count[i] << endl;
}
cout << endl << "Number of words not included = " << badcount <<endl; //Prints number of words not included //Doesn't account for duplicates
}
WORD GetNextWord(void){
/*
will retrieve next word in input stream. Word is defined just as in assignment #1
returns a WORD or empty string if no more words in input stream
*/
char ch;
WORD tmp;
while( cin.good() ){
ch = cin.get();
if(ch == ' ') return tmp;
if ( isalpha(ch) ) { // function test is ch is A-Z or a-z, then concats the chars onto word
tmp.push_back(ch);
}
else break;
}
return tmp;
}
BOOL FullDictionary(DICT dict) {
/*
if dictionary is full, return 1 else 0
*/
if(NumWords == MAX) return 1; //Compare number of words in dictionary to MAX, the total size
return 0;
}
int LocateWord(DICT dict, WORD word) {
/*
will determine if dictionary contains word. if found, returns position else returns value < 0
*/
int found = 0;
int i;
for(i=0;i<NumWords;i++) //Go through each element of dict
if(dict[i]== word){ //Compare dict and word
found = 1;
break;
};
if(found==0) return -1; //If not found
return i; //Else return location, which is i
}
