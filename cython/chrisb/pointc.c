typedef struct  {
    int x;
    int y;
} Point;

 Point make_and_send_point(int x, int y) {
     Point p = {x, y};
    return p;
}