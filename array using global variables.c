#include <stdio.h>
int a[5], pos=-1;
int insert(int e, int a[]){
	if(pos+1==5){
		printf("Error: Array full");
	}
	else{
		a[++pos]=e;
	}
}
int search(){
	int s,i;
	printf("Enter element to be searched:");
	scanf("%d", &s);
	for(i=0;i<5;i++){
		if(a[i]==s){
			printf("Element found at position: %d",i);
		}
	}
}
int sort(){
	int i,j,temp=0;
	if(pos==-1){
		printf("Error: Array empty");
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<=pos;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Array is sorted!");
	for(i=0;i<=pos;i++){
		printf("\n %d", a[i]);
	}
	
}
void deletee(){
	if(pos==-1){
		printf("Error: Array empty");
	}
	else{
		printf("\n %d", a[pos--]);
	}
}
int menu(){
	int ch;
	printf("\n 1.INSERT \n 2.DELETE \n 3.DISPLAY ALL \n 4.SEARCH \n 5.SORT \n 6.EXIT \n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
void display(){
	int i;
	for(i=0;i<=pos;i++){
		printf("\n %d", a[i]);
	}
}
void processArray(){
	int ch;
	for(ch=menu();ch!=6;ch=menu()){
		switch(ch){
			case 1:
				printf("\n Enter the value to insert:");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				deletee();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
				break;
			case 5:
				sort();
				break;
			
			default:
				printf("\n Error : Wrong Choice!");
				break;
		}
	}
}
int main(){
	processArray();
	return 0;
}
