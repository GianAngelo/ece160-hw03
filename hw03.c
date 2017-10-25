#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
		printf("%s %s\n", s.first_name, s.last_name);
		break;
	case MAJOR_AND_NAME: 
		printf("%s %s %s\n", s.major, s.first_name, s.last_name);
		break;
	case YEAR_AND_NAME:
		printf("%d %s %s\n", s.year, s.first_name, s.last_name);
		break;
	// TODO: handle other cases
  }
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/

int main(int argc, char *argv[]) {
	for (int t=2;t < argc; t+=4) {
		
	Student Toby;
	Toby.first_name = argv[t] ;
 	Toby.last_name = argv[t+1] ;
	Toby.major = argv[t+2] ; 
	Toby.year = atoi (argv[t+3]) ;
	
	
	print_student(atoi(argv[1]),Toby) ;
}
  return 0;
}