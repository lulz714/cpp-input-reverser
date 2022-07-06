/*maed by warrior714*/

#include <iostream>
using namespace std;

int main(){
	string input;
	cout << "Enter what you want to be reversed: \n";
	getline(cin, input);
	char reverse[input.length()];
	for (int i = input.length(); i > 0;i--){
		reverse[input.length()-i] = input[i-1];
	}
	cout << "\n" << reverse << endl;
	return 0;
}