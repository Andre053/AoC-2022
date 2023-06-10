#include <stdio.h> // I/O
#include <stdlib.h> // atoi

// input is a text file
int main (int argc, char **argv) {
	int current = 0, max = -1;
	int lineVal;

	char line[10]; // allows for numbers 9 digits long
	FILE *f;

	f = fopen("./input", "r");

	while (fgets(line, 10, f)) {
		lineVal = atoi(line);
		if (lineVal == 0) {
			printf("Elf value: %d\n", current);
			if (current > max) {
				max = current;
			}
			current = 0;
		} 
		current += lineVal;
	}
	printf("Max value found: %d\n", max);

	return max;
}
