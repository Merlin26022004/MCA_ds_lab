/*To find the transpose of a matrix.
Merlin Xavier
27 July 2025*/
#include <stdio.h>
int a[10][10], t[10][10],i,j,r,c;
void read(){
	printf("Enter number of row and column for matrix:\n");
	scanf("%d%d",&r,&c);
		printf("\nEnter elements for matrix1:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%d",&a[i][j]);
			}
		}	
}
void transpose(){
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[j][i]=a[i][j];
		}
		printf("\n");
	}
}

void display(){
	printf("\n Original Matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose Matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
int main(){
	read();
	transpose();
	display();
	return 0;
}
	
