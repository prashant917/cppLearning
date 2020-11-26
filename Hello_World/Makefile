# Makefile
# ****************************

CXX = g++
CXXFLAG = -Wall -g

main: main.o Hello_world.o
	$(CXX) $(CXXFLAG) -o main main.o Hello_world.o

main.o: main.cpp Hello_world.h
	$(CXX) $(CXXFLAG) -c main.cpp

Hello_world.o: Hello_world.h

clean:
	rm *.o

tidy:
	rm *.doc
