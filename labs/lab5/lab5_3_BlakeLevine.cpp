#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

	double ticketPrice, numberOfTicketsSold, boxPrice, boxTicketsSold, sidePrice, sideTicketsSold, premPrice, premTicketsSold, gaPrice, gaTicketsSold;

	ifstream infile;
	ofstream outfile;

	infile.open("data.txt");
	outfile.open("total.txt");

	infile >> boxPrice >> boxTicketsSold;
        infile >> sidePrice >> sideTicketsSold;
        infile >> premPrice >> premTicketsSold;
        infile >> gaPrice >>  gaTicketsSold;

	ticketPrice = boxPrice + sidePrice + premPrice + gaPrice;
	numberOfTicketsSold = boxTicketsSold + sideTicketsSold + premTicketsSold + gaTicketsSold;

	outfile << showpoint << fixed << setprecision(2);
	outfile << ticketPrice << " " << numberOfTicketsSold << endl;

	infile.close();
	outfile.close();
	
	return 0;

}
