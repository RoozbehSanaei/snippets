/* File : example.h */
#include <stdlib.h>
#include <vector>

typedef struct simple_struct {
	int int_var;
	long long_var;
	float float_var;
} simple_struct_t;
typedef struct tlv_base {
	int type;
	int length;
	unsigned char value[];
} tlv_base_t;
typedef struct tlv_type1 {
	tlv_base_t base;
	int stat;
	int info;
	long something;
} tlv_type1_t;
/* relatively complex C structure. */
typedef struct complex_struct {
	char string[10];           //SWIG considers this as null terminated string
	int ints[10];   //SWIG wont considers this as string
	simple_struct_t embedded;
	int pointer_array_count;
	simple_struct_t *pointer_array; //SWIG supports only accessing first element.
	tlv_base_t tlv;   //How do cast this to derived_struct_1 ?
} complex_struct_t;


class Shape {
public:
  Shape() {
    nshapes++;
  }
  virtual ~Shape() {
    nshapes--;
  }
  double  x, y;
  simple_struct_t embedded;
  complex_struct_t complex_embedded;
  void    move(double dx, double dy);
  virtual double area() = 0;
  virtual double perimeter() = 0;
  static  int nshapes;
};

class Circle : public Shape {
private:
  double radius;
public:
  Circle(double r) : radius(r) { }
  virtual double area();
  virtual double perimeter();
  virtual double sum_array(double* input_array, int length);
  virtual void get_rand_array(double* output_array, int length);
  virtual std::vector<double> get_rand_list(int length);
};

class Square : public Shape {
private:
  double width;
public:
  Square(double w) : width(w) { }
  virtual double area();
  virtual double perimeter();
  virtual int* make_array(); 
};