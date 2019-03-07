import vector2
lint=[1,2,3,4]
old_vector = vector2.VectorOfDouble()
old_vector.extend(arg for arg in lint)
new_vector=vector2.add1(old_vector)
print list(old_vector)
print list(new_vector)
