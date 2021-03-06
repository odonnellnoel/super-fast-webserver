all: release

test: release
	valgrind --tool=memcheck --leak-check=yes ./event-server.exe

# unbuffered netcat client
ncclient:
	stty -icanon && nc localhost 8080

release:
	gcc -o event-server.exe main.c server.c client.c client_handlers.c ep.c http.c -Wall -O3 -s
