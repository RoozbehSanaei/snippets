/* File : example.h */

class Shape {
public:
  Shape() {
    nshapes++;
  }
  virtual ~Shape() {
    nshapes--;
  }
  void    move(double dx, double dy);
  virtual double area() = 0;
  virtual double perimeter() = 0;
  static  int nshapes;
};

struct product {
  int weight;
  double price;
} ;

class Circle : public Shape {
private:
  double radius;
  product myproduct;
public:
  Circle(double r) : radius(r) { }
  virtual double area();
  virtual double perimeter();
};

class Square : public Shape {
private:
  double width;
public:
  Square(double w) : width(w) { }
  virtual double area();
  virtual double perimeter();
};
