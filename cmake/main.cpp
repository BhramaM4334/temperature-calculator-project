//lib headers
#include "calc.h"
#include "hud_display.h"

//c++ headers
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <string>


//
using namespace std;
//lets use the base as: celcius

int main(){
	
//initialize	
calc::TempCalc calculate;
data_save::Memory_calc memory;
//do
int repetitions = 0;
while(true){
repetitions++;
system("clear"); //clears linux terminal
	
	double celcius=0;
	char choice;	
	
	display::display_header();
		
	display::display_choice();
	cin>>celcius;
	display::display_calc(celcius);
	
	display::display_memory();
	
	cout<<"do you want to end this loop of thing?????????? (1 for true, other than that just ball with it)\n\n";
		cin>>choice;
		if(choice == '1') break;
		
//	system("pause");
	cout<<"executed "<<repetitions<<" times"<<endl<<endl;

//linux doesnt have the system thing nkjiegrfa

}

}
