/*Read a String and Just print it in the reverse order
Merlin Xavier
25 July 2025*/
#include <stdio.h>
char a[20];
int i,count=0;
void read(){
	printf("Enter a string:");
	scanf("%s",a);
}
void reversal(){
	for(i=0;a[i]!='\0';i++){ 
		count++;
	}
	for(i=count-1;i>=0;i--){
		printf("%c",a[i]);
	}
}
int main(){
	read();
	reversal();
	return 0;
}
	
