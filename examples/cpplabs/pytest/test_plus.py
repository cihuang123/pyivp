import cpplabs

print(cpplabs.__doc__)

result = cpplabs.python_test_plus(1, 2)
print("Python result x plus y is: ", result)
assert result == 3

py_vertex_simple = cpplabs.VertexSimple()
py_vertex_simple.setRandom(0, 10)
print(py_vertex_simple.getSpec())
