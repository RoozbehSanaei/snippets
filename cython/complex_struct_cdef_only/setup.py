from distutils.core import setup, Extension
from Cython.Build import cythonize

setup(ext_modules = cythonize(
      "my_prog.pyx",
      language="c"
     )
)