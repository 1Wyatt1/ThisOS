#include <stdio.h>

#include "kernel/tty.h"

void kernel_main(void) {
	terminal_initialize();
	printf("Guess this prints!\n");
	printf("This is a second line\n");
}
