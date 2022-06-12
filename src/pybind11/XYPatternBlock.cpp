#include "../lib_geometry/XYPatternBlock.h"

#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_XYPatternBlock(py::module &m) {
    
    py::class_<XYPatternBlock>(m, "XYPatternBlock")
    .def(py::init())
    .def("distanceToClosestEntry", &XYPatternBlock::distanceToClosestEntry)
    .def("distanceToCrossAxis", &XYPatternBlock::distanceToCrossAxis)
    ;
}
