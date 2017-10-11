/*
 * emp.c
 *
 *  Created on: Sep 11, 2017
 *  Author: Nathaniel Churchill
 */

#include <stdlib.h>
#include <string.h>
#include "emp.h"
#include "date.h"

/*
* allocate space for a Emp
*
* empId : the employee id
* empIndicator : the employee indicator
* deptCode : the department code
* firstName : the first name of the employee
* lastName : the last name of the employee
* salary : the salary of the employee
* hireDate : the date the employee was hireDate
* vacationDays : vacation days of employee
* training : a byte representing the training of the employee
* returns : Emp
*/
Emp *allocEmp(char *empId, char *employeeIndicator, char *deptCode, char *firstName, char *lastName, float salary,  Date *hireDate, int vacationDays, char training) {
	Emp *emp = malloc(sizeof(Emp));

	emp->empId = malloc(strlen(empId) + 1);
	strcpy(emp->empId, empId);

	emp->employeeIndicator = malloc(strlen(employeeIndicator) + 1);
	strcpy(emp->employeeIndicator, employeeIndicator);

	emp->deptCode = malloc(strlen(deptCode) + 1);
	strcpy(emp->deptCode, deptCode);

	emp->firstName = malloc(strlen(firstName) + 1);
	strcpy(emp->firstName, firstName);

	emp->lastName = malloc(strlen(lastName) + 1);
	strcpy(emp->lastName, lastName);

	emp->salary = salary;
	emp->hireDate = hireDate;
	emp->vacationDays = vacationDays;
	emp->training = training;

	return emp;
}
