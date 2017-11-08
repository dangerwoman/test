#include<stdio.h>
#include<stdlib.h>

#include "main.h"

int main(int argc, char** argv) {
	test();

	return EXIT_SUCCESS;
}

int test() {
	printf("%s", argv[0]);

	return 0;
}
