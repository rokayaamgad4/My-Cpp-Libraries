#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

namespace MyRandom {

	enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

	int RandomNum(int from, int to) {
		return rand() % (to - from + 1) + from;
	}

	char RandomChar(enCharType CharType) {
		switch (CharType) {
		case enCharType::Digit:
			return (char)RandomNum(48, 57);
		case enCharType::CapitalLetter:
			return (char)RandomNum(65, 90);
		case enCharType::SmallLetter:
			return (char)RandomNum(97, 122);
		case enCharType::SpecialCharacter:
			return (char)RandomNum(33, 47);
		default:
			return '\0';
		}
	}

	string RandomWord(enCharType charType, int length) {
		string word = "";
		for (short i = 0; i < length; i++) {
			word += RandomChar(charType);
		}
			return word;
	}

	string RandomKey() {
		string key = "";
		for (short i = 1; i <= 4; i++) {
			key += RandomWord(enCharType::CapitalLetter, 4);
			if (i < 4) {
				key += "-";
			}
		}
		return key;
	}
	


}