#pragma once

typedef union
{
	long long int integer;
	unsigned long long u_integer;

	long double llf;

	char character;
	unsigned char u_character;

	bool boolean;

	std::nullptr_t null;
}Value;