#include <stdio.h>
namespace shapes {
    class Rectangle {
    public:
        int x0, y0, x1, y1;
        Rectangle(int x0, int y0, int x1, int y1);
        ~Rectangle();
        int getLength() const;
        int getHeight() const;
        int getArea() const;
        void move(int dx, int dy);
    };
    void hello(Rectangle rect);
}



