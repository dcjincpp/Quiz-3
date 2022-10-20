#include <stdio.h> 

#include <stddef.h> 

typedef struct { //the size thats allocated for struct is worst case scenario so all types of data will be 8 bytes because of double, called padding

    long number; 

    char *name; 

    char *phone; 

    double salary; 

} Employee, *PtrToEmployee; //defined structure as Employee and *PtrToEmployee

typedef const Employee *PtrToConstEmployee; //constant pointer type