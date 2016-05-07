#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
	FILE *file;
	char c, *prog;
	int loop = 0, i = 0;
	if(argc < 2) { printf("Error, usage is cn4 <filename> <options>\n"); return 0; }
	for(loop = 0; loop < argc; loop++) {
		// put command triggers here
	}
	prog = argv[1];
	file = fopen(prog, "r");
	if (file == NULL) 
		perror ("Error reading file");
	else {
		do {	
			//	Do commands based off of the board, and do the x commands based off of the o commands (allowing a total of 49 commands)
			//
			//	ex:
			//		###o###	- Selects the third subsection of commands
			//		#####x#	- Activates the sixth command in the third subsection
			//
			//	Specific commands to add/subtract/multiply/divide integers will use an integer appended to the end of the command to add
			//	to the variable also appended to the end of the command. Numbers must take up 7 digits, and variables must be alphanumeric
			//	and take up 7 digits.
			//
			//	ex:
			//		#o#####			 - Selects the math subsection
			//		x###### 0000050 0000A04	 - Selects the add command, and adds 50 to variable 0000A04
			//
			//	Commands applying to text output must calculate the ASCII for the given text (similar to rpl)
			//
			//	ex:
			//		[math to calculate 72]
			//		##o####		- Selects the output subsection
			//		x######	0000A04	- Outputs the ASCII character stored in variable 0000A04
			//
			//
			c = getc(file); // change to how to get characters next line
			switch(c) {
				case '######o':
					c = getc(file); // change to how to get characters next line
					switch(c) {
						case '######x':
							break;
						case '#####x#':
							break;
						case '####x##':
							break;
						case '###x###':
							break;
						case '##x####':
							break;
						case '#x#####':
							break;
						case 'x######':
							break;
					}
			}
		}
	}
	exit(0);
}
