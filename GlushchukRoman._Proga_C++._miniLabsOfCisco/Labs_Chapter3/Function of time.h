#pragma once

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int);
int monthLength(int year, int month); 
int dayOfYear(Date);
int daysBetween(Date, Date);
Date today(void);