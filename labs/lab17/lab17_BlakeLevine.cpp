#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void input(string name[], int votes[]);
void calc(int votes[], double total[]);
void output(string name[], int votes[], double total[]);

int main(){
    string name[5];
    int votes[5];
    double total[5];

    input(name, votes);
    calc(votes, total);
    output(name, votes, total);
    return 0;

}

//input function to get name and votes
void input(string name[], int votes[]){

    for(int i =0; i < 5; i++){
        cout << "Enter a candidates Name: " ;
        cin >> name[i];

        cout << "Enter total votes recieved: " ;
        cin >> votes[i];
    }
}

//function to calculate the percentage of votes per cadidate
void calc(int votes[], double total[]){
    int sum = 0;
    for(int i =0; i < 5; i++){
        sum += votes[i];
    }
    for(int j =0; j < 5; j++){
        total[j] = (votes[j]/(double)sum) * 100;
    }

}

//outputs results and winner
void output(string name[], int votes[], double total[]){

    string winner;

    cout << showpoint << fixed << setprecision(2);
    cout << setw(20) << left << "Candidate"<< setw(20) << left << "Votes Received" << "Total Votes" << endl;
    for(int i =0; i < 5; i++){
        cout << setw(20) << left << name[i] << setw(20) << left << votes[i] << total[i] << "%" << endl;
        if(votes[i]>votes[i-1]){
            winner = name[i];
        }
    }

    cout << "\nThe Winner of the election is " << winner << endl;


}
