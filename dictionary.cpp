
#include "dictionary.h"




BOOL InsertWord(DICT dict, WORD word){
	
		//adds word if its True,
	
	BOOL found = 1; //BOOL the function will be returning
	
	if((NumWords<MAX) && (word.length()<=20)){ 

	dict[NumWords] = word; 
<<<<<<< HEAD
	count[NumWords]++; 
=======
	count[NumWords]++; //Increment count at word position
>>>>>>> 5321e3299dd4bf8cb4bb139bfb69171fcaf9d5d0
	NumWords++; 
		}
	else{
		badcount++; 
<<<<<<< HEAD
			found = 0; //return BOOL will be 0
=======
			found = 0; 
>>>>>>> 5321e3299dd4bf8cb4bb139bfb69171fcaf9d5d0
	}
		return found;
}




void DumpDictionary(DICT dict, int count[]) {
<<<<<<< HEAD
	
			WORD tmp; 
			int tmp2;
		
=======

			WORD tmp; 
			int tmp2; 
	
>>>>>>> 5321e3299dd4bf8cb4bb139bfb69171fcaf9d5d0

	for(int i=0; i<(NumWords-1); i++){ 

	for(int j=0;j<(NumWords-1)-i;j++){ 
	
	if(dict[j]>dict[j+1]){ 

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
			
	for(int j=0; j< 20 - dict[i].length(); j++) cout << ' ';   										length of word
	cout << count[i] << endl;
	}
	cout << endl << "Number of words not included = " << badcount <<endl; 									included //Doesn't account for duplicates
}





WORD GetNextWord(void){
	
		char ch;
		WORD tmp;
		while( cin.good() ){
			ch = cin.get();
		if(ch == ' ') return tmp;
			if ( isalpha(ch) ) { // function test is ch is A-Z or a-z, then concats the chars onto 							word
		tmp.push_back(ch);
		}
		else break;
	}
	return tmp;
}
		BOOL FullDictionary(DICT dict) {
			
	if(NumWords == MAX) return 1; //Compare number of words in dictionary to MAX, the total size
		
		return 0;
		}




int LocateWord(DICT dict, WORD word) {
		
			int found = 0;
			int i;
			for(i=0;i<NumWords;i++) //Go through each element of dict
<<<<<<< HEAD
			if(dict[i]== word){ 
=======
			if(dict[i]== word){
>>>>>>> 5321e3299dd4bf8cb4bb139bfb69171fcaf9d5d0
			
			found = 1;
			break;
		};
	if(found==0) return -1; //If not found

		return i; 
	}
