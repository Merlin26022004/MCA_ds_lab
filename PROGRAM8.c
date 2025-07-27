/*To perform the addition of two matrix and subtraction of one matrix from another.
Merlin Xavier
27 July 2025*/
#include <stdio.h>
int a[10][10], b[10][10],i,j,sum[10][10],diff[10][10],r,c;
void read(){
	printf("Enter number of row for matrix:");
	scanf("%d",&r);
	printf("\nEnter number of column for matrix:");
	scanf("%d",&c);
	printf("\nEnter elements for matrix1:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements for matrix2:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
}
void add(){
		printf("\nSum is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
}
void sub(){
	printf("\nDifference is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			diff[i][j]=a[i][j]-b[i][j];
			printf("%d\t",diff[i][j]);
		}
		printf("\n");
	}
}
void display(){
	printf("\nmatrix1:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nmatrix2:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
int main(){
	read();
	display();
	add();
	sub();
	return 0;
}
	
