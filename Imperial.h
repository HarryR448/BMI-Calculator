#pragma once
#include "input.h"
class Imperial :
	public Input
{
public:
	Imperial(void);
	~Imperial(void);
	double heightInput();
	double weightInput();
	double imperialOutput();

};
