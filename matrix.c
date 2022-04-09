#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

// STEP 1 fill init() function
// STEP 2 fill exit_matrix() function
// STEP 3 fill matrix_getchr() function
// STEP 4 fill writecolumn() function

void exit_matrix(void)
{
    // End Ncurse and exit.
}

void matrix_getchr(void)
{
    // Catch keyboard inputs with Ncurse function.
    // and end the programm on escape key pressed.
}

void init(void)
{
    // Init Ncurse
    // Set Ncurse Nodelay
    // Start color and init the color
}

void writecolumn(int ascii_range)
{
	struct timespec start;
    struct timespec end;
	int ascii_char = 0;
	int vertical_length = rand() % 80 + 20;
	int basex = // Init rand for x position taking into account the max position;
	int basey = // Init y position;

	start.tv_sec = 0;
	for (int counter = 0; counter < vertical_length ;counter++) {
		// Ncurse events check
		start.tv_nsec = 50000000;
		// Init Ascii random char;
		// Enable a color and print the char at the right position
		// then disable the color
		// Use Ncurse function to refresh the screen
		if (nanosleep(&start, &end) < 0)
			exit_matrix();
		// Increment y axe
		// Break if y is superior to terminal height
	}
}

int main()
{
	init();
	while (1) {
		matrix_getchr();
		// writecolumn(/*Ascii Range*/);
	}
	exit_matrix();
}
