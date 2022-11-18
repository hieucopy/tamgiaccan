#include <stdio.h>

int main(){
	int n,i,t,m;
	printf ("nhap chieu dai canh tam giac can ");
	scanf ("%d",&n);
	m=2*n-1;
	t=0;
	while (m>0) {
	for (i=1;i<=t;i++) printf(" ");
	for (i=1;i<=m;i++) 
	  printf("*");

   
    	printf("\n");
    t++;
    m=m-2;
}

	
	return 0;
}
