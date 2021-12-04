#include <stdio.h>
#include <stdlib.h>

// for definition of socket functions we are using
#include <sys/types.h>
#include <sys/socket.h>

// to store address information
#include <netinet/in.h>

// specify the port
#define PORT 9002

int main()
{
	// crete a socket
	int networkSocket;

	// call the socket function
	networkSocket = socket(AF_INET, SOCK_STREAM, 0); // 0 means default protocol TCP

	// specify the address to connect to
	struct sockaddr_in server_address;

	// specify the address family
	server_address.sin_family = AF_INET;

	// specify the port
	// htons is used to covert int to the data format specified in this structure
	server_address.sin_port = htons(PORT);

	// specify the server address
	// INADDR_ANY means trying to connect to "0.0.0.0"
	server_address.sin_addr.s_addr = INADDR_ANY;

	// connect to another socket
	// connect return an integer and we can use it tom handle some error
	// if status is 0  the all good if it is negative the something is wrong
	int connection_status = connect(networkSocket, (struct sockaddr *)&server_address, sizeof(server_address));

	// print the status of the connection
	if (connection_status == -1)
	{
		printf("There is some error in the connection and connection code is %d\n", connection_status);
	}

	// Create a string to hold information sent by the server
	char server_response[256];
	// receive data from the server
	recv(networkSocket, &server_response, sizeof(server_response), 0);

	// show the received data
	printf("Response: %s\n", server_response);

	// close the socket
	close(networkSocket);
	return 0;
}
