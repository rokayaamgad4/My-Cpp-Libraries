#pragma once
#include <iostream>
#include <string>
using namespace std;


namespace MyValidation {

	bool IsNumInRange(int num, int from, int to) {
		return (num >= from && num <= to);
	}

	bool IsPositiveNum(int num) {
		return (num > 0);
	}

	bool IsYesOrNo(char c) {
		return (c == 'y' || c == 'Y' || c == 'n' || c == 'N');
	}
}


namespace MyInput {

	int ReadNum() {
		int num ;
		cin >> num;
		return num;
	}

	float ReadFloatNum() {
		float num ;
		cin >> num;
		return num;
	}

	double ReadDoubleNum() {
		double num ;
		cin >> num;
		return num;
	}

	char ReadChar() {
		char c;
		cin >> c;
		return c;
	}

	string ReadString() {
		string Text;
		cin.ignore();
		getline(cin, Text);
		return Text;
	}

	int ReadNumberInRange(int from, int to) {
		int num = ReadNum();
		while (!MyValidation::IsNumInRange(num, from, to)) {
			cout << "Invalid Number , Try Again : ";
			num=ReadNum();
		}
		return num;
	}

	int ReadPositiveNum() {
		int num =ReadNum();
		while (!MyValidation::IsPositiveNum(num)) {
			cout << "Invalid Number , Try Again : ";
			num = ReadNum();
		}
		return num;
	}

	char ReadYesOrNo() {
		char c=ReadChar();
		while (!MyValidation::IsYesOrNo(c)) {
			cout << "Invalid Answer , Try Again : ";
			c=ReadChar();
		}
		return c;

	}

}
