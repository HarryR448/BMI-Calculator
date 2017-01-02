#pragma once
class Input
{
public:
	Input();
	~Input();

	double getHeight();
	double setHeight(double p_height);
	double getWeight();
	double setWeight(double p_weight);
	double getOutput();
	double setOutput(double p_output);
	char typeInput();
private:
	double height;
	double weight;
	double output;
};

