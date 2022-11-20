#include <iostream>
#include <concepts>

template<typename COLL, typename T>
void add2collection(COLL& coll, const T& value)
{
	coll.push_back(value);
}

// C++ 20 support abbreviated function template
void add2collection_cpp20(auto& coll, const auto& value)
{
	coll.push_back(value);
}

template<typename COLL>
concept HasInsert = requires (COLL coll, COLL::value_type value) {
	coll.insert(value);
};

// This is one is more preferable because it is more specialized
void add2collection_cpp20(HasInsert auto& coll, const auto& value)
{
	coll.insert(value);
}

// Another way to do the add2Collection
void add2collection_cpp20_combine(auto& coll, const auto& value)
{
	if constexpr (requires { coll.insert(value); })
	{
		coll.insert(value);
	}
	else
	{
		coll.push_back(value);
	}
}
