#include "hud_display.h"
#include "calc.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

namespace display{
	void display_header(){
		cout<<"===================================================================\n\n"
			  "Welcome to this simple idk i guess, version one of calculator LOL\n\n"
			  "===================================================================\n\n";
	}
	
	void display_choice(){
		cout<<"input the thing please just input it idk bro jiofewrekjeadgtrfvj: (oh yeah in celcius btw)\n"
			  "input (in celcius): ";
	}
	
	void display_calc(double c){
		
	calc::TempCalc calculate;		//i dont EVNE know how this works i guess (note 9 minutes before deadline)
	double f = calculate.CtoF(c);
	double k = calculate.CtoK(c);
	
		cout<<endl<<endl;
		cout<<"ok you inputted "<<c<<" degree celcius|| \n which makes it:			\n\n";
		cout<<"the converted celcius to fahrenheit: " << f << " degrees Fahrenheit	\n";
		cout<<"and converted celcius to kelvin	  : " << k << " degrees Kelvin		\n\n"
			  "added to memory (just kidding it hasnt been added yet lololol		\n\n\n\n";
		
	}
	
	void display_memory(){
		cout<<"===================================================================\n\n";
	}


}

