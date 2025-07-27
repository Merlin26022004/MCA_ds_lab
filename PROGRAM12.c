/*Implement stack operations using arrays.
Merlin Xavier
25 July 2025*/
#include <stdio.h>
int a[5], top=-1;
void push(int n){
	if(top+1==5){
		printf("Error: stack overflow!");
		
	}
	else{
		a[++top]=n;
	}
}
void pop(){
	if(top==-1){
		printf("Error: stack underflow!");
	}
	else{
		printf("\n%d popped!",a[top--]);
	}
}
void peek(){
	
		printf("Top element:\t%d",a[top]);
	
}
int menu(){
	int ch;
	printf("\n 1.push \n 2.pop \n 3.peek \n 4.exit \n Enter your choice:");
	scanf("\n %d",&ch);
	return ch;
}
void processStack(){
	int ch, val;
	for(ch=menu();ch!=4;ch=menu()){
		switch(ch){
			case 1:
				printf("\nEnter the value to be pushed:");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			default:
				printf("Wrong choice!");
				break;
		}
	}
}
int main() {
    processStack();
    return 0;

}

