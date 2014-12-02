#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void boardState(char sideBoard[][4], int board[][4]);
void checkClass(int board[][4], char sideBoard[][4]);
void getIn(int& match, char sideBoard[][4], int board[][4]);
void clr();

int main() {
	int board[4][4];
	char sideBoard[4][4];
	int match = 0;

	checkClass(board, sideBoard);

	do {
		//menu
		boardState(sideBoard, board);
		//enter spots to flip over
		getIn(match, sideBoard, board);
	} while (match<8);

	return 0;
}

void getIn(int& match, char sideBoard[][4], int board[][4]) {
	int r1 = 0, r2 = 0, c1 = 0, c2 = 0;
	char cont, ticketT;


	cout << "What is your Ticket Type: (First Class [f], Business Class [b] or Economy [e].";
	cin >> ticketT;

	cout << "Enter your desired seat : (i.e. A 1, B 4, D 8).";
	cin >> c1 >> r1;


	if (ticketT = 'f'){
		if (r1 < 3){
			//assign seat
		}
		else{
			//pick again
			cout << "Business Class must  sit in row 1 or 2. Please pick a seat in those rows."
			goto pickSeat;
		}
	}
	sideBoard[r1-1][c1-1] = static_cast<char>((board[r1-1][c1-1])+ 48);
	
	boardState(sideBoard, board);

	cout << "Enter the coordinates of the second card seperated by a space: ";
	cin >> r2 >> c2;
	sideBoard[r2-1][c2-1] = static_cast<char>((board[r2-1][c2-1])+ 48);
	boardState(sideBoard, board);

	if (board[r1-1][c1-1] == board[r2-1][c2-1]){
		cout << "Hooray!!! It's a match." << endl;
		match++;
		cout << "Continue? (y/n)";
		going:
		cin >> cont;
		if (cont == 'y'){
			
		}
		else if (cont == 'n'){
			return;
		}
		else{
			cout << "Invalid input. Continue? (y/n)" << endl;
			goto going;
		}
	}
	else if (board[r1 - 1][c1 - 1] != board[r2 -1][c2 - 1]){
		boardState(sideBoard, board);
		cout << "Oops. Try again." << endl;

		cout << "Continue? (y/n)";
		gong:
		cin >> cont;
		if (cont == 'y'){

		}
		else if (cont == 'n'){
			return;
		}
		else{
			cout << "Invalid input. Continue? (y/n)" << endl;
			goto gong;
		}
		sideBoard[r1 - 1][c1 - 1] = '*';
		sideBoard[r2 - 1][c2 - 1] = '*';
	}
}

//displays boardign status
void boardState(char sideBoard[][4], int board[][4]) {
	//clear window
	clr();
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

void checkClass(int board[][4], char sideBoard[][4]) {
	int card = 0;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
	srand(time(NULL));  //  using the time seed from srand explanation 

	for (int i = 0; i < 13; i++){
		for (int j = 0; j < 6; j++){
			sideBoard[i][j] = '*';
		}
	}
	/*
	for (int i = 0; i < 13; i++){
		for (int j = 0; j < 6; j++){
		check:
			card = rand() % 8 + 1;
			if (card == 1 && c1 < 2){
				c1++;
				board[i][j] = card;
			}
			else if (card == 2 && c2 < 2){
				c2++;
				board[i][j] = card;
			}
			else if (card == 3 && c3 < 2){
				c3++;
				board[i][j] = card;
			}
			else if (card == 4 && c4 < 2){
				c4++;
				board[i][j] = card;
			}
			else if (card == 5 && c5 < 2){
				c5++;
				board[i][j] = card;
			}
			else if (card == 6 && c6 < 2){
				c6++;
				board[i][j] = card;
			}
			else if (card == 7 && c7 < 2){
				c7++;
				board[i][j] = card;
			}
			else if (card == 8 && c8 < 2){
				c8++;
				board[i][j] = card;
			}
			else{
				goto check;
			}
		}
	}*/
}

void clr(){
#ifdef WIN32
	system("cls");

#else 
	// Assume UNIX System
	system("clear");
#endif

}
