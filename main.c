#include <stdio.h>
#include <stdlib.h>
#include "georgi.h"
#include "kalin.h"


int main()
{
    int r=-1,c=-1;
    printf("Welcome to Our Matrix Calculator!\n\n");
    printf("Please select the number of rows and columns in your matrix.\n");
    while(r<0 || c<0){
        printf("Rows: ");
        scanf("%d", &r);
        printf("\n");
        printf("Columns: ");
        scanf("%d", &c);
        printf("\n");
    }
    FILE * fpointer = fopen("matrix.txt", "r");
    FILE * fpointer1 = fopen("by_matrix.txt", "r");
    FILE * fpointer2 = fopen("multy.txt", "r");
    FILE * fpointer3 = fopen("division.txt", "r");
    float arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            fscanf(fpointer, "%f", &arr[i][j]);
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    int sel=0;
    printf("Select an operation:\n\n\tEnter 1 for multiplication\n\tEnter 2 for division\n\tEnter 3 for transposing\n\tEnter 4 for multiplying your matrix with another\n\tEnter 5 to find the determinant of the matrix\n\tEnter 6 to find the inversed matrix\n\n");
    printf("Enter your selection: ");
    scanf("%d", &sel);
    if(sel == 1){
        int m=0;
        fscanf(fpointer2, "%d", &m);
        printf("\n");
        multiply(r, c, arr, m);
    }
    if(sel == 2){
        int s=0;
        fscanf(fpointer3, "%d", &s);
        printf("\n");
        if(s == 0){
            printf("You can't divide by 0\nFortnite\n");
        }
        else{
            divide(r, c, arr, s);
        }
    }
    if(sel == 3){
        transposed(r, c, arr);
    }
    else if(sel == 4){
        int r1=-1,c1=-1;
        while(r1<0 || c1<0){
            printf("Enter num of rows1: ");
            scanf("%d", &r1);
            printf("\n");
            printf("Enter num of colums1: ");
            scanf("%d", &c1);
            printf("\n");
        }
        float arr1[r1][c1];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                fscanf(fpointer1, "%f", &arr1[i][j]);
                printf("%f ", arr1[i][j]);
            }
                printf("\n");
        }
        matrix_by_matrix(r, c, arr, r1, c1,arr1);
    }
    if (sel == 5){
        if(r != c){
            printf("To find the determinant of a matrix the rows and columns must be the same number, try again.");
        }else if(r<1 || r>4){
                printf("The rows and columns have to be a number between 1 and 4, try again.");
                return 0;
        }else {
            find_determinant(r, arr);
        }
    }

    if(sel == 6){
        if(r != c){
            printf("To find the determinant of a matrix the rows and columns must be the same number, try again.");
        }else{
            inverse_matrix(r, arr);
        }
    }
    return 0;
}
