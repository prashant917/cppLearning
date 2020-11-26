CXX = g++
CXXFLAGS = -Wall -g

main: main.o CopyConstructor.o
	$(CXX) $(CXXFLAGS) -o main main.o CopyConstructor.o

main.o: main.cpp CopyConstructor.h
	$(CXX) $(CXXFLAGS) -c main.cpp

CopyConstructor.o: CopyConstructor.h

clean:
	rm *.o
