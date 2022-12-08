#include <stdio.h>
#include "my_mat.h"


int main(){
/*using a temperory matrix 
and have all the values in the
col and rows to be zero*/ 
    int matrix[10][10] = {0};
    char ch;
/*Using a switch case for excuting
all the function by the characters:
'A','B','C','D';
while being in a loop*/
int flag = 1;
    while(flag){
        scanf("%c", &ch);
        
        switch(ch)
        {
            case 'A':
                getNumMatrix(matrix);
                break;

            case 'B':
                away_Exists(matrix);
                break;

            case 'C':
                short_Path(matrix);
                break;

            case 'D':
                flag = 0;
                break;
        }

    }
return 0;
}