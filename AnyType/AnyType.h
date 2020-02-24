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
	~AnyType();
	AnyType& operator=(const AnyType& anyType);
	AnyType& operator=(const bool& boolean);
	AnyType& operator=(const int& integer);
	AnyType& operator=(const unsigned int& u_integer);
	AnyType& operator=(const long int& l_integer);
	AnyType& operator=(const unsigned long int& u_l_integer);
	AnyType& operator=(const long long int& l_l_integer);
	AnyType& operator=(const unsigned long long int& u_l_l_integer);
	AnyType& operator=(const char& character);
	AnyType& operator=(const unsigned char& u_character);
	AnyType& operator=(const float& f);
	AnyType& operator=(const double& lf);
	AnyType& operator=(const long double& llf);

	bool ToBool();
	int ToInt();
	unsigned int ToUInt();
	long ToLong();
	unsigned long TpULong();
	long long ToLongLong();
	unsigned long long ToULongLong();
	char ToChar();
	unsigned char ToUChar();
	float ToFloat();
	double ToDouble();
	long double ToLongDouble();

	const char* GetType();

private:
	Element element;	
};