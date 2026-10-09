cmake_minimum_required(VERSION 4.4.4)
project(Temp_calculator VERSION 1.0)

#the execeuteable for the program
add_executable(TempCalc_app main.cpp)

#libraries linking (subdirectory || starts with l_{library name} to make it easier)
add_subdirectory(l_calculator)
add_subdirectory(l_display)

#private because it doesn't need stuff i dont know really
target_link_libraries(TempCalc_app
	PRIVATE
	#private cus why not, and display is only for this only
			l_display
			l_calculator
)

