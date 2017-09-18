#include <stdio.h>
#include <stdlib.h>

int read_data(FILE* file_name, float* data, int sz_data)
{


	char line[32];
	
	int count =0;
	
	
	while (fgets(line, sizeof line,file_name)!=NULL && count < sz_data)
	{
		data[count] = atof(line);
		count++;
	}

	return count;
}