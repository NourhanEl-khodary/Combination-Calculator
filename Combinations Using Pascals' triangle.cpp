// Combinations Using Pascals' triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Nourhan Ihab El-Khodary
//Date: 16/11/2018
//Title: Calculating Combination
//Version: 1.0

#include "pch.h"
#include <iostream>

using namespace std;

int Combination(int n, int k);

int main()
{
	cout << Combination(9,5) << endl;
	return 0;
}


int Combination(int n, int k)
{
	//Base Case
	if ((n == 1) || (k == 0) || (n == k)) {
		return 1;
	}
	//Recrursive Function
	else {
		return (Combination(n - 1,k - 1) + Combination(n - 1,k));
	}
}
