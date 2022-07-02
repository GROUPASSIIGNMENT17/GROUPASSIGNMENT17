//c program to reverse a string 
#include <stdio.h>
#include <string.h>
void invert_string();
void main(){
	 invert_string();
}
//function to receive the string inputs and reversing it.
void invert_string(){
	char arr[100];
	printf("enter the string to reverse:\n");
	gets(arr);
	strrev(arr);
	printf("the reversed of the string is: *%s*",arr);
	
}
