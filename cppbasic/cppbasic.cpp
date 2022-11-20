// cppbasic.cpp : Defines the entry point for the application.
//

#include "cppbasic.h"
#include "variadic_template.h"
#include "concepts_template.h"

#include <vector>
#include <set>

int main()
{
	//print_cpp11(1, 2.0, "me");
	//print_cpp17(1, 2.0, "me");

	std::vector<int> vecInts;
	add2collection(vecInts, 1);

	add2collection_cpp20(vecInts, 10);

	std::set<int> setInts;
	add2collection_cpp20_combine(setInts, 2);

	return 0;
}
