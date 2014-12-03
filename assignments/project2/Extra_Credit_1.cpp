#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;

void fillBoard(char sideBoard[][6]);
void boardState(char sideBoard[][6]);
void getIn(int& match, char sideBoard[][6]);
void clr();

int main() {
	char sideBoard[13][6];
	int match = 0;

	fillBoard(sideBoard);

	do {
		//clear window
		clr();
		//menu
		boardState(sideBoard);
		//enter spots to flip over
		getIn(match, sideBoard);
	} while (match<78);

	return 0;
}

void getIn(int& match, char sideBoard[][6]) {
	int row, col;
	char c1, ticketT;

	//enter ticket type
	cout << "Select your Ticket Type: (First Class [f], Business Class [b] or Economy [e]";
	cin >> ticketT;
	ticketT = toupper(ticketT);
	pickseat:
	cin.clear();

	//enter seat number and covert column letter it to the column number
	cout << "Enter your desired seat : (i.e. A 1, B 4, D 8).";
	cin >> c1 >> row;
	col = (static_cast<int>((toupper(c1))) - 64);

	//Check if seat is available
	if (sideBoard[row - 1][col - 1] == 'X'){
		cout << "That seat is taken. Please select a seat that is free." << endl;
		goto pickseat;
	}

	//First class checker
	else if (ticketT == 'F'){
		//fills seat
		if (row < 3){
			sideBoard[row - 1][col - 1] = ('X');
			match++;
		}
		// not a Business class seat
		else{
			cout << "First class must  sit in row 1 or 2. please pick a seat in those rows. (Any key to continue)" << endl;

			goto pickseat;
		}
	}

	//Business class checker
	else if (ticketT == 'B'){
		//fills seat
		if (row >= 3 && row < 8){
			sideBoard[row - 1][col - 1] = static_cast<char>('X');
			match++;
		}
		// not a Business class seat
		else{
			cout << "Business class must sit in row 3 through 7. please pick a seat in those rows. (Any key to continue)" << endl;
			goto pickseat;
		}
	}

	//first Economy checker
	else if (ticketT == 'E'){
		//fills seat
		if (row >= 8 && row < 14){
			sideBoard[row - 1][col - 1] = static_cast<char>('X');
			match++;
		}
		// not a Economy class seat
		else{
			cout << "Economy class must sit in row 8 through 13. please pick a seat in those rows. (Any key to continue)" << endl;
			goto pickseat;
		}
	}
}


//displays boardign status
void boardState(char sideBoard[][6]) {

	//display board
	cout << setfill('-') << "          A   B   C   D   E   F" << endl;
	cout << "        " << setfill('-') << setw(25) << "" << endl;
	for (int i = 0; i < 13; i++){
		cout << setfill(' ') << "Row " << i + 1;
		if (i < 9){
			cout << "   | ";
		}
		else{
			cout << "  | ";
		}
		for (int j = 0; j < 6; j++){
			cout << sideBoard[i][j] << " | ";
		}
		cout << endl;
	}
	cout << "        " << setfill('-') << setw(25) << "" << endl;
}

//fills board with '*'
void fillBoard(char sideBoard[][6]) {

	for (int i = 0; i < 13; i++){
		for (int j = 0; j < 6; j++){
			sideBoard[i][j] = '*';
		}
	}
}

//clears screen
void clr(){
#ifdef WIN32
	system("cls");

#else 
	// Assume UNIX System
	system("clear");
#endif

}
