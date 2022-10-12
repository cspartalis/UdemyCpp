/* Create a C++ program that asks the user for their favorite number
 * between 1 and 100. Then, read this number from the console.
 * Suppose the user enters 24.
 * Then display the following to the console:
 * Amazing!! That's my favorite number too!
 * No really!! 24 is my favorite number!
 */

#include <iostream>

int main()
{
	int x{};

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> x;
	std::cout << "Amazing! That's my favorite number too!\n";
	std::cout << "No really!! " << x << " is my favorite number!\n";
}
