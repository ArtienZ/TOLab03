#pragma once
#include "Component.h"
#include "RealComp.h"
#include <iostream>
class Proxy:public Component
{
private:
	RealComp* real;
public:
	Proxy() {};
	Proxy(RealComp* real_) :real(new RealComp(*real)) {
		std::cout << "INIT" << endl;
	}
	virtual void CheckName(string name);
	string getName()const {
		return this->name;
	}
	~Proxy(){
		delete real;
	}
	

};

