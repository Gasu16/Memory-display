#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char BYTE;

int main(void){
	// addr: variable where we will save the hex address we want to read from
	// i, n: i is a counter for bytes left to read, n is the total number of bytes we want to read
	// ptr: simple pointer
	unsigned long addr;
	int i, n;
	BYTE *ptr = NULL;
	char num;
	
	// Insert a specific address if you want you can try with the variable "addr" address
	printf("\n\nAddress of main function: %lx\n", (unsigned long) main);
	printf("Address of addr variable: %lx\n", (unsigned long) &addr);
	printf("\nLITTLE TIP: If you want you can automatically insert the variable <addr> address %lx\n\n", (unsigned long) &addr);
	
	int opt;
	printf("Press 1 -> automatic input of <addr> variable address\nPress 0 -> Insert manually address\nPress any key else to exit\n\nPress [1/0]: ");
	scanf(" %d", &opt);	

	// Manually input address
	
	if(opt  == 0){
		printf("You pressed n, so you choosed to write input address by yourself\n");
		printf("\nEnter a (hex) address: ");
		scanf(" %lx", &addr);
	}
	
	
	// Automatically input address
	else if(opt == 1){
		printf("You pressed y, the variable <addr> address %lx will be used\n", (unsigned long) &addr);
	}
	// Exiting
	else{
		printf("Exiting...\n");
		exit(1);
	}
	getchar();
	printf("\nEnter number of bytes to view: ");
	
	scanf(" %d", &n);
	
	// Displaying output
	printf("\n");
	printf(" Address                         Bytes                                    Characters\n");
	printf(" -------        ----------------------------------------                  ----------\n");
	ptr = (BYTE *) addr;
	for(; n > 0; n -= 10){
		
		printf("%8lX ", (unsigned long) ptr);
		
		for (i = 0; i < 10 && i < n; i++){
			printf("  ");
			printf("%.2X ",  *(ptr + i));
		}
		for (; i < 10; i++){
			printf("      ");
		}
		printf("           ");
		for (i = 0; i < 10 && i < n; i++){
			BYTE ch = *(ptr + i);
			if (!isprint(ch))
				ch = '.';
			printf("%c", ch);
		}
		printf("\n");
		ptr += 10;
	}
	
	return 0;
}


