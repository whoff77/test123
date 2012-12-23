#pragma

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main() {
	//vector<char> charVector;
	string custStringPtr;
	int id1 = 111, id2 = 222, id3 = 333;
	string l1 = "last1", f1 = "first1";
	string l2 = "last2", f2 = "first2";
	string l3 = "last3", f3 = "first3";
	stringstream out;
	string combined;
	//const char *outPtr;
	//char *vectorPtr = &charVector[0];

	out << l1 << ";" << f1 << ";" << id1 << ";";
	out << l2 << ";" << f2 << ";" << id2 << ";";
	out << l3 << ";" << f3 << ";" << id3 << ";";
	//combined = out.str();
	//copy(combined.c_str(), combined.c_str()+combined.length(), back_inserter(charVector));
	//char charArray[] = "lastTest1;firstTest1;idnumTest1;lastTest2;firstTest2;idnumTest2";
	combined = out.str();
	cout << "combined: " << combined << endl;
	//outPtr = combined.c_str();
	//custStringPtr = new char[combined.length()+1];
	//strcpy(custStringPtr, outPtr);
	custStringPtr = combined.c_str();
	cout << "custStringPtr: " << custStringPtr << endl;
	cin.get();
	return true;
}