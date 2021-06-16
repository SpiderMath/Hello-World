#include <iostream>
// In the first line, we are importing the IOStream library, since that is what we are going to use to take input and output in the console

using namespace std;
// We could use std::cout but that is kind of inefficient. So we are using this line, so that we can use cout without the std part, by default

// Main is the 'main' function, which is what will run when I run the file [It is the entry point of the program]
int main() {
	// cout prints stuff to the console, using the syntax of << "TExt" << "TExt after that" and etc,
	// Semi colons are Absolutely necessary or else the compiler will throw an error
	cout << "Hello, World!";
	// 0 is returned since INT main means that the function HAS to return a numerical value
	return 0;
}

// C++ is one of the fastest programming languages till date, and is widely supported cross platform. It is a statically typed Dynamic language.