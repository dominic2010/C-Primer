/*
 * 1.h
 *
 *  Created on: Jun 19, 2016
 *      Author: xiaoyao
 */

#ifndef CODE_YEAR_H_
#define CODE_YEAR_H_

class Year {
public :
	int Verify();
	Year(int year, int month, int day );
private:
	int year;
	int month;
	int day;
	int MonthLib[12];
	bool LeapYear();

};



#endif /* CODE_YEAR_H_ */
