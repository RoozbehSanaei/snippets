import test_struct as ts
cs = ts.alloc_complex_struct(5)
cs.string = 'Hello'
print 'Pointer array count ', cs.pointer_array_count
for i in range(cs.pointer_array_count):
   simple_struct = cs.get_array_element(i)
   simple_struct.int_var = i * 10
   simple_struct.long_var = i * 20
   simple_struct.float_var = i * 3.3
ts.print_complex_struct(cs)                                                                                                                                              
tlv = ts.cast_to_tlv_type1(cs.tlv)
print tlv.stat, tlv.info, tlv.something