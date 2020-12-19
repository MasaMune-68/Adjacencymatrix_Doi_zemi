#include <stdio.h>
#define NODES 9 /*ノードの数*/

int matrix[NODES][NODES];/*隣接行列*/

int main()
{
    int u, v;
    FILE *fp;
    
    for (u = 0; u < NODES; u++)
     for (v = 0; v < NODES; v++)
      matrix[u][v] = 0; /*隣接行列をゼロクリアする*/
    
    fp = fopen("/Users/labd/Documents/隣接行列/隣接行列/graph1.dat", "r");
    while(fscanf(fp, "%d %d", &u, &v) != EOF) { /*データを読み込む*/
        matrix[u][v] = 1;
        matrix[u][v] = 1;
    }
    fclose(fp);
    
    for(u = 0; u < NODES; u++) { /*隣接行列を表示する*/
        for(v = 0; v < NODES; v++)
        printf(" %d",matrix[u][v]);
        printf("\n");
    }
    return 0;
}



