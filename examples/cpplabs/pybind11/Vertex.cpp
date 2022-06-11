#include "../lib_geometry/Vertex.h"

#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_Vertex(py::module &m) {
    
    py::class_<Vertex>(m, "Vertex")
    .def(py::init())
    //.def("setRandom", &Vertex::setRandom)
    .def("getSpec", &Vertex::getSpec);
}
