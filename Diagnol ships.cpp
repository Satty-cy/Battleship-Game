void placeDiagonalShips(char grid[GRID_SIZE][GRID_SIZE], int shipCount) {
    int shipsPlaced = 0;

    for (int i = 0; i < GRID_SIZE && shipsPlaced < shipCount; ++i) {
        grid[i][i] = 'S'; // Place diagonally
        shipsPlaced++;
    }
}