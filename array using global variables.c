#include<stdio.h>
int  a[5],pos=-1;
void insert(int e)
{
	if(pos+1==5)
	{
		printf("Error:Array is Full");
	}
	else
	{
		a[++pos]=e;
	}
}
void dellete()
{
	if(pos==-1)
	{
		printf("Error:Array is empty");
	}
	else
	{
		printf("\n%d",a[pos--]);
	}
}
void sort()
{
	int i,j,temp=0;
	if(pos==-1)
	{
		printf("Array empty");
	}
	for(i=0;i<=pos;i++)
	{
		for(j=j+1;j<=pos;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted form:");
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
void display()
{
	int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int menu()
{
	int ch;
	printf("\nINSERT-1\nDELETE-2\nDISP-3\nSORT-4\nEXIT-5\nEnter your choice");
	scanf("%d",&ch);
	return ch;
}
void processArray()
{
    int ch;
    for(ch=menu();ch!=5;ch=menu())
    {
    	switch(ch)
    	{
    		case 1:
			    printf("enter the value to be inserted:");
    	     	scanf("%d",&ch);
    	    	insert(ch);
    	    	break;
    	    case 2:
			    dellete();
				break;
			case 3:
			    display();
				break;
			case 4:
				sort();
				break;
			case 5:
			    break;    	
			default:
			    printf("Error:wrong choice");
				break;				
    	    		
		}
	}   
}
int main()
{
	processArray();
	return 0;
}
