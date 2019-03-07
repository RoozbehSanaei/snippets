typedef struct { } obj_t;

const double *get_data(const obj_t *obj, int *data_len) {
  (void)obj;
  static double arr[] = {1,2,3,4,5};
  *data_len = sizeof(arr)/sizeof(*arr);
  return arr;
}