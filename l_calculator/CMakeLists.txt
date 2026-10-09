add_library(l_calculator temp_calc.cpp)

#target library to the .exe
target_include_directories(l_calculator
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
	)

#calc doesnt need other library