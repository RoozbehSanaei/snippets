# file: runme.py

# This file illustrates the proxy class C++ interface generated
# by SWIG.

import example

# ----- Object creation -----

print "Creating some objects:"
c = example.Circle(10)
print "    Created circle", c
s = example.Square(10)
print "    Created square", s

# ----- Access a static member -----

print "\nA total of", example.cvar.Shape_nshapes, "shapes were created"

# ----- Member data access -----

# Set the location of the object

c.x = 20
c.y = 30

s.x = -10
s.y = 5

print "\nHere is their current position:"
print "    Circle = (%f, %f)" % (c.x, c.y)
print "    Square = (%f, %f)" % (s.x, s.y)

# ----- Call some methods -----

print "\nHere are some properties of the shapes:"
for o in [c, s]:
    print "   ", o
    print "        area      = ", o.area()
    print "        perimeter = ", o.perimeter()
# prevent o from holding a reference to the last object looked at
o = None

print "\ntry Nested Structures:"

c.embedded.int_var = 1
c.embedded.long_var = 100
c.embedded.float_var = 100.2
c.complex_embedded.embedded.int_var=3;
c.complex_embedded.string = "hello"

print "\ntry Use of pointers :"
A = s.make_array()
c.complex_embedded.ints = A;

print "integer variable : ", c.embedded.int_var
print "long variable : ",c.embedded.long_var
print "float variable : ",c.embedded.float_var 
print "embedded  integer variable : ",c.complex_embedded.embedded.int_var
print "embedded string variable : ",c.complex_embedded.string

print "\nGuess I'll clean up now"

# Note: this invokes the virtual destructor
del c
del s

print example.cvar.Shape_nshapes, "shapes remain"

