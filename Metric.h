#pragma once
#include "input.h"
class Metric :
	public Input
{
public:
	Metric(void);
	~Metric(void);
	double heightInput();
	double weightInput();
	double metricOutput();
};


