CXXFLAGS = --std=c++17

mkindex: mkindex.o Index.o Location.o
	$(CXX) $(CXXFLAGS) mkindex.o Index.o Location.o -o mkindex

Index.o: Index.cpp Index.h Location.h
	$(CXX) $(CXXFLAGS) -c Index.cpp

Location.o: Location.cpp Location.h
	$(CXX) $(CXXFLAGS) -c Location.cpp

mkindex.o: mkindex.cpp Index.h Location.h
	$(CXX) $(CXXFLAGS) -c mkindex.cpp

clean:
	rm -f *.o *.gch a.out mkindex
