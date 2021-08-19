
#include<stdio.h>
#include<stdlib.h>


#define MAXDATA 5
#define LEN 20

struct nameData{

	char fname[LEN];
	char mname[LEN];
	char lname[LEN];
};

struct memberData {
	 int soc_sec_num;
	struct nameData name;
};
void print_structure_addr( const struct memberData * ptr );
void print_structure_value( struct memberData data);

int main(int argc, char *argv[] )
{
	struct memberData members[5] = {
		
		{234,{"1_fname", .lname="1_lname"} },

		{232,{"2_fname","2_mname", "2_lname"} },

		{243243,{"3_fname",  .lname="3_lname"} },

		{2343,{"4_fname", "4_mname", "4_lname"} },

		{234,{"5_fname", "5_mname", "5_lname"} }
	};

	printf("By address of the array:\n");
	print_structure_addr(members);

	printf("By value of the array members:\n");
	for(int i = 0; i<5; i++)
		print_structure_value( members[i] );

	return 0;


}


//print structures when the local copy of it is made 
void print_structure_value(struct memberData data)
{		
	if( data.name.mname[0] == '\0'  ) //no middle name 
		printf("%s, %s --- %d\n", data.name.lname, data.name.fname, data.soc_sec_num);
	else	
		printf("%s, %s %c.--- %d\n", data.name.lname, data.name.fname, data.name.mname[0], data.soc_sec_num);

}


//print structure when addres of it is passed 
void print_structure_addr( const struct memberData * ptr )
{
	int i = 0;

	while(i<5)
	{
		
		if( ptr->name.mname[0] == '\0'  ) //no middle name 
			printf("%s, %s --- %d\n", ptr->name.lname, ptr->name.fname, ptr->soc_sec_num);
		else	
			printf("%s, %s %c.--- %d\n", ptr->name.lname, ptr->name.fname, ptr->name.mname[0], ptr->soc_sec_num);

		ptr++;

		i++;
	}

}
	
