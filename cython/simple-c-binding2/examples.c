#include <stdio.h>


#include "examples.h"

void hello(const char *name) {
    char string1[] = "I";
    char string2[] = "say";
    char string3[] = "hello";

    printf("%s - %s - %s - %s\n", string1,string2,string3,name);
}