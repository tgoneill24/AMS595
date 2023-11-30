OBJECTS = HW2main.o approximations.o pi_approx.o
CXX = g++
CXXflags = -std=c++17

HW2main : $(OBJECTS)
	$(CXX) $(OBJECTS) -o HW2main

HW2main.o : HW2main.cpp
	@$(CXX) $(CXXflags) HW2main.cpp -c

approximations.o : approximations.cpp
	@$(CXX) $(CXXflags) approximations.cpp -c

pi_approx.o : pi_approx.cpp
	@$(CXX) $(CXXflags) pi_approx.cpp -c

clean : 
	@echo "Removing all object files and executables..."
	rm *.o HW2main