CPP = g++ -pedantic -Wall -std=c++11 -O3
HEADERS = ../colors.hpp

.PHONY:	all
all:	test.out

%.out:	%.o $(HEADERS)
	$(CPP) -o $@ $<

%.o:	%.cpp $(HEADERS)
	$(CPP) -c -o $@ $<
