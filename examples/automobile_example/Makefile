all: build-auto tests

build-auto:
	make -C cpp
	make -C cpp/tests
	make -C pybind11

tests:
	cd cpp/tests/bin/; ./test_cpp
	python3 pytest/test.py

clean:
	rm -rf cpp/build
	rm -rf cpp/tests/build
	rm -rf pybind11/build
