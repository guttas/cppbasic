#include <iostream>

void print_cpp11()
{}

template<typename T, typename... Types>
void print_cpp11(T firstArg, Types... args)
{
	std::cout << firstArg << std::endl;

	print_cpp11(args...);
}

template<typename T, typename... Types>
void print_cpp17(T firstArg, Types... args)
{
	std::cout << firstArg << std::endl;

	if constexpr (sizeof...(args) > 0)
	{
		print_cpp17(args...);
	}
}