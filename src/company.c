/*
 * company.c
 *
 *  Created on: Sep 11, 2017
 *  Author: Nathaniel Churchill
 */

#include <stdlib.h>
#include <string.h>
#include "company.h"
#include "dept.h"


Comp *allocComp() {
    Comp *company = malloc(sizeof(Comp));
    company->noDepts = 0;
    return company;
}

/*
* adds a department to the given company.
*
* company : the company to add the department to
* department : the department to add to the company
*/
void addDepartment(Comp *company, Dept *department) {
    company->departments[company->noDepts++] = department;
}
/*
* Finds a department in a company
*
* company : the company to search
* returns : the department
*/
Dept *findDepartment(Comp *company, char *deptCode) {
    int counter = 0;

    for (counter = 0; counter < company->noDepts; counter++) {
        if (strcmp(deptCode, company->departments[counter]->deptCode) == 0){
            return company->departments[counter];
        }
    }

    return NULL;
}
