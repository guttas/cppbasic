#include <iostream>

void print_cpp11()
{}

template<typename T, typename... ARGS>
void print_cpp11(T first, ARGS... types)
{
	std::cout << first << std::endl;

	print_cpp11(types...);
}

template<typename T, typename... ARGS>
void print_cpp17(T first, ARGS... types)
{
	std::cout << first << std::endl;

	if constexpr (sizeof...(types) > 0)
	{
		print_cpp17(types...);
	}

}