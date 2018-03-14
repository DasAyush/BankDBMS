#include<stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"

int main()
{
	PGconn *connection = PQconnectdb("user=ayush  dbname=dbms ");
	if(PQstatus(connection) == CONNECTION_BAD)
	{
	printf("Connection Error");
	PQfinish(connection);
	return -1;
	}
	printf("connection ok \n");
	PQfinish(connection);
	printf("disconnected");
	return 0;
}
