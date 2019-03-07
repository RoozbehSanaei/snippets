import test_struct as ts
cs = ts.alloc_complex_struct(1)
cs.string = "Hello"
cs.embedded.int_var = 9
cs.embedded.long_var = 10
cs.embedded.float_var = 11.23
ts.print_complex_struct(cs)
#ts.free_complex_struct(cs)