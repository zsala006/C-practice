// Game of LIFE 1D
#include <iostream>
#include <iomanip>
#include "apmatrix.h"
#include<fstream>

const int ROWS = 20, COLUMNS = 50;

using namespace std;

//const int SIZE = 13;  // The size of the grid.  In the 1–D version
//   the "grid" is a one–dimensional array.

const char ALIVE = 'x';
const char DEAD = '.';

apmatrix<char> grid(ROWS, COLUMNS);

void NextGeneration();
void DisplayGrid(int generation);
void LoadGrid();

int main() {
	int generation = 0;

	LoadGrid();
	DisplayGrid(generation);       // Display initial configuration.

	char next;
	for(;;) {
		cout << "Next (y/n)? ";
		cin >> next;
		if (next != 'y')
			break;
		NextGeneration();
		generation++;
		DisplayGrid(generation);
	}
	return 0;
}

// Creates the next generation on the grid.
void NextGeneration() {

	apmatrix<char> newgrid(ROWS, COLUMNS);
	int i, neighbors;

	// Count alive neighbors of each cell and
	//   calculate the new grid:

	for (i = 0;   i < ROWS;   i++) {
		for(int j = 0; j < COLUMNS; j++) {
			neighbors = 0;
			if (i > 0 && grid[i-1][j] == ALIVE)
				neighbors++;
			if (i < ROWS-1 && grid[i+1][j] == ALIVE)
				neighbors++;
			if (j > 0 && grid[i][j-1] == ALIVE)
				neighbors++;
			if (j < COLUMNS-1 && grid[i][j+1] == ALIVE)
				neighbors++;
				
				
			if (i < ROWS-1 && j > 0 && grid[i+1][j-1] == ALIVE)
				neighbors++;	
			if (i > 0 && j < COLUMNS-1 && grid[i-1][j+1] == ALIVE)
				neighbors++;	
			if (j < COLUMNS-1 && i < ROWS - 1 && grid[i+1][j+1] == ALIVE)
				neighbors++;
			if (j > 0 && i > 0 && grid[i-1][j-1] == ALIVE)
				neighbors++;				
				
			if (grid[i][j] == ALIVE && neighbors == 2)
				newgrid[i][j] = ALIVE;
			if (grid[i][j] == ALIVE && neighbors == 3)
				newgrid[i][j] = ALIVE;
			if (grid[i][j] == DEAD && neighbors == 4)
				newgrid[i][j] = ALIVE;
			else
				newgrid[i][j] = DEAD;
		}
	}
	// Update the grid:

	grid = newgrid;
}


// Displays the current generation on the grid.
void DisplayGrid(int generation) {
	int i;

	cout << setw(4) << generation << ": " << endl;

	for (i = 0;   i < ROWS;   i++) {
		for(int j = 0; j < COLUMNS; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
}

// Reads the initial grid configuration.
	void LoadGrid() {
		ifstream fGrid;
		fGrid.open("LIFE_CAT.DAT");

		for (int i = 0;   i < ROWS;   i++) {
			for(int j = 0; j < COLUMNS; j++) {
				fGrid >> grid[i][j];
			}
		}
	}

