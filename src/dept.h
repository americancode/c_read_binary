/*
 * dept.h
 *
 * Created on: Sep 8, 2017
 * Author: Nathaniel Churchill
 */

#ifndef DEPT_H_
#define DEPT_H_

#include "emp.h"

typedef struct _dept {
	char *deptName;
	char *deptCode;
	char *mgrId;

	Emp *emps[100];
	int noEmps;

	Emp *manager;

} Dept;

Dept *allocDept(char *deptName, char *deptCode, char *mgrId);
void addEmployee(Dept * dept, Emp *emp);
Emp * getManager(Dept *dept);
int getTotalVacationDays(Dept *dept);

#endif
