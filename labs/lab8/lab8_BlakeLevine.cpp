#include <iostream>
using namespace std;

int main(){
	double num1, num2, ans;
	char opr;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "\nEnter second number: ";
	cin >> num2;
	cout << "\nEnter the operator: ";
	cin >> opr;
	cout << endl;
	
	if(opr == '+'){
		ans = num1 + num2;
	}
	else if (opr == '-'){
		ans = num1 - num2;
	}
	else if (opr == '*'){
		ans = num1 * num2;
	}
	else if (opr == '/'){
		if (num2 == 0){
			cout << "Sorry, you can't divide by zero." << endl;
			return 0;
		}
		else{
			ans = num1 / num2;
		}
	}
	else {
		cout << "That is not a valid operation" << endl;
		return 0;
	}
	cout << num1 << " " << opr << " " << num2 << " = " << ans << endl;

}
