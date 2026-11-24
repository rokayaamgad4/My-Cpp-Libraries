#pragma once

namespace MyMath {

	bool IsPrime(int num) {
		if (num < 2)
			return false;
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0)
				return false;
		}
		return true;
	}

	bool IsEven(int num) {
		return (num % 2 == 0);
	}

	bool IsOdd(int num) {
		return  (num % 2 != 0);
	}

	int MaxOf3Nums(int a, int b, int c) {
		if (a >= b && a >= c)
			return a;
		else if (b >= a && b >= c)
			return b;
		else
			return c;
	}

	int MinOf3Nums(int a, int b, int c) {
		if (a <= b && a <= c)
			return a;
		else if(b <= a && b <= c)
			return b;
		else
			return c;
	}

	bool IsPerfect(int num) {
		int sum = 0;
		if (num <= 1)
			return false;
		for (int i = 1; i <= num / 2; i++) {
			if (num % i == 0)
				sum += i;
		}
		return (sum == num);
	}

	int Factorial(int num) {
		int factorial = 1;
		for (int i = num; i > 1; i--) {
			factorial *= i;
		}
		return factorial;
	}

	int SumOfDigits(int num) {
		int sum = 0;
		while (num > 0) {
			int Rem = num % 10;
			num = num / 10;
			sum += Rem;
		}
		return sum;
	}

	int ReverseNum(int num) {
		int num2=0,Rem=0;
		while (num > 0) {
			Rem = num % 10;
			num2 = num2 * 10 + Rem;
			num = num/10;
		}
		return num2;
	}

	bool IsPalindromeNum(int num) {
		int num2 = ReverseNum(num);
		return (num2 == num);
	}
}