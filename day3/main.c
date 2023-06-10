#include <stdio.h>


int main (int argc, char **argv) {
	int totalPrio = 0;
	int alphSz = 52;
	int alph[alphSz]; 

	int i;
	char c;

	char line[100];
	FILE *f;

	f = fopen("./input", "r");

	while (fgets(line, 100, f)) {
		clear(alph, 52);
		c = ' '; 
	}
	return totalPrio;
}

void clear (int a[], int sz) {
	for (i = 0; i < sz; i++) a[i] = 0;
}
