#include "Proxy.h"
#include <iostream>
void Proxy::Rename(string name)
{
	string namev2;
	for (char const& c : name) {
		if (c >= '0' && c <= '9')namev2+= c;
		if (c >= 'A' && c <= 'Z')namev2 += c;
		if (c >= 'a' && c <= 'z')namev2 += c;
		if (c == '.')namev2 += c;
	}
	if (name == namev2) {
		this->real->Rename(name);
	}
	else {

		std::cout << this->real->getName()+ " --> " + name + " WRONG NEW NAME" << endl;
	}
}
