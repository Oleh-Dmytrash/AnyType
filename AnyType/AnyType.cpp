#include "AnyType.h"


AnyType::AnyType()
{	
	element.type = nullptr;
	element.value.null = nullptr;
}

AnyType::~AnyType()
{
	
}

AnyType& AnyType::operator=(const AnyType& anyType)
{
	if (this == &anyType)
	{
		return *this;
	}
	element.value = anyType.element.value;
	element.type = anyType.element.type;
	return *this;
}

AnyType& AnyType::operator=(const bool& boolean)
{
	element.value.boolean = boolean;
	element.type = const_cast<type_info*>(&typeid(boolean));
	return *this;
}

AnyType& AnyType::operator=(const int& integer)
{
	element.value.integer = integer;
	element.type = const_cast<type_info*>(&typeid(integer));
	return *this;
}

AnyType& AnyType::operator=(const unsigned int& u_integer)
{
	element.value.u_integer = u_integer;
	element.type = const_cast<type_info*>(&typeid(u_integer));
	return *this;
}

AnyType& AnyType::operator=(const long int& l_integer)
{
	element.value.integer = l_integer;
	element.type = const_cast<type_info*>(&typeid(l_integer));
	return *this;
}

AnyType& AnyType::operator=(const unsigned long int& u_l_integer)
{
	element.value.u_integer = u_l_integer;
	element.type = const_cast<type_info*>(&typeid(u_l_integer));
	return *this;
}

AnyType& AnyType::operator=(const long long int& l_l_integer)
{
	element.value.integer = l_l_integer;
	element.type = const_cast<type_info*>(&typeid(l_l_integer));
	return *this;
}

AnyType& AnyType::operator=(const unsigned long long int& u_l_l_integer)
{
	element.value.u_integer = u_l_l_integer;
	element.type = const_cast<type_info*>(&typeid(u_l_l_integer));
	return *this;
}

AnyType& AnyType::operator=(const char& character)
{
	element.value.character = character;
	element.type = const_cast<type_info*>(&typeid(character));
	return *this;
}

AnyType& AnyType::operator=(const unsigned char& u_character)
{
	element.value.u_character = u_character;
	element.type = const_cast<type_info*>(&typeid(u_character));
	return *this;
}

AnyType& AnyType::operator=(const float& f)
{
	element.value.llf = f;
	element.type = const_cast<type_info*>(&typeid(f));
	return *this;
}

AnyType& AnyType::operator=(const double& lf)
{
	element.value.llf = lf;
	element.type = const_cast<type_info*>(&typeid(lf));
	return *this;
}

AnyType& AnyType::operator=(const long double& llf)
{
	element.value.llf = llf;
	element.type = const_cast<type_info*>(&typeid(llf));
	return *this;
}

bool AnyType::ToBool()
{
	if (strcmp(element.type->name(), "bool") != 0)
	{
		throw std::exception("Can't convert to bool");
	}
	return element.value.boolean;
}

int AnyType::ToInt()
{
	if (strcmp(element.type->name(), "int") != 0)
	{
		throw std::exception("Can't convert to int");
	}
	return element.value.integer;
}

unsigned int AnyType::ToUInt()
{
	if (strcmp(element.type->name(), "unsigned int") != 0)
	{
		throw std::exception("Can't convert to unsigned int");
	}
	return element.value.u_integer;
}

long AnyType::ToLong()
{
	if (strcmp(element.type->name(), "long") != 0)
	{
		throw std::exception("Can't convert to long int");
	}
	return element.value.integer;
}

unsigned long AnyType::TpULong()
{
	if (strcmp(element.type->name(), "unsigned long") != 0)
	{
		throw std::exception("Can't convert to unsigned long int");
	}
	return element.value.u_integer;
}

long long AnyType::ToLongLong()
{
	if (strcmp(element.type->name(), "__int64") != 0)
	{
		throw std::exception("Can't convert to long long int");
	}
	return element.value.integer;
}

unsigned long long AnyType::ToULongLong()
{
	if (strcmp(element.type->name(), "unsigned __int64") != 0)
	{
		throw std::exception("Can't convert to unsigned long long int");
	}
	return element.value.u_integer;
}

char AnyType::ToChar()
{
	if (strcmp(element.type->name(), "char") != 0)
	{
		throw std::exception("Can't convert to char");
	}
	return element.value.character;
}

unsigned char AnyType::ToUChar()
{
	if (strcmp(element.type->name(), "unsigned char") != 0)
	{
		throw std::exception("Can't convert to unsigned char");
	}
	return element.value.u_character;
}

float AnyType::ToFloat()
{
	if (strcmp(element.type->name(), "float") != 0)
	{
		throw std::exception("Can't convert to float");
	}
	return element.value.llf;
}

double AnyType::ToDouble()
{
	if (strcmp(element.type->name(), "double") != 0)
	{
		throw std::exception("Can't convert to double");
	}
	return element.value.llf;
}

long double AnyType::ToLongDouble()
{
	if (strcmp(element.type->name(), "long double") != 0)
	{
		throw std::exception("Can't convert to long double");
	}
	return element.value.llf;
}

const char* AnyType::GetType()
{
	return element.type->name();
}
