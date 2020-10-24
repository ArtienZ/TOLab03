#pragma once
#include "Component.h"
class RealComp :
	public Component
{
private:
	string checkname;
public:
	RealComp();
	void CheckName(string name);
	~RealComp();
	string getName()const {
		return this->name;
	}
	
};

