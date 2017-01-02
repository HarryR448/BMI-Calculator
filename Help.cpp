#include "stdafx.h"
#include "Help.h"


Help::Help(void)       //constructor
{
}


Help::~Help(void)     //Deconstructor
{
}

void Help::helpOutput()
{

std::cout<<"Welcome to the BMI calculator help section"<<std::endl;     //outputs information useful in telling the user what to do with the program and how to use it
std::cout<<"Choosing data type "<<std::endl; 
std::cout<<" To use metic enter M and to use imperial enter I when you return to command line"<<std::endl;  
std::cout<<""<<std::endl;
std::cout<<"What it does"<<std::endl;
std::cout<<"This program takes your height and weight and uses them to calculate"<<std::endl;
std::cout<<"the BMI using different calculations for metric and imperial."<<std::endl;
std::cout<<""<<std::endl;
std::cout<<"Mistake prevention"<<std::endl;
std::cout<<"This program has a set maximum and minimum height and weight to prevent improbabibilities with options to close the program or continue if detected"<<std::endl;
std::cout<<"Also if an incorrect input is entered the program will restrt and you will need to enter it correctly"<<std::endl; 
std::cout<<""<<std::endl;
std::cout<<"Warning BMI isnt completely accurate to determining ones health for example"<<std::endl;
std::cout<<"bodybuilders will have higher BMI from all the muscles but they are not unhealthy as its not fat therefore BMI does not work in some cases"<<std::endl;
std::cout<<""<<std::endl;

system ("pause");

}
