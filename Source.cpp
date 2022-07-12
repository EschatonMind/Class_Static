#include <iostream>
#include "Student.h"
using namespace std;

int main() {
	Student S1;
	Student S2;
	S1.setAge(2);
	S2.setAge(50);
	cout << S1.GetAge() << endl;
	cout << S2.GetAge() << endl;
	cout << Student::GetTS() << endl;

	return 0;
}