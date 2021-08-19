
#define LEN 20
#define CSIZE 4

struct name {
	char fname[LEN];
	char lname[LEN];
};

struct student {
	struct name studentName;
	float grade[3];	//for three scores
	float avg; //average of scores in grade
};

void get_student_data( struct student * );

char * s_gets(char * st, int n);

float class_average( const struct student array[], int n  );

void student_average( struct student * ptr );

void eatline(void);


