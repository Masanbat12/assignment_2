#include "my_mat.h"
#include <stdio.h>
#include <math.h>


//#1
void getNumMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j=0; j<N; j++) {
            scanf(" %d", &mat[i][j]);
            if((i != j) && (mat[i][j] == 0)) {
                mat[i][j] = POS_INF;
            }
        }
    }
    floyd_warshall(mat);
}

//#2
int away_Exists(int mat[N][N]) {
    int m,k;
    scanf("%d%d", &m, &k);
    if ((mat[m][k] != POS_INF) && (mat[m][k] != 0) || (mat[k][m] != POS_INF) && (mat[k][m] != 0)) {
        printf("True");
    } 
    else{
        printf("False");
    }
    printf("\n");
    return 0;
}

//#3
int short_Path(int mat[N][N]) {
    int m,k;
    scanf("%d%d", &m, &k);
    if ((mat[m][k] != POS_INF) && (mat[m][k] != 0) && (mat[m][k] == mat[m][k] )) {
        printf("%d", mat[m][k]);
    }
    else{
        printf("-1");
    }
    printf("\n");
    return 0;
}


void floyd_warshall(int matrix[N][N]) {
    for (int k=0; k<N; k++) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if ((matrix[i][j] > (matrix[i][k] + matrix[k][j])) &&
                 (matrix[i][k] != POS_INF) && 
                 (matrix[k][j] != POS_INF)){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }


    for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if(matrix[i][j]>=matrix[j][i] && matrix[j][i]!= 0)
                {
                    matrix[i][j] = matrix[j][i];
                }
                else if (matrix[i][j] != 0)
                {
                    matrix[j][i] = matrix[i][j];
                }
            }
        }
}



