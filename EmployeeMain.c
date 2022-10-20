//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); //gives heads up to compiler, defines for whats coming up

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);

    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[]; //extern, defined somewhere else so dont allocate space for it here

    extern const int EmployeeTableEntries;      

 

    PtrToEmployee matchPtr;  //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); //pointer to employee

 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n"); 


//
     
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134"); //pointer to employee

 

    //Example found 

    if (matchPtr != NULL) 

        printf("Employee phone 909-555-2134 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee phone is NOT found in the record\n"); 
//

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-714-2134"); //pointer to employee
 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee phone 909-555-2134 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee phone is NOT found in the record\n");

//
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50); //pointer to employee
 

    //Example found 

    if (matchPtr != NULL) 

        printf("Employee salary 4.50 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee salary is NOT found in the record\n"); 

//
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 10.21); //pointer to employee
 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee salary 10.21 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee salary is NOT found in the record\n"); 



    
//


    return EXIT_SUCCESS; 

} 