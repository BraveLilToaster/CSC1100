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
    } while (match<78);

    return 0;
}

void getIn(int& match, char sideBoard[][4], int board[][4]) {
    int r1 = 0, r2 = 0, c1 = 0, c2 = 0;
    char cont, ticketT;


    cout << "What is your Ticket Type: (First Class [f], Business Class [b] or Economy [e].";
    cin >> ticketT;

    pickseat:
    cout << "Enter your desired seat : (i.e. A 1, B 4, D 8).";
    cin >> c1 >> r1;
    c1 = (static_cast<int>(c1)-65);

    if(sideBoard[r1-1][c1-1] == 'X'){
       cout << "That seat is taken. Please select a seat that is free." << endl; 
    }
    else if (ticketT = 'f'){
        if (r1 < 3){
            sideBoard[r1-1][c1-1] = ('X');
            match++;
            cin >> cont;
        }
        else{
            //pick again
            cout << "First class must  sit in row 1 or 2. please pick a seat in those rows." << endl;
            goto pickseat;
        }
    }

    else if (ticketT = 'b'){
        if (r1 <= 3 && r1 < 8){
            sideBoard[r1-1][c1-1] = static_cast<char>('X');
            cin >> cont;
            match++;
        }
        else{
            //pick again
            cout << "business class must sit in row 3 through 7. please pick a seat in those rows." << endl;
            goto pickseat;
        }
    }
    
    else if (ticketT = 'b'){
        if (r1 <= 8 && r1 < 14){
            sideBoard[r1-1][c1-1] = static_cast<char>('X');
            cin >> cont;
            match++;
        }
        else{
            //pick again
            cout << "business class must sit in row 3 through 7. please pick a seat in those rows." << endl;
            goto pickseat;
        }
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
}

void clr(){
#ifdef WIN32
    system("cls");

#else 
    // Assume UNIX System
    system("clear");
#endif

}
