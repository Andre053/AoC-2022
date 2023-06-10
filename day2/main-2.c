#include <stdio.h>

// possible moves and their resulting vals
// could replace with integers...
enum move {
	A = 1,
	B = 2, 
	C = 3,
	X = 1,
	Y = 2,
	Z = 3
};

int roundForB (char a, char b);

int main (int argc, char **argv) {
	int totalScore = 0, roundScore;
	char a, b; // a is opponent, b is your move	
	char line[5];
	FILE *f;

	f = fopen("./input", "r");
	
	while (fgets(line, 5, f)) {
		a = line[0];
		b = line[2];	
				
		roundScore = roundForB(a, b);
		totalScore += roundScore;
	}	
	printf("Total score: %d\n", totalScore);

	return totalScore;
}
int chooseB (int a, char b) {
	if (b == 'X') {
		if (a == A) return 3;
		if (a == B) return 1;
		if (a == C) return 2; 
	}
	if (b == 'Z') {
		if (a == A) return 2;
		if (a == B) return 3;
		if (a == C) return 1;
	}
	else return a;
}

int roundForB (char a, char b) {
	enum move am, bm;
	if (a == 'A') am = A;
	else if (a == 'B') am = B;
	else if (a == 'C') am = C;

	bm = chooseB(am, b);
	printf("%d vs. %d\n", am, bm);

	if (am == bm) return bm + 3; // tie
	if ((am == A && bm == Z) || (am == B && bm == X) || (am == C && bm == Y)) return bm + 0; // a wins
	return bm + 6; // b wins
}

