# Sudoku Solver
A simple terminal application that solves a Sudoku puzzle.

## How to use
- compile
```
$ make
```

- execute
```
$ ./sudokusolver
```

- input the grid

example:
```
Input:
   123456789

1    9  7 4
2   71 2   5
3   4     39
4       8
5     46
6    219 8
7   6    4
8   9 2865
9  5
```

- get the solution
```
Grid:                     Solution:
+---+---+---+             +---+---+---+
|  9|  7| 4 |             |859|637|142|
| 71| 2 |  5|             |371|924|685|
| 4 |   | 39|             |246|851|739|
+---+---+---+             +---+---+---+
|   |  8|   |             |615|378|294|
|   |46 |   |             |987|462|351|
|  2|19 |8  |             |432|195|867|
+---+---+---+             +---+---+---+
| 6 |   |4  |             |763|519|428|
| 9 |286|5  |             |194|286|573|
|5  |   |   |             |528|743|916|
+---+---+---+             +---+---+---+
```
