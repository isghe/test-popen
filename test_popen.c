#include <stdio.h>

int main (){

	// Solved using "/bin/echo -n"
	const char * command = "echo -n 'Hello World'";
	FILE * stream = popen(command, "r");

	if (!stream) {
		printf("error: popen(%s) returned %p\n", command, stream);
	}
	else{
		char buffer[1024+1] = {0};
		while (!feof(stream)){
			if (fgets(buffer, 1024, stream) != NULL){
				printf("%s", buffer);
			}
		}
		pclose(stream);
		stream = NULL;
	}
	return 0;
}
