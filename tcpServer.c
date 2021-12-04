#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>

#define PORT 9002

int main(){

	//create a string to hold data to send to client
	char server_message[256];
	printf("Please enter the message:");
	scanf("%s",server_message);

	//create an integer to hold return value of scoket call
	int server_socket;

	// socket call
	server_socket = socket(AF_INET,SOCK_STREAM,0);

	//define the address structure
	struct sockaddr_in server_address ;

	server_address.sin_family = AF_INET;

	server_address.sin_port = htons(PORT);

	server_address.sin_addr.s_addr = INADDR_ANY;

	//bind the socket to out specific IP and Port
	bind(server_socket,(struct sockaddr*) &server_address, sizeof(server_address));

	// now we can listen for connections
	// 5 is the no of client that can  connect to the socket
	listen(server_socket,5);

	// create a variable to hold the client socket
	int client_socket;

	//now we call the accept function
	//1st prameter is the socket we are accepting connection on
	//next two prams are for structure of address of client and sizeof that address
	client_socket = accept(server_socket,NULL,NULL);

	// send data to client socket
	send(client_socket,server_message, sizeof(server_message),0);

	//close the socket
	close(server_socket);
	return 0;
}
