#include <iostream>
#include <string>

using namespace std;

int Go4(void){
	string str = "The quick brown fox jumps over the lazy dog.";
	bool ispangram = true;
	cout << "Enter a string: \n";
	cin.ignore();
	getline(cin, str);
	cout << endl;

	unsigned short count;
	int posl, posL;
	bool next_letter;
	for(char letter = 'a', Letter = 'A'; letter <= 'z'; letter++, Letter++){
		posl = 0;
		posL = 0;
		count = 0;
		
		next_letter = false;
		do{
			posl = str.find(letter, posl);
			if(posl != string::npos){
				count++;
				posl++;
			} else next_letter = true;
		} while (!next_letter);
		
		next_letter = false;
		do{
			posL = str.find(Letter, posL);
			if(posL != string::npos){
				count++;
				posL++;
			} else next_letter = true;
		} while (!next_letter);
		
		if(count == 0)
			ispangram = false;
		cout << letter << "=" << count << endl;
	}
	if (ispangram)
		cout << "Pangram \n";
	else cout << "Not pangram\n";
	
	return 0;
} 