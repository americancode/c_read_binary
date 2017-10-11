/*
 * company.h
 *
 *  Created on: Sep 11, 2017
 *  Author: Nathaniel Churchill
 *  Struct for a company which has 10 departments allocated for it
 */

#ifndef COMPANY_H_
#define COMPANY_H_

#include "dept.h"

typedef struct _company {
    int noDepts;
    Dept *departments[10];
} Comp;

Comp *allocComp();
void addDepartment(Comp *company, Dept *department);
Dept *findDepartment(Comp *company, char *deptCode);

#endif /* COMPANY_H_ */
