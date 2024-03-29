#include<stdio.h>
#include<conio.h>

int a[10][10], n, vis[10];
int dfs(int);

void main() {
  int i, j, src, ans;
  for(j = 1; j <= n; j++) {
    vis[j]=0;
  }
  printf("\n Enter the no of nodes: ");
  scanf("%d", &n);
  printf("\n Enter the adjacency matrix: \n");

  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("\n Enter the source node: \t");
  scanf("%d", &src);
  ans = dfs(src);

  if(ans==1) {
    printf("\n Graph is connected\n");
  }
  else {
    printf("\n Graph is not connected\n");
  }
  getch();
}

int dfs(int src) {
  int j;
  vis[src] = 1;
  for(j = 1; j <= n; j++) {
    if(a[src][j] == 1 && vis[j] != 1) {
      dfs(j);
    }
  }

  for(j = 1; j <= n; j++) {
    if(vis[j] != 1) {
      return 0;
    }
  }

  return 1;
}

/* Output:
Enter the no. of nodes: 4
Enter the adjacency matrix:
0 1 1 0
0 0 0 0
0 0 0 1
0 1 0 0
Enter the source node: 1
Graph is connected
Enter the no. of nodes: 4
Enter the adjacency matrix:
0 1 1 0
0 0 0 0
0 1 0 0
0 0 0 0
Enter the source node: 1
Graph is not connected
*/
