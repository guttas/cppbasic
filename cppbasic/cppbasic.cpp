// cppbasic.cpp : Defines the entry point for the application.
//

#include "cppbasic.h"
#include "variadic_template.h"

using namespace std;

int main()
{
	print_cpp11(1, 2.0, "me");

	print_cpp17(1, 2.0, "me");

	cout << "Hello CMake." << endl;
	return 0;
}
