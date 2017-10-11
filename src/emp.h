/*
 * emp.h
 *
 * Created on: Sep 11, 2017
 * Author: Nathaniel Churchill
 */

#ifndef EMP_H_
#define EMP_H_

#include "date.h"

typedef struct _emp {
	char *empId;
	char *firstName;
	char *lastName;
	char *employeeIndicator;
	char *deptCode;
	Date *hireDate;
	float salary;
	char training;
	int vacationDays;
} Emp;

Emp *allocEmp(char *empId, char *employeeIndicator, char *deptCode, char *firstName, char *lastName, float salary, Date *hireDate, int vacationDays, char training);

#endif /* EMP_H_ */
