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

int roundForB (char a, char b) {
	enum move am, bm;
	if (a == 'A') am = A;
	else if (a == 'B') am = B;
	else if (a == 'C') am = C;

	if (b == 'X') bm = X;
	else if (b == 'Y') bm = Y;
	else if (b == 'Z') bm = Z; 

	if (am == bm) return bm + 3; // tie
	if ((am == A && bm == Z) || (am == B && bm == X) || (am == C && bm == Y)) return bm + 0; // a wins
	return bm + 6; // b wins
}

