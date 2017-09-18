#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <smooth.h>
#include <read_data.h>

#define MAX_LINES 256

int main(void)
{
	


	FILE* fp;/* this is the file pointer*/
	FILE* out;

	int filter = 5;

	fp =fopen("afile.dat","r");
	out=fopen("cfile.dat","w");

	float data[40];

	int counter = read_data(fp, data, 40);

	printf("read %i lines\n",counter);


	float output[counter-filter+1];

	smooth(data, counter , filter, output);
	
		for(int j=0; j<counter-filter+1; j++)
		{
		
			 printf("%f\n", output[j]);
		
			fprintf(out,"%f\n",output[j]);

		  
		}
	
	fclose(fp);
	fclose(out);
	
	float x;

	}