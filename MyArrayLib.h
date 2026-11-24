#pragma once
#include <iostream>
#include "MyRandomLib.h"
using namespace std;

namespace MyArray {

	//This Section Will Be Moved To Another Array
	bool IsPrime(int num) {
		if (num < 2)
			return false;
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0)
				return false;
		}
		return true;
	}

	void Swap(int& a, int& b) {
		int temp = a;
		a = b;
		b = temp;
	}

	void FillArrayWithRandomNum1to100(int arr[100],int len) {
		for (int i = 0; i < len; i++) {
			arr[i] = MyRandom::RandomNum(1,100);
		}
	}

	void PrintArray(int arr[100], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] << " ";
		}
	}

	void AddElementToArray(int num,int arr[100],int &len) {
		arr[len] = num;
		len++;
	}

	bool IsNumInArray(int num, int arr[100], int len) {
		for (int i = 0; i < len; i++) {
			if (arr[i] == num)
				return true;
		}
		return false;
	}

	int FindPositionNumInArray(int num, int arr[100], int len) {
		for (int i = 0; i < len; i++) {
			if (arr[i]==num)
				return i;
		}
		return -1;
	}

	void CopyArray(int arrSource[100], int arrDestination[100], int len) {
		for (int i = 0; i < len; i++) {
			arrDestination[i] = arrSource[i];
		}
	}

	void CopyOddNumArray(int arrSource[100], int arrDestination[100], int lenSource, int &lenDestination) {
		lenDestination = 0;
		for (int i = 0; i < lenSource; i++) {
			if (arrSource[i] % 2 != 0) {
				arrDestination[lenDestination] = arrSource[i];
				lenDestination++;
			}
		}
	}

	void CopyPrimeNumArray(int arrSource[100], int arrDestination[100], int lenSource, int& lenDestination) {
		lenDestination = 0;
		for (int i = 0; i < lenSource; i++) {
			if (IsPrime(arrSource[i])) {
				arrDestination[lenDestination] = arrSource[i];
				lenDestination++;
			}
		}
	}

	void CopyDistinctElementsArray(int arrSource[100], int arrDestination[100], int lenSource, int& lenDestination) {
		lenDestination = 0;
		for (int i = 0; i < lenSource; i++) {
			if (!IsNumInArray(arrSource[i], arrDestination, lenDestination)) {
				arrDestination[lenDestination] = arrSource[i];
				lenDestination++;
			}
		}
	}

	void ShuffleArray(int arr[100], int len) {
		for (int i = len - 1; i > 0; i--) {
			int RandomIndex = MyRandom::RandomNum(0, i);
			Swap(arr[i], arr[RandomIndex]);
		}
	}

	//void ShuffleArray1(int arrSouce[100], int arrDestination[100], int len) {
	//	for (int i = 0; i < len; i++) {
	//		arrDestination[MyRandom::RandomNum(0, len - 1)] = arrSouce[MyRandom::RandomNum(0, len - 1)];
	//	}
	//}

	//void ShuffleِArray2(int arr[100], int len) {
	//	for (int i = 0; i < len; i++) {
	//		Swap(arr[i], arr[MyRandom::RandomNum(0,len-1)]);
	//	}
	//}

}