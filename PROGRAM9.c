/*To perform multiplication of two matrix.
Merlin Xavier
27 July 2025*/
#include <stdio.h>
int a[10][10], b[10][10],i,j,k,prod[10][10],r1,c1,r2,c2;
void read(){
	printf("Enter number of row and column for matrix1:\n");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter number of row and column for matrix2:\n");
	scanf("%d%d",&r2,&c2);
	if(c1==r2){
		printf("\nEnter elements for matrix1:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nEnter elements for matrix2:\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
	}
	else{
		printf("\nCannot perform multiplication!");
	}	
}
void multiply(){
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			prod[i][j]=0;
			for(k=0;k<c1;k++){
				prod[i][j]=prod[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	
}

void display(){
	printf("\nmatrix1:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nmatrix2:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nProduct is:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",prod[i][j]);
		}
		printf("\n");
	}
}
int main(){
	read();
	multiply();
	display();
	return 0;
}
	
