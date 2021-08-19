#define SLEN 200
#define LIM 5

//take input from stdio
char * s_gets(char *st, int n);

//option a - print input string 
void a_printStrings(int entries, const char stringArray[entries][SLEN] );

//option b - print ASCII collating sequence 
void b_printASCII(int entries, char stringArray[entries][SLEN] );

//option c - print in order of increasing string length
void c_sortTotalLength(int entries, const char stringArray[entries][SLEN] );

//option d - print in order of increasing length of first word in string 
void d_sortFirstWord(int entries, const char stringArray[entries][SLEN] );

//print function choices and get one 
char get_choice(void);

//get only the first character but skip the rest 
char get_first(void);

//naive sorting copied from geeksforgeeks  
void bubblesort(int arr[], int n);

//swap int to be used in sorting
void swap_int(int *xp, int *yp);

//swap char to be used in sorting
void swap_char(char **xp, char **yp);


//string length and pointer array naive sorting copied from geeksforgeeks  
void sortPtrLength(int lengthArray[], char *ptrArray[], int n);

