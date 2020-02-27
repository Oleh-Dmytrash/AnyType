#pragma once

#include <typeinfo>
#include <string.h>
#include "Element.h"
#include "TypeUnion.h"

using namespace std;

class AnyType
{
public:
	AnyType();	
	template<typename T>
	AnyType(T input);
	~AnyType();	
	
	template<typename T>
	AnyType& operator=(T input);

	AnyType& operator=(const AnyType& anyType);
	
	void swap(AnyType& anyType);

	bool ToBool();
	int ToInt();	
	char ToChar();
	double ToDouble();

	const char* GetType();

private:
	Element element;	
};


template<typename T>
inline AnyType::AnyType(T input)
{
	if (strcmp(typeid(input).name(), "bool") == 0)
	{
		element.value.boolean = input;
		element.type = const_cast<type_info*>(&typeid(input));		
	}
	else if (strcmp(typeid(input).name(), "char") == 0)
	{
		element.value.character = input;
		element.type = const_cast<type_info*>(&typeid(input));	
	}
	else if (strcmp(typeid(input).name(), "int") == 0)
	{
		element.value.integer = input;
		element.type = const_cast<type_info*>(&typeid(input));		
	}
	else if (strcmp(typeid(input).name(), "double") == 0)
	{
		element.value.llf = input;
		element.type = const_cast<type_info*>(&typeid(input));		
	}
}

template<typename T>
inline AnyType& AnyType::operator=(T input)
{
	if (strcmp(typeid(input).name(), "bool") == 0)
	{
		element.value.boolean = input;
		element.type = const_cast<type_info*>(&typeid(input));
		return *this;
	}
	else if (strcmp(typeid(input).name(), "char") == 0)
	{
		element.value.character = input;
		element.type = const_cast<type_info*>(&typeid(input));
		return *this;
	}
	else if (strcmp(typeid(input).name(), "int") == 0)
	{
		element.value.integer = input;
		element.type = const_cast<type_info*>(&typeid(input));
		return *this;
	}
	else if (strcmp(typeid(input).name(), "double") == 0)
	{
		element.value.llf = input;
		element.type = const_cast<type_info*>(&typeid(input));
		return *this;
	}
}