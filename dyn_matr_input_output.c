#include <stdio.h>
#include <stdlib.h>

//void sort_vertical(int **matrix, int n, int m, int **result_matrix);
//void sort_horizontal(int **matrix, int n, int m, int **result_matrix);
void input(int **matrix, int n, int m);
void output(int **matrix, int n, int m);


int main() {
    int n;
    int m;
    int err = 0;

    if(scanf("%d", &n) != 1 || n < 1) err = 1;
    if(scanf("%d", &m) != 1 || m < 1) err = 1;
   
    int **matrix = malloc(n * sizeof(int*)); 
    for (int i = 0; i < n; i++)
        matrix[i] = malloc(m * sizeof(int));
      //  int **result = (int**)malloc(n * m * sizeof(int));
   
    input(matrix, n, m);
   // sort_vertical(matrix, n, m, result);
   // output(result);
   // sort_horizontal(matrix, n, m, result);
    output(matrix, n, m);
     
    for (int i = 0; i < n; i++)
        free(matrix[i]);
    
    free (matrix); 

    if (err == 1) printf("n/a");
    return 0;
    
}


void input(int **matrix, int n, int m){
   // int err = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++){
        scanf("%d", &matrix[i][j]); 
        //printf("строка %d колонка %d, значение: %d \n", i, j, matrix[i][j]); 
        }
        }
//return err;

}
void output(int **matrix, int n, int m){
    
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
        printf("%d ", matrix[i][j]);}  printf("\n"); }
        
}

//void sort_vertical(int **matrix, int n, int m, int **result_matrix) {}
//void sort_horizontal(int **matrix, int n, int m, int **result_matrix) {}

