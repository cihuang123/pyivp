# Makefile for Lab 05 (Ten short C++ Labs)                                                                
# wget http://oceanai.mit.edu/cpplabs/lab05/Makefile                                                      

all: rand_vertices rand_vertices_file rand_vertices_class rand_seglist \
	rand_vertices_sleep rand_vertices_seed

rand_vertices: rand_vertices.cpp
	g++ -o rand_vertices  rand_vertices.cpp

rand_vertices_file: rand_vertices_file.cpp
	g++ -o rand_vertices_file  rand_vertices_file.cpp

rand_vertices_class: ../lib_geometry/libgeometry.a rand_vertices_class.cpp
	g++ -I../lib_geometry -L../lib_geometry -lgeometry -o rand_vertices_class  \
        rand_vertices_class.cpp

rand_seglist: ../lib_geometry/libgeometry.a rand_seglist.cpp
	g++ -I../lib_geometry -L../lib_geometry -lgeometry -o rand_seglist rand_seglist.cpp

rand_vertices_sleep: rand_vertices_sleep.cpp
	g++ -o rand_vertices_sleep  rand_vertices_sleep.cpp

rand_vertices_seed: rand_vertices_seed.cpp
	g++ -o rand_vertices_seed  rand_vertices_seed.cpp

clean:
	rm -f rand_vertices rand_vertices_file rand_vertices_class rand_seglist 
	rm -f rand_vertices_sleep rand_vertices_seed *~


