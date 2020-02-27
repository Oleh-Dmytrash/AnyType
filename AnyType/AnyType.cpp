#include "AnyType.h"

AnyType::AnyType()
{
	element.type = nullptr;
}

AnyType::~AnyType()
{
	element.type = nullptr;
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

void AnyType::swap(AnyType& anyType)
{
	if (this == &anyType)
	{
		return;
	}
	element.value = anyType.element.value;
	element.type = anyType.element.type;
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

char AnyType::ToChar()
{
	if (strcmp(element.type->name(), "char") != 0)
	{
		throw std::exception("Can't convert to char");
	}
	return element.value.character;
}

double AnyType::ToDouble()
{
	if (strcmp(element.type->name(), "double") != 0)
	{
		throw std::exception("Can't convert to double");
	}
	return element.value.llf;
}

const char* AnyType::GetType()
{
	return element.type->name();
}
