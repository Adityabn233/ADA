#include<stdio.h>
#include<conio.h>

int a[10][10], n;
void bfs(int);

void main() {
  int i, j, src;
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
  bfs(src);
}


void bfs(int src) {
  int q[10], f=0, r=-1, vis[10], i, j;
  for(j = 1; j <= n; j++) {
    vis[j]=0;
  }
  vis[src] = 1;
  r = r + 1;
  q[r] = src;

  while(f <= r) {
    i = q[f];
    f = f + 1;
    for(j = 1; j <= n; j++) {
      if(a[i][j] == 1 && vis[j] != 1) {
        vis[j] = 1;
        r = r + 1;
        q[r] = j;
      }
    }
  }

  for(j = 1; j <= n; j++) {
    if(vis[j] != 1) {
      printf("\n Node %d is not reachable\n", j);
    }
    else {
      printf("\n Node %d is reachable\n", j);
    }
  }
}

/* Output:
Enter the no. of nodes: 6
Enter the adjacency matrix:
0 1 1 1 0 0
0 0 0 0 1 0
0 0 0 0 1 1
0 0 0 0 0 1
0 0 0 0 0 0
0 0 0 0 1 0
Enter the source node: 1
Node 1 is reachable
Node 2 is reachable
Node 3 is reachable
Node 4 is reachable
Node 5 is reachable
Node 6 is reachable
*/
//Depth First Search Algorithm

