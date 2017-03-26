
#include <string.h>
#include "http.h"


void http_parse_request(const char* buf, http_request* request) {

	// temporary - hard-coding a standard "GET / HTTP/1.1"
	// TODO - implement
	request->version = HTTP_VERSION_11;
	request->verb = HTTP_VERB_GET;
	request->path[0] = '/';
	request->path[1] = '\0';

	strcpy(request->path, "/hello");

	request->content_length = 0;
}

void http_format_response(const http_response* response, char* buf) {

	// TODO
}
