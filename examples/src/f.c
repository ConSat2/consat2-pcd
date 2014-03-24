#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pcdapi.h"

int main( int argc, char *argv[] )
{
	int val;

	/* Register to the PCD's exception handlers */
	PCD_API_REGISTER_EXCEPTION_HANDLERS();

	printf( "Application 'f' started, initializing...\n" );

	/* Initializing stuff */
	if( argc > 1 )
		val = atoi(argv[1]);
	else
		val = 0;

	printf( "'f' init done, val = %d\n", val );
	printf( "'f' is sending PROCESS READY event to the PCD...\n" );

	/* Sending PROCESS READY event to the PCD */
	if( PCD_api_send_process_ready() != 0 )
	{
		printf( "Failed to send ready event!" );
		exit(1);
	}

	printf( "'f' is entering an endless loop..." );

	/* Do some "work" */
	while(1)
	{
		sleep(1);
	}

	return 0;
}
