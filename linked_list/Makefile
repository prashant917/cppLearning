CXX = g++
CXXFLAGS = -Wall -g

main: main.o List.o
	$(CXX) $(CXXFLAGS) -o main main.o List.o

main.o: main.cpp List.h
	$(CXX) $(CXXFLAGS) -c main.cpp

List.o: List.h

clean:
	rm *.o

tidy:
	rm *.doc
