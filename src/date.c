/*
 * date.c
 *
 *  Created on: Sep 12, 2017
 *  Author: Nathaniel Churchill
 */


#include <stdlib.h>
#include "date.h"

/*
* create a Date
* month : the month
* day : the day
* year : the year
* returns : Date
*
*/
Date *allocDate(int month, int day, int year) {
	Date *date = malloc(sizeof(Date));
	date->month = month;
	date->day = day;
	date->year = year;
	return date;
}
