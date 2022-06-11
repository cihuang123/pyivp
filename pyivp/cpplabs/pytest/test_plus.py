import pyivp

print(pyivp.__doc__)

result = pyivp.python_test_plus(1, 2)
print("Python result x plus y is: ", result)
assert result == 3
