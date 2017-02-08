#include <iostream>
#include <cstdio>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NO 3
using namespace std;
  struct employee {
    char fName[15];
    char lName[15];
    unsigned int age;
    char gender;
    bool married;
    char Pp[5];
  };

    typedef struct employee Employee;
    void fillEmployeeDetails(Employee * const employeePtr);
    void printEmployeeDetails(const Employee * const employeePtr);

  int main(){
    /*printf("%s\n","Please enter the number of employees:");
    scanf("%d", &no);
    */
    Employee Employees[NO];
    fillEmployeeDetails(Employees);
    printEmployeeDetails(Employees);
    //printf("%s",&(Employees[0].Pp));
    return 0;
  }

    void fillEmployeeDetails(Employee * const employeePtr){
        char marriageStatus;
        int i;
      for(i = 0; i < NO; ++i){
            marriageStatus = '\0';
        system("CLS");
        printf("No. of employees: %d\n\n", NO);
        printf("Employee No. %d:\n\n", i+1);
        printf("First name(max. 14 characters): ");
        scanf("%14s", employeePtr[i].fName);
        printf("Last name(max. 14 characters): ");
        scanf("%14s", employeePtr[i].lName);
        printf("Age: ");
        scanf("%u", &(employeePtr[i].age));
        while(employeePtr[i].age > 150 || employeePtr[i].age < 0){
            printf("Age: ");
            scanf("%u", &(employeePtr[i].age));
        }
        while(employeePtr[i].gender != 'M' && employeePtr[i].gender != 'F' ){
            printf("Gender(M/F): ");
            scanf(" %c", &(employeePtr[i].gender));
            employeePtr[i].gender = toupper(employeePtr[i].gender);
        }
        while(marriageStatus != 'Y' && marriageStatus != 'N'){
            printf("Married?(Y/N): ");
            scanf(" %c", &marriageStatus);
            marriageStatus = toupper(marriageStatus);
            if(marriageStatus == 'Y' && employeePtr[i].gender == 'F'){
                employeePtr[i].married = true;
                memcpy(employeePtr[i].Pp, "Mrs.", 4);
                }
            else{
                if(marriageStatus != 'Y' && employeePtr[i].gender == 'F'){
                 memcpy(employeePtr[i].Pp, "Miss", 4);
                    }
                else{
                  memcpy(employeePtr[i].Pp, "Mr.", 3);
                  break;
                    }
                }

            }
        /*printf("Hourly salary: ");
        scanf("%f", employeePtr[i].hourlySalary);
        *///scanf("%14s \n %14s \n %d \n %c \n %3s \n %f", (*employeePtr).fName, (*employeePtr).lName, &employeePtr->age, &(*employeePtr).gender, marriageStatus, &(*employeePtr).hourlySalary);
      }
    }
    void printEmployeeDetails(const Employee * const employeePtr){
        system("CLS");
        for(int i = 0; i < NO; ++i){
          printf("Employee No.: %d\n\nName: %s %s %s\nAge: %u\nGender: %c\n\n\n",i+1,employeePtr[i].Pp,employeePtr[i].fName,employeePtr[i].lName,employeePtr[i].age,employeePtr[i].gender);
        }
    }

