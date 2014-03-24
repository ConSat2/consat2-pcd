#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pcdapi.h"

int main( int argc, char *argv[] )
{
	unsigned i = 0;

	/* Register to the PCD's exception handlers */
	PCD_API_REGISTER_EXCEPTION_HANDLERS();

	printf( "Application 'h' started...\n" );

	printf( "'h' is sending PROCESS READY event to the PCD...\n" );

	/* Sending PROCESS READY event to the PCD */
	if( PCD_api_send_process_ready() != 0 )
	{
		printf( "Failed to send ready event!" );
		exit(1);
	}

	printf( "'h' is going to enter an endless loop...\n" );

	/* Do some "work" */
	while(1)
	{
		i++;
		sleep(1);

		if( i>=10 )
			printf("'h' is still alive!\n");
		else
			i=0;
	}

	return 0;
}
