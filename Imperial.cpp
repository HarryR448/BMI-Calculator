#include "stdafx.h"
#include "Imperial.h"


Imperial::Imperial(void)      //constructor
{
}


Imperial::~Imperial(void)              //Deconstructor
{
}

double Imperial::heightInput() //imperial height input method
{
	double imperialheight;  // Variable that stores the height
	bool imphloop = true;   // loop variable declared

	do{               // This part is for inputting your height but also includes verification

	std::cout << "Please input your height in inches"<<std::endl;
	std::cin >> imperialheight;                       // For inputting your height to be stored in the variable

	if (imperialheight <= 250 && imperialheight >= 50 )      // if the inputted number is less than 250 but above 50 then the loop will be set to false and the program will continue
		{
		imphloop = false;
	    }

	if (imperialheight >= 100 ||imperialheight <= 49)     // if the height ia greater than or equal to 100 or less than or equal to 49 then the program will output the following
	{
		char impheightcontinue;    // variable than stores a letter which is the useres choice and used in choosing to disable the loop or loop back

		std::cout<<"error improbable height detected"<<std::endl;	       // tells user tahtthier input is abnormal
		std::cout<<"Do you wish to continue with a height of "<<imperialheight<<std::endl;
		std::cout<<"If yes press Y if no press N"<<std::endl;
		std::cin>>impheightcontinue;            // user inputs if they want to continue or not
		
		if (impheightcontinue == 'y' || impheightcontinue =='Y')      // if yes the loop is diabled and they can continue
		{
		imphloop = false;
		}

		if (impheightcontinue == 'n' || impheightcontinue =='N')  // if no then after a couple of seconds the loop will activate and ask them for thier height input again
		{
		
		system ("pause");
		}
	}
	}while (imphloop == true); //as long as the bool variable of this variable is true the program will keep looping in this do while

	setHeight(imperialheight);  // setheight is set to have its value equal to imperial height
    return imperialheight;  // the result of the method is returned
}


double Imperial::weightInput() // imperial weigth input method
{
	double imperialweight;  //variable that stores the weight
	bool impwloop = true;  //loop variable

	do{

	std::cout<<"Please input your weight in pounds"<<std::endl;
	std::cin >> imperialweight;     // sets a value for the weight variable
		
	if (imperialweight <= 250 && imperialweight >= 50)      // if below or equal 250 and above or equal 50 then the loop is disabled and the program continues
		{
		impwloop = false;
		}

		if (imperialweight >= 250 ||imperialweight <= 49)   //if above or equal 250 or below or equal 49 then validation activates 
	{
		char impweightcontinue;     // variables that stores a letter which is users choice in continuing or not
		std::cout<<"error improbable weight detected aborting"<<std::endl;	  // tells user of abnormal input 
		std::cout<<"Do you wish to continue with a weight of "<<imperialweight<<std::endl;
		std::cout<<"If yes press Y if no press N"<<std::endl;
		std::cin>>impweightcontinue;  //allows user to input thier choice of continuing or not

		if (impweightcontinue == 'y' || impweightcontinue =='Y') //if y is entered the loop is disabled and the program continues
		{
		impwloop = false;
		}

		if (impweightcontinue == 'n' || impweightcontinue =='N')  //if n is entered the program loops back to the start of this method
		{
		
		system ("pause");
		}
		}
	} while (impwloop == true); // do while loop that loops the program as long as its true and only goes false upon correct input
		
	    setWeight(imperialweight); // set weights value is set to be equa; to imperialweights value
	   return imperialweight;  //result is returned
	
}


double Imperial::imperialOutput()
{
	double impbmi = (getWeight() * 703) / (getHeight() * getHeight());   // imp bmi variable is set to store the value of the calculation which uses inputted values
	setOutput(impbmi); // setoutputs value is set to be equal to impbmis value which was just retrieved from the calculation
	return impbmi; //the result is returned
}