// BmiCalculatorsecond.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"   //allowing this cpp file to acess multiple other header files
#include "Input.h"    
#include "Metric.h"
#include "Imperial.h"
#include "Help.h"
#include <string>

using namespace std;

int main()
{
	string InputType; //initializing multiple classes as objects
	Imperial ImpObj;
	Metric MetObj;
	Input InputObj;
	Help HelpObj;
	double bmiresult = 0;
	char userchoice;

	InputType = InputObj.typeInput(); //assigning a method from the input class to a string
	

	if (InputType == "i" || InputType == "I") // if i is entered then imperial object's methods heightInput and weightInput are initialized
	{
		ImpObj.heightInput();  // initializing a method from within the object
		ImpObj.weightInput();

		cout<<"Your height is "<<ImpObj.getHeight() <<endl;  // outputting the height and weight to check the input against the output
		cout<<"Your weight is "<<ImpObj.getWeight() <<endl;
		cout<<"Your BMI is "<<ImpObj.imperialOutput() <<endl; // outputting BMI from within the object
		bmiresult = ImpObj.imperialOutput();         //making a variable equal to another variable for later convienience
	}
	
	if (InputType == "m" || InputType =="M")     // if m is entered then the metric object's methods heightInput and weightInput are initialized
	{
	    MetObj.heightInput();
		MetObj.weightInput();
		cout<<"Your height is "<<MetObj.getHeight() <<endl;
		cout<<"Your weight is "<<MetObj.getWeight() <<endl;
		cout<<"your BMI is "<<MetObj.metricOutput() <<endl; 
		bmiresult = MetObj.metricOutput();
	}

	if (InputType == "h" || InputType == "H")      //if h is entered then the help object's method helpOutput will be initialized
	{
		HelpObj.helpOutput(); //initializing the help classes only method
		main(); //calling it back to te start of the main
	}

	if (bmiresult < 18.5)    // This is where the imperial and metric BMI result is assigned too as it allows you to use either's values for these if statements
	{                        // Makes it so that if the BMI result from either metric or imperial is below 18.5 then the following couts will be outputted
		cout<<"You are currently underweight"<<endl;
		cout<<"Seeking help is advised"<<endl;
	}
	
	if (bmiresult >= 18.5 && bmiresult <= 24.9)
	{                     //makes it so that if the BMI from either metric or imperial is within the number range then the following couts will be outputted
		cout<<"You are currently Normal"<<endl;
		cout<<"You are perfectly healthy"<<endl;
	}

	if (bmiresult >= 25 && bmiresult <= 29.9)
	{                     //makes it so that if the BMI from either metric or imperial is within the number range then the following couts will be outputted
		cout<<"You are currently overweight"<<endl;
		cout<<"It is advised you start cutting down on fatty foods"<<endl;
	}

	if (bmiresult >= 30 && bmiresult <= 39.9)
	{                     //makes it so that if the BMI from either metric or imperial is within the number range then the following couts will be outputted
		cout<<"You are currently Obese"<<endl;
		cout<<"It is advised you exercise alot and cut down on your food"<<endl;
		cout<<"Those who are obese are at much higher risk of sickness including type 2 diabietes several sorts of cancer and stroke"<<endl;
	}

	if (bmiresult >= 40)
	{                     //makes it so that if the BMI from either metric or imperial is within the number range then the following couts will be outputted
		cout<<"You are currently Severely Obese"<<endl;
		cout<<"Those who are Severely Obese are at a masively greater risk of sickness including type 2 diabietes several sorts of cancer and stroke"<<endl;
	}

	cout<<"Would you like to restart the program? Press y to continue and n to exit"<<endl; // gives the user the choice to reset thier program or exit it
	cin>>userchoice;
	if (userchoice == 'y'||userchoice == 'Y')
	{
	main(); // sends user back to the start of the program
	}
	else if (userchoice == 'n'||userchoice =='N')
	{
	exit(0);  // closes the program
	}
	else
	{
		cout<<"Unidentified input restarting program"<<endl;
		system ("pause");
		exit(0);
	}
	
	system ("pause");
	return 0;
}

