## Makefile for pyivp                                                               

all: build-ivp tests

build-ivp:
	make -C src
	make -C src_unit_tests 
	make -C src/pybind11 

tests:
	cd src_unit_tests; ./alltest.sh
	cd src/pytest; python3 test_pattern_block.py

clean:
	make -C src clean
	make -C  src_unit_tests clean
	make -C src/pybind11 clean
