void multiply(int row, int collumn,float arr[row][collumn], float multy){
    printf("multiplied:\n");
    for(int k=0;k<row;k++){
        for(int f=0;f<collumn;f++){
            arr[k][f]=arr[k][f]*multy;
            printf("%f ", arr[k][f]);
        }
        printf("\n");
    }
    printf("\n");
}
void divide(int row, int collumn,float arr[row][collumn], float multy){
    printf("divided:\n");
    for(int k=0;k<row;k++){
        for(int f=0;f<collumn;f++){
            arr[k][f]=arr[k][f]/multy;
            printf("%f ", arr[k][f]);
        }
        printf("\n");
    }
    printf("\n");
}
void transposed(int row, int collumn, float arr[row][collumn]){
    float a[10][10], r=collumn, c=row;
    printf("transposed:\n");
    for(int k=0;k<collumn;k++){
        for(int f=0;f<row;f++){
                a[k][f]=arr[f][k];
                printf("%f ", a[k][f]);
        }
        printf("\n");
    }
    printf("\n");
}