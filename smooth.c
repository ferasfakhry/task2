#include <stdio.h>
#include <stdlib.h>


void smooth(float* data, int sz_data, int filter, float* output)
{
	
	float z;

	for(int n=0; n<sz_data-filter;n++)
	{
		z = 0;

		for(int m=0; m<filter;m++)
		{

			z = z + data[n+m];	


		}

		output[n] = z/(float)filter;
		printf( "loops %f\n"  , output[n]);

		
	}

     
	
}