/* test.h */

/* a simple structure - no problem with SWIG */
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
	unsigned char bytes[10];   //SWIG wont considers this as string
	simple_struct_t embedded;
	int pointer_array_count;
	simple_struct_t *pointer_array; //SWIG supports only accessing first element.
	tlv_base_t tlv;   //How do cast this to derived_struct_1 ?
} complex_struct_t;
complex_struct_t * alloc_complex_struct(int array_count);
void free_complex_struct(complex_struct_t *cs);
void print_complex_struct(complex_struct_t *cs);