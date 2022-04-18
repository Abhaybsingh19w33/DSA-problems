#include<iostream>
#include<vector>
using namespace std;
//can use const if we are not going to modify it
void fillVector(vector<int>&);
//they always should be passed in refernce because they are very large in memory
// @param vector<int>& -  vector to be filled in
void printVector(const vector<int>&);
// @param const vector<int>& - the vector to be printed
void reverse(const vector<int>&);
void printEven(const vector<int>&);
void replace(vector<int>&);
int main() {
	vector<int>	vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
//	fillVector(vec);
	printVector(vec);
	reverse(vec);
	printEven(vec);
	replace(vec);
	printVector(vec);
	return 0;
}

void fillVector(vector<int>& newVec) {
	cout << "Type in a list of numbers ( -1 to stop) ";
	int input;
	cin >> input;
	while (input != -1) {
		newVec.push_back(input);
		cin >> input;
	}
	cout << endl;	
}

void printVector(const vector<int>& newVec) {
	cout << "Vector : ";
	for(unsigned int  i = 0; i < newVec.size(); i++) {
		cout << newVec[i]  << " ";
	}
	cout << endl;
}

void reverse(const vector<int>& newVec){
	cout << "Vector reversed : ";
	for(unsigned int  i = newVec.size() ; i > 0; i--) {
		cout << newVec[i-1]  << " ";
	}
	cout << endl;
}
void printEven(const vector<int>& newVec){
	cout << "Even Vector : ";
	for(unsigned int  i = 0; i < newVec.size(); i++) {
		if(newVec[i] % 2 == 0 ) {
			cout << newVec[i]  << " ";
		}
	}
	cout << endl;
}
void replace(vector<int>& newVec) {
	int old,replace;
	cout << "Type in a number to be replaced with another number: ";
	cin >> old >> replace;

	for(unsigned int  i = 0; i < newVec.size(); i++) {
		if(newVec[i] == old) {
			newVec[i] = replace;
		}
	}
	cout << endl;
}
