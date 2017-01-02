#include "stdafx.h"
#include "Input.h"
#include "Help.h"


Input::Input()		//default constructor
{
	height = 0;
	weight = 0;
	output = 0;

}


Input::~Input()		//default deconstructor
{
}




double Input::getHeight()		//fetches the value stored in the private height variable
{      //used through inheritance
	return height;
}


double Input::setHeight(double p_height) //indirectly sets the value of the private variable height by assigneing height to equal the value of another variable 
{          // exists to be inherited
	height = p_height;        // variable equal to the value of another allows indirect change through this method
	return height;
;}


double Input::getWeight()   // indirectly outputs the value of the weight variable
{  //used through inheritance
	return weight;
}


double Input::setWeight(double p_weight)  // sets the weight indirectly
{  //used through inheritance
	weight = p_weight;
	return weight;
}


double Input::getOutput() // outputs the output indirectly
{  //used through inheritance
	return output;
}


double Input::setOutput(double p_output)  //changes the private output variables value indirectly
{   //used through inheritance
	output = p_output;
	return output;
}


char Input::typeInput()
{
	char initialinput ;  //stores initial input entered
	
	bool looping = true;  // loop variable

	

	do{
	std::cout<<"Imperial or metric?"<<std::endl;
	std::cout<<"For Imperial enter I for metric enter M and H for help info"<<std::endl;
	std::cin >>initialinput;  // variable that stores a letter and determines your choice
	 
		if (initialinput =='M' || initialinput == 'm')
		{
			looping = false;
		}

		if (initialinput =='i' || initialinput == 'I')
		{
			looping = false;
		}

		if (initialinput == 'h' || initialinput == 'H')
		{
			looping = false;
			
		}
		
}while (looping == true);  // as long as the loop is true the program will repeat itself and the loop only goes false is you enter either m,i or h as shown above

	
	
	return initialinput;

}
