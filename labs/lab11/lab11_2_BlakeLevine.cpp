#include <iostream>
using namespace std;

bool isValue(char ch);

int main() {

	char ch;
	int numberVowels;
	cout << "Enter a letter to determine if it is a vowel: ";
	cin.get(ch);
	cout << endl;
	while (ch != '\n') {
		
		if(isValue(ch) == true) {
			numberVowels++;
		}
		cin.get(ch);
	}

	cout << endl << "The total vowels in the string is: " << numberVowels << endl;
	return 0;
}

bool isValue(char ch) {
	switch (ch) {
		case 'A':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'a':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'E':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'e':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'I':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'i':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'O':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'o':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'U':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		case 'u':
			cout << ch <<" is a vowel" << endl;
			return true;
			break;
		default:
			cout << ch <<" is NOT a vowel" << endl;
			return false;
			break;
	}
}
