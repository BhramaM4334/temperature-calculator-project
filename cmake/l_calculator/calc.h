#ifndef TEMP_CALC_H
#define TEMP_CALC_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//namespace this to make it more easier to call in other library, like calc::CtoK(variable here)
namespace calc{
	class TempCalc{

		public:	
//const will make the output as return only and nothing more
			double CtoK(double c) const;
			double FtoC(double f) const;	
			double CtoF(double c) const;		
	};
}

namespace data_save{
 
 class Memory_calc{
 //put 3 of em actually idk why not? oh and convert them to celcius of course because why not lol
 //also no need to deeit temp_calc because yes
	private:
 		vector<double>memoryTemp; //
 		
 	public:
 		//memory insert
 		void insertMem(double inp){
 			memoryTemp.push_back(inp);
		 }
		//accessing memory 
		double accMem(int t) const;		//if return with value, use a data type
		//	return memoryTemp.at(t);
		
		
		size_t sizeMem(int t) const{	//size_t for sizings
			return memoryTemp.size();
		}
		
 };
		
	
}


#endif
