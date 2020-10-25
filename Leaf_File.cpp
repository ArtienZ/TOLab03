#include "Leaf_File.h"
#include <iostream>


string Leaf_File::getName() const
{
	return this->name;
}

void Leaf_File::more()
{
	std::cout << this->data << endl;
}

