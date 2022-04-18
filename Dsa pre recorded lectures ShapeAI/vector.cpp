#include<iostream>
#include<vector>
using namespace std;
int main() {
	
//	myVector.push_back(value) - this adds an element at the end of the vector and also resizes it
//  myVector.at(index) = return a element at specified index number
//	myVector.size() =  returns an unsigned int equal to the number of the element
//	myVector.begin() - reads vector from first element 
//	myVector.insert(myVector.begin() + integer, new_value)  -adds element before specifiec number
//	myVector.erase(myVector.begin() + integer) - removes at specifc index number
//	myVector.clear() - removes all elements in vector
//	myVector.empty() - returns bool if the vector is empty
	vector<int>	myVector;
	
	myVector.push_back(3);
	myVector.push_back(3);
	myVector.push_back(3);
	myVector.push_back(3);
	
	cout << "Vector : ";
	
//	size() function returns unsigned int
	for(unsigned int  i = 0; i < myVector.size(); i++) {
		cout << myVector[i]  << " ";
	}
	cout << endl;
	
	myVector.insert(myVector.begin(),5);
	myVector.insert(myVector.begin() + 3,5);
	cout << "Vector : ";
	for(unsigned int  i = 0; i < myVector.size(); i++) {
		cout << myVector[i]  << " ";
	}
	cout << endl;
	
	myVector.erase(myVector.begin() + 3);
	cout << "Vector : ";
	for(unsigned int  i = 0; i < myVector.size(); i++) {
		cout << myVector[i]  << " ";
	}
	cout << endl;
	if(myVector.empty()) {
		cout << "Is empty" ;
	}
	else {
		cout << "Is not empty";
	}
	cout << endl;
	
	myVector.clear();
	cout << "Vector : ";
	for(unsigned int  i = 0; i < myVector.size(); i++) {
		cout << myVector[i]  << " ";
	}
	cout << endl;
}
