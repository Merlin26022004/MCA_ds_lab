/*Search for all the occurrences of an element in an integer array (positions).
Merlin Xavier
25 July 2025*/
#include <stdio.h>
int main(){
	int a[5],i,s,j,count=0;
	printf("Enter 5 array elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be searched:");
	scanf("%d",&s);
	for(j=0;j<5;j++){
		if(a[j]==s){
			count++;
			printf("\nElement found at position %d",j);
		}
		
	}
	if(count==0){
		printf("\nNot Found!");
	}
}
