#include <stdio.h>
#include <math.h>
#define N 10
#define   POS_INF 2147483647

/* This function is getting the value of the
index that user the user want to be in the
matrix
*/
void getNumMatrix(int mat[N][N]);

/* This function is printing 'true'e if there is
a way from m to k, else print false
*/
int away_Exists(int mat[N][N]);

/* This function is printing the shortest way if it
exists, else it prints '-1' 
*/
int short_Path(int mat[N][N]);

/* This function is finding the shortest way
from one rout(or many) to other, between all
the routs there is in the matrix graph
by floyd algorithm
*/
void floyd_warshall(int mat[N][N]);
