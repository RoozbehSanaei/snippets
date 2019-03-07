/* test.c */
#include <stdlib.h>
#include <stdio.h>
#include "test.h"
#include "string.h"

complex_struct_t *
alloc_complex_struct(int array_count)
{
	complex_struct_t *result;
	size_t size;
	result = (complex_struct_t *)malloc(sizeof(complex_struct_t) + sizeof(tlv_type1_t));
	if (result == NULL){
		return NULL;
	}
	result->tlv.type = 1;
	result->tlv.length = sizeof(tlv_type1_t);
	size = sizeof(simple_struct_t) * array_count;
	result->pointer_array = (simple_struct_t *)malloc(size);
	if (result->pointer_array == NULL) {
		free(result);
		return NULL;
	}
	memset(result->pointer_array, 0, size);
	result->pointer_array_count = array_count;
	return result;
}
void
free_complex_struct(complex_struct_t *cs)
{
	free(cs->pointer_array);
	free(cs);
}
static inline void
print_simple_struct(simple_struct_t *ss)
{
	printf("int %d long %ld float %f\n", ss->int_var, ss->long_var, ss->float_var);
}
void
print_complex_struct(complex_struct_t *cs)
{
	int i;
	printf("String = %s\n", cs->string);
	printf("Embedded : ");
	print_simple_struct(&cs->embedded);
	printf("External : \n");
	for (i=0; i<cs->pointer_array_count; i++) {
		printf("%d) ", i + 1);
		print_simple_struct(&cs->pointer_array[i]);
	}
}