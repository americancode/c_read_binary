/*
 * date.h
 *
 *  Created on: Sep 12, 2017
 *   Author: Nathaniel Churchill
 */

#ifndef DATE_H_
#define DATE_H_

typedef struct _date {
	int year;
	int month;
	int day;
} Date;

Date *allocDate(int month, int day, int year);

#endif /* DATE_H_ */
