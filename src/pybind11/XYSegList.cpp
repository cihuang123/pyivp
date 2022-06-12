#include "../lib_geometry/XYSegList.h"

#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_XYSegList(py::module &m) {
    
    py::class_<XYSegList>(m, "XYSegList")
    .def(py::init())
    .def("add_vertex", 
            static_cast<void (XYSegList::*)(double, double, double, std::string)>(&XYSegList::add_vertex),
            "add vertex with x, y")
    .def("add_vertex", 
            static_cast<void (XYSegList::*)(const XYPoint&, std::string)>(&XYSegList::add_vertex),
            "add vertex with a vertex")
    //.def("setRandom", &XYSegList::setRandom)
    //.def("get_spec", 
    //        static_cast<std::string (XYSegList::*)(std::string)>(&XYSegList::get_spec),
    //        "spec with string")
    ;
}
