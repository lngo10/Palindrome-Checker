#include <iostream>
#include <string>
#include <vector>
using namespace std;	/* palindrome checker

General algorithm:
1. read string or number
2. how many characters
3. even and odd function
		odd function																			even function
	 a. find mid char										a. find mid.1 and mid.2 chars
	 b. does mid+1 and mid-1 exist,							b. dones mid.1 -1 and mid.2+1 esist?
	 c. if yes, compare mid+1 to mid-1						c. if yes, compare mid.1 -1 and mid.2+1
			if = repeat [b] and +1 to mid value					if =
			if != exit loop output "no"
	 d. if no, output "yes"									d. if no, output "yes"

	 */

//1. read string

int main(){
string input;
char rr = 'y';
while (rr == 'Y' || rr == 'y') {
	cout << "enter word" << endl;
	cin >> input;
	int inputsize = size(input);
	vector<char> inputword(input.begin(), input.end());
	for (int i = 0; i < inputsize; i++) {
		inputword[i] = input[i];
		cout << inputword[i] << endl;	//test if inputword vector is equal to input
	}
	if (inputsize % 2 == 0) { //even function
		cout << "test for even" << endl; // remove later
		if (inputword.front() == inputword.back())
		{
			cout << "front and back are equal" << endl;
			/*if (inputword.front( + 1) == inputword.back( - 1) {
				cout << "front + 1 and back - 1 are equal" << endl;
			}*/
		}
	}
	/*else if (inputsize % 2 != 0) { // odd function
		cout << "test for odd" << endl; // remove later

		// test function for odd
		int oddsize = size(input);
		vector<char> oddword;
		for (int oddi = 0; oddi < oddsize; oddi++) { //do something x times depending on size off odd word
			//oddword.at(oddi) = input.at(oddi);
			//oddword.
		}
	}*/

	cout << "rerun program? [Y/N]" << endl; //ask to rerun
	cin >> rr;
	cout << endl;}
}