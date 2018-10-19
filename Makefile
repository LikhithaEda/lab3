CXX = g++
CXXFLAGS = -Wall -g
OBJECTS = MyDynArray.o MyDynArray_user.o

all: MyDynArray_user

MyDynArray_user: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o MyDynArray_user $(OBJECTS)

MyDynArray.o: MyDynArray.cc
	$(CXX) $(CXXFLAGS) -c MyDynArray.cc

MyDynArray_user.o: MyDynArray_user.cc
	$(CXX) $(CXXFLAGS) -c MyDynArray_user.cc

clean:
	rm *.o