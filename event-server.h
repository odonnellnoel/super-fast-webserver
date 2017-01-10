#pragma once

#define CLIENT_INPUT_BUFFER_SIZE 1000

typedef struct client {

	// input buffer
	char in_buff[CLIENT_INPUT_BUFFER_SIZE];

	// pointer to character after the last
	// byte read into in_buff
	char* in_buff_term;

	// file descriptor for file currently being
	// read on behalf of the client
	int file_fd;
	
} client;

