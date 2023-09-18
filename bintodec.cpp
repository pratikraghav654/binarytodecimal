 // C++ program to convert binary to decimal
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}

// main function
int main()
{
	int num ;
	cout<<" Enter binary number you want to convert"<<endl;
	cin>>num;

	cout <<"Answer of input is"<<" "<< binaryToDecimal(num) << endl;
}