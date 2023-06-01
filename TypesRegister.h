#pragma once

#include <type_traits>

class TypesRegister
{
public:
	template<class T>
	static int getId()
	{
		return get_id<typename std::remove_cv<T>::type>();
	}

private:
	template<class T>
	static int get_id()
	{
		static int id = ++cur_id;
		return id;
	}

	static int cur_id;
};
