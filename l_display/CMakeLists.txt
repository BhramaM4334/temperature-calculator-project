add_library(l_display hud.cpp)

#target
target_include_directories(l_display
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
	
#also include l_calc's  library since displaying needs that i guess
target_link_libraries(l_display
	PUBLIC
		l_calculator
)