#pragma once
#include <iostream>
using namespace std;
class Student
{
	static int TS;  //Static Var
public:
	int age;
	int serialnom;
	
	Student() {
		TS++;
	}
	void setAge(int n) {
		age = n;
	}
	int GetAge() {
		return age;
	}

	static int GetTS() {	//Static Function

		return TS;
	}
};

int Student::TS = 0;	// Initializing Static Var 