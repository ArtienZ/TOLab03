#pragma once
#include "Component.h"
#include "Leaf_File.h"
#include <iostream>
class Proxy:public Component
{
protected:
	Component* real;
public:
	Proxy() {};
	Proxy(Component* real_) :real(real_) {
		this->real->Rename(real_->getName());
	}
	void Rename(string name);
	string getName()const {
		return this->name;
	}
	~Proxy() {};
	

};

