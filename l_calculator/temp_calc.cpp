#include "calc.h" //current header needs to be the same as the .h filename

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//TempCalc is the class from calc.h 
namespace calc{	
//namespace needs to be the same since calc.h uses calc
//everything needs to have const too
//basically everything follows
	double TempCalc::CtoK(double c) const{
	  return c + 273.15; //celcius to kelvin = 0 + 273.15
	  
	}
	double TempCalc::FtoC(double f) const{
	  return (f - 32) * 5/9;
	  
	}	
	double TempCalc::CtoF(double c) const{
	  return (c * 9/5) + 32;
	
	}
	
	
	
}
