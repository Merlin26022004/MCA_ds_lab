/*To find the Determinant of a matrix (2x2 and 3x3).
Merlin Xavier
27 July 2025*/
#include <stdio.h>
int a[3][3], d,i,j,r,c;
void read(){
	printf("Enter number of row and column for matrix:\n");
	scanf("%d%d",&r,&c);
		if(r>3 || c>3 || r!=c){
			printf("\nWrong Input!\n");
		}	
		else{
			printf("\nEnter elements for matrix1:\n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					scanf("%d",&a[i][j]);
				}
			}
		}
}
void determinant(){
	if(r==2 && c==2){	
	  	d=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	}
	else if(r==3 && c==3){
		d=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
	}
}

void display(){
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nDeterminant: %d",d);
}
int main(){
	read();
	determinant();
	display();
	return 0;
}
	
