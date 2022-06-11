#include "../lib_geometry/SegList.h"

#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_SegList(py::module &m) {
    
    py::class_<SegList>(m, "SegList")
    .def(py::init())
    //.def("setRandom", &SegList::setRandom)
    .def("getSpec", &SegList::getSpec);
}
