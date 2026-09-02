#include <iostream>
using namespace std;
int main()
{
	cout << "Hello my name is Shivam and I will solve this equation: "
		<< endl
		<< "Ax + B = 0"
		<< endl 
		<<"For x"
		<< endl;
	float A;
	float B;
	float X;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	X = (0 - B); // Subtract B from 0 to isolate Ax
	X = X / A; // Divide by A to solve for x
	cout << "Solving " << A << "x + " << B << " = 0" << endl;
	cout << "The answer is: " << endl;
	cout << "x = " << X << endl; // Print out the answer
}