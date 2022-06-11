## Makefile for pyivp                                                               

all: build-ivp tests

build-ivp:
	make -C src
	make -C src_unit_tests 

tests:
	cd src_unit_tests; ./alltest.sh

clean:
	make -C src clean
	make -C  src_unit_tests clean
