#include "stdafx.h"
#include "Metric.h"



Metric::Metric(void)  //constructor
{
}


Metric::~Metric(void)   //deconstructor
{
}

double Metric::heightInput()  //height input method for metric
{
	double metricheight;  // variabel that stores the height
	bool metheloop = true; //loop variable

	do {

	std::cout<<"Please input your height in Metres"<<std::endl;
	std::cin>> metricheight;  //allows input of height

		if (metricheight <= 5 && metricheight >= 0.5)  // if height is less than 5 and above 0.5 then the loop will automatically be set to false and the program will continue
		{
		metheloop = false;
		}

	if (metricheight >= 5 ||metricheight <= 0.4)  // if height if greater thn or equal to 5 or less than ior eual to 0.4 then the program will activate verification and the loop continues
	{
		char metheightcontinue;

		std::cout<<"error improbable height detected"<<std::endl;	  // tells user of odd input and asks whether to continue or not
		std::cout<<"Do you wish to continue with a weight of "<<metricheight<<std::endl;
		std::cout<<"If yes press Y if no press N"<<std::endl;
		std::cin>>metheightcontinue; //allows input of choice of continuing or not

		if (metheightcontinue == 'y' || metheightcontinue =='Y') // if y loop is disabled
		{
		metheloop = false;
		}

		if (metheightcontinue == 'n' || metheightcontinue =='N') // if n the loop is left as is and the program loops back after a few seconds
		{
		metheloop = true;
		}
	}}while (metheloop == true);  // as long as loop is true it will continue and only goes false upon correct input
		


	setHeight(metricheight); // the setheight variable's value is set to be equal to meticheights
	return metricheight;  // the result is returned
}


double Metric::weightInput() //weight input method for metric
{
	double metricweight;  //variable storing the weight
	bool metwloop = true; //loop variable

	do {
	std::cout<<"Please input your weight in kg"<<std::endl;
	std::cin >> metricweight;  // allows inpu of the weight to be stored in weight variable

	if (metricweight <= 150 && metricweight >= 20)  // if the variable is less than or equal to 150 and above or equal to 20 then the loop is set to false
		{
		metwloop = false;
		}

		if (metricweight >= 150 || metricweight <= 19) // if the variable si above or equal to 150 or less than or equal to 19 then verification will activate
	{
		char metweightcontinue; // variable taht stres a letter indicating user choice

		std::cout<<"error improbable weight detected"<<std::endl;	  //couts indicatig odd input and asking if they wish to continue with it
		std::cout<<"Do you wish to continue with a weight of "<<metricweight<<std::endl;
		std::cout<<"If yes press Y if no press N"<<std::endl;
		std::cin>>metweightcontinue;  // allows input of choice to continue or not

		if (metweightcontinue == 'y' || metweightcontinue =='Y')  // if y is entered the loop will be set to false
		{
		metwloop = false;
		}

		if (metweightcontinue == 'n' || metweightcontinue =='N')  //if n then the loop will continue
		{
		metwloop = true;
		}
		}}while (metwloop == true); //  as long as loop is true the program will keep running again and again and it can only be set false upon correct input
	setWeight(metricweight); // setweight's value is set to be equal to thevalue od metricweight
	return metricweight; //the result of the method is returned
}



double Metric::metricOutput()
{
	double metBMI = getWeight() / (getHeight() * getHeight()); // metBMI is set to be equal to the result of the calculation that follows after it
	setOutput(metBMI); // setoutput's value is set to be equal to the value of metBMI
	return metBMI; // the result is returned
}