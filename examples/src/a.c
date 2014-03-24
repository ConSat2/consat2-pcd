#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pcdapi.h"

int main( int argc, char *argv[] )
{
	unsigned i = 0;

	/* Register to the PCD's exception handlers */
	PCD_API_REGISTER_EXCEPTION_HANDLERS();

	printf( "Application 'a' started, going to enter an endless loop...\n" );

	/* Do some "work" */
	while(1)
	{
		i++;
		sleep(1);

		if( i>=10 )
			printf("'a' is still alive!\n");
		else
			i=0;
	}

	return 0;
}
