# Makefile for lib_geometry (Ten Short C++ Labs)                                                          
# wget http://oceanai.mit.edu/cpplabs/lib_geometry/Makefile                                               

libgeometry.a : Vertex.cpp Vertex.h VertexSimple.cpp VertexSimple.h SegList.cpp SegList.h
	g++ -c Vertex.cpp VertexSimple.cpp SegList.cpp
	ar cr libgeometry.a Vertex.o VertexSimple.o SegList.o

clean:
	rm -f Vertex.o VertexSimple.o SegList.o libgeometry.a *~

install:
	cp libgeometry.a /usr/local/lib/

uninstall:
	rm /usr/local/lib/libgeometry.a
