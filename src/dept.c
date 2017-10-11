/*
 * dept.c
 *
 * Created on: Sep 8, 2017
 * Author: Nathaniel Churchill
 */
#include <stdlib.h>
#include <string.h>
#include "dept.h"
/*
* creates a Dept in memory
*
* deptName : the department name
* deptCode : the department code
* mgrId : the manager id
* returns: Dept
*/
Dept *allocDept(char *deptName, char *deptCode, char *mgrId) {
	Dept *dept = malloc(sizeof(Dept));
	dept->deptName = malloc(strlen(deptName) + 1);
	strcpy(dept->deptName, deptName);
	dept->deptCode = malloc(strlen(deptCode) + 1);
	strcpy(dept->deptCode, deptCode);
	dept->mgrId = malloc(strlen(mgrId) +1);
	strcpy(dept->mgrId, mgrId);
	dept->noEmps = 0;
	dept->manager = NULL;
	return dept;
}

/*
* Adds an employee to the given department
*
* dept : the department to the employee to
* emp : the employee to add to eh department
*
*/
void addEmployee(Dept * dept, Emp *emp) {
	dept->emps[dept->noEmps++] = emp;
}

/*
* Gets a manager for a given department if not already set
*
* dept : the department to find the manager for
* returns : the manager
*/
Emp * getManager(Dept *dept) {
	if (dept->manager == NULL) {
		for (int i = 0; i < dept->noEmps; i++) {
			Emp *emp = dept->emps[i];
			if (strcmp(emp->empId, dept->mgrId) == 0) {
				dept->manager = emp;
				break;
			}
		}
	}

	return dept->manager;
}


int getTotalVacationDays(Dept *dept) {
	int totalVacationDays = 0;
	int counter = 0;
	for (counter = 0; counter < dept->noEmps; counter++) {
		totalVacationDays += dept->emps[counter]->vacationDays;
	}
	return totalVacationDays;
}
