#include <iostream>
#include <pybind11/pybind11.h>

namespace py = pybind11;

//void init_VertexSimple(py::module &);

namespace ivp {

int cpp_test_plus(int x, int y){
    int result = x + y;
    std::cout << "C++ result x plus y is: " << result << '\n';
    return result;
}

PYBIND11_MODULE(pyivp, m) {
    // Optional docstring
    m.doc() = "Python IvP library";
 
    m.def("python_test_plus", &cpp_test_plus, "plus x and y");
    //init_VertexSimple(m);
}
}
