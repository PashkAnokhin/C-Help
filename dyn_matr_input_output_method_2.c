/* Функции динамического выделения памяти под матрицы способом выделения одного участка памяти на все строки*/


#include <stdio.h>
#include <stdlib.h>

int input(int *matrix, int n, int m);
void output(int *matrix, int n, int m);


int main() {
    int n;
    int m;
    int err = 0;

    if(scanf("%d", &n) != 1 || n < 1) err = 1;
    if(scanf("%d", &m) != 1 || m < 1) err = 1;
   
    int *matrix = malloc(n * m * sizeof(int*));
    if (matrix == NULL) err = 1;
    

    if (err == 0)

    {
    err+= input(matrix, n, m);

    output(matrix, n, m);  
    free (matrix); 
    }

    if (err == 1) printf("n/a");
    return 0;
    
}


int input(int *matrix, int n, int m){
    int err = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++){
        if(scanf("%d", (matrix + i*m + j)) == 0) err = 1; 
               }
        
        }
return err;

}
void output(int *matrix, int n, int m){
    
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
        printf("%d ", *(matrix + i*m + j));}  printf("\n"); }
        
}



