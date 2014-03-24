#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pcdapi.h"

int main( int argc, char *argv[] )
{
	unsigned i = 2;

	/* Register to the PCD's exception handlers */
	PCD_API_REGISTER_EXCEPTION_HANDLERS();

	printf( "Application 'c' started, doing some work and terminating...\n" );

	/* Do some "work" */
	while(i--)
	{
		sleep(1);
	}

	printf( "'c' terminating...\n" );

	return 0;
}
