#include "Proxy.h"
#include <iostream>
void Proxy::CheckName(string name)
{
	string namev2;
	std::cout << "ITS WORKS" << endl;
	for (char const& c : name) {
		if (c >= '0' && c <= '9')namev2+= c;
		if (c >= 'A' && c <= 'Z')namev2 += c;
		if (c >= 'a' && c <= 'z')namev2 += c;
		if (c == ' . ')namev2 += c;
	}
	if (name == namev2) {
		std::cout << "ITS WORKS" << endl;
		throw "INVALID";
	}
	else {
		std::cout << "WRONG NAME" << endl;
	}
}
