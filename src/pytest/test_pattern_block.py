import pyivp

print("== Test package and local function. ==")
result = pyivp.python_test_plus(1, 2)
print("Python result x plus y is: ", result)
assert result == 3

print("== Test XYPoint ==")
py_v1 = pyivp.XYPoint()
print(py_v1.get_spec(""))
py_v2 = pyivp.XYPoint(10, 15)
print(py_v2.get_spec(""))
