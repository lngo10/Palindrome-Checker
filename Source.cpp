#include <iostream>
#include <string>
#include <vector>
using namespace std;	

int main()
{
	string input;
	char rr = 'y';
	int leave = 0;
	while (rr == 'Y' || rr == 'y') {
		cout << "enter word" << endl; cin >> input;
		int inputsize = size(input);
		vector<char> inputword(input.begin(), input.end());
			for(int i = 0; i <= inputsize/2; i++){
				if (inputword[i] != inputword[inputsize - 1-i]){													
					leave = 1;
					break;
				}														
			}
			if (leave) {
				cout << input << " is not a palindrome" << endl; leave = 0;
			}
			else {
				cout << input << " is a palindrome" << endl;
			}
			cout << "rerun program? [Y/N]" << endl; //ask to rerun
			cin >> rr;
			cout << endl;
	}
}