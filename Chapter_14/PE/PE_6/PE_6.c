
#include<stdio.h>
#include<stdlib.h>

#define LEN 20
#define NPLAYERS 19

struct playerData{
	int pNum;
	char fname[LEN];
	char lname[LEN];
	float nAtBats;
	float nHits;
	int nWalks;
	int nRBIs;
	float battingAvg;
};

int main(int argc, char *argv[] )
{

	struct playerData players[NPLAYERS];

	//initialize all pNum values to 19
	for(int i=0; i<NPLAYERS; i++)
		players[i].pNum = 19;

	int index;
	float nAtBats_temp=0.0;
	float  nHits_temp=0.0;
	int  nWalks_temp=0;
	int nRBIs_temp=0;

	int data_count=0; //track number of data entries in the data file 

	FILE * fp;

	if( (fp=fopen("player_data", "r")) == NULL )
	{
		fprintf(stderr, "failed to opne the file");
		exit(EXIT_FAILURE);
	}


	
	//structure filling 
	while( fscanf(fp, "%d", &index)==1 )
	{
		data_count++;

		players[index].pNum = index;

		if( fscanf(fp,"%s %s %f %f %d %d",
				players[index].fname, players[index].lname,
				&nAtBats_temp, &nHits_temp,
				&nWalks_temp, &nRBIs_temp)	
				==6 )
		{
			players[index].nAtBats += nAtBats_temp;
			players[index].nHits += nHits_temp;
			players[index].nWalks += nWalks_temp;
			players[index].nRBIs += nRBIs_temp;
		}
	}




	//batting average calcualtion 
	for( int i=0; i<NPLAYERS; i++)
	{
		if( players[i].pNum == 19 )
			continue;

		players[i].battingAvg = players[i].nHits / players[i].nAtBats;
	}	
		
	

	//individual player data printing
	printf("player_number f_name l_name at_bats hits wals RBIs bat_avg\n");
	for( int i=0; i<NPLAYERS; i++)
	{
		if( players[i].pNum == 19 )
			continue;
		
	       	printf("%7d %9s %9s %5.2f %5.2f %5d %5d %7.2f\n",
				players[i].pNum,
				players[i].fname, players[i].lname,
				players[i].nAtBats, players[i].nHits,
				players[i].nWalks, players[i].nRBIs,
				players[i].battingAvg);
	}	
	
		
	
	//cumulative team data printing 
	float atBats_total=0.0;
	float nHits_total = 0.0;
	int walks_total = 0;
	int RBIs_total = 0;
	float battingAvg_total = 0.0;

	for( int i=0; i<NPLAYERS; i++)
	{
		if( players[i].pNum == 19 )
			continue;

		atBats_total += players[i].nAtBats;
		nHits_total += players[i].nHits;
		walks_total += players[i].nWalks;
		RBIs_total += players[i].nRBIs;
		battingAvg_total += players[i].battingAvg;
		
	} 

	printf("Team cumulative statistics:\n");
	printf("Total at bats: %.1f.\n", atBats_total);
	printf("Total hits: %.1f\n", nHits_total);
	printf("Total walks: %d\n", walks_total);
	printf("Total RBIs: %d\n", RBIs_total);
	printf("Team batting average: %.3f\n", battingAvg_total/data_count);
	
		
		
	fclose(fp);

	return 0;	
}


