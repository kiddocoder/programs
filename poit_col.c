#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,max_row_index,min_col_index;
	int t[15][15];
	printf(" Entrer la dimension du tableau: ");
	while(scanf("%d",&n) !=1 || n<=0)
	{ 
	  printf(" Entrer une vraie valeur positive!: ");
	}
	
	// Remplir le tableau
	printf(" Entrer les elements du tableau:\n");
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	  {
	 	 	scanf("%d",&t[i][j]);
		  }
	 }
	 
	 for(i=0;i<n;i++)
	 {
     int min_col_index = 0;// initialize col index of min 
		for(j=0;j<n;j++)
		 {
			if (t[i][j] < t[i][min_col_index]) {
            min_col_index = j;
         }
            int max_row_index = 0; // initialize row index of max
           for (int k = 1; k < n; k++) {
            if (t[k][min_col_index] > t[max_row_index][min_col_index]) {
                max_row_index = k;
            }
        }

	}
      if (max_row_index == i) {
            printf("Point of : (%d, %d) is col\n", max_row_index, min_col_index);
        }
}
   return 0;
}