// CPP_BangCuuChuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "Bang Cuu Chuong";
	for (int n = 2; n <= 9; n++) {
		for (int i = 1; i <= 10; i++)
		{
			cout << n << "x" << i << "=" << n * i << endl;

		}
		cout<< endl;
	}
}
   


