#include <iostream>

using namespace std;

int Go1(void){
	unsigned short **grades;
	unsigned short amount_courses;
	do {
		cout << "Number of courses taken by the student: ";
		cin >> amount_courses;
	} while (amount_courses < 1);
	grades = new unsigned short*[amount_courses];

	unsigned short *amount_grades_in_course = new unsigned short[amount_courses];	
	for(int i = 0; i < amount_courses; i++){
		do{
			printf(" Number of grades received during course number %d: ", i + 1);
			cin >> *(amount_grades_in_course + i);			
		} while (*(amount_grades_in_course + i) < 1);
		*(grades + i) = new unsigned short[*(amount_grades_in_course + i)];
		for (int j = 0; j < *(amount_grades_in_course + i); j++)
			do {
				printf("  G%d, %d: ", i + 1, j + 1);
				cin >> *(*(grades + i) + j);				
			} while ( ! ((*(*(grades + i) + j) > 0) && (*(*(grades + i) + j) < 6)));
	}
	cout << "\n\n";

	float final_gr, ov_final_gr = 0;
	for (int i = 0; i < amount_courses; i++){		
		final_gr = 0;
		for(int j = 0; j < *(amount_grades_in_course + i); j++)
			final_gr += *(*(grades + i) + j);

		printf("Course %d: final %.2f, grades:", i, final_gr / *(amount_grades_in_course + i));
		for(int j = 0; j < *(amount_grades_in_course + i); j++)
			cout <<" "<< *(*(grades + i) + j);
		ov_final_gr += final_gr / *(amount_grades_in_course + i);
		cout << endl;
	}
	printf("Overall final %.2f \n\n", ov_final_gr / amount_courses);
	
	for(int i = 0; i < amount_courses; i++)
		delete[] *(grades + i);

	delete[] grades;
	delete[] amount_grades_in_course; 

	return 0;
} 