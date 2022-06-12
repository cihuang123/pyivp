#include "../lib_geometry/XYPoint.h"

#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_XYPoint(py::module &m) {
    
    py::class_<XYPoint>(m, "XYPoint")
    .def(py::init())
    .def(py::init<double, double>())
    .def("set_vertex", &XYPoint::set_vertex)
    .def("set_vx", &XYPoint::set_vx)
    .def("set_vy", &XYPoint::set_vy)
    .def("set_vz", &XYPoint::set_vz)
    .def("get_spec", &XYPoint::get_spec);
}
