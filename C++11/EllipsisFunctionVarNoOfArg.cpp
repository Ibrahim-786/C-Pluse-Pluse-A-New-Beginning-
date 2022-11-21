// C++ program to demonstrate the
// use of Ellipsis
#include <cstdarg>
#include <iostream>


// Function accepting variable number
// of arguments using Ellipsis
int sum(int count, ...)
{
	// va_list found in <cstdarg> and
	// list is its type, used to
	// iterate on ellipsis
	va_list list;

	// Initialize position of va_list
	va_start(list, count);

	int s = 0;

	// Iterate through every argument
	for (int i = 0; i < count; i++) {
		s += va_arg(list, int);
			
	}

	// Ends the use of va_list
	va_end(list);

	// Return the average
	return s;
}

// Driver Code
int main()
{
	// Function call, 6 is a number of arg passing
	int s = sum(6, 1, 2, 3, 4, 5, 6);

	// Print Sum
	std::cout << "Sum of (1, 2, 3, 4, 5, 6) " << s<<"\n";

	int s1 = sum(4,10,20,30,50);
	std::cout<<"sum of (10,20,30,50) :"<<s1<<"\n";
	return 0;
}

