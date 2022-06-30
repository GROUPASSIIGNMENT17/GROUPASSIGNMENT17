#include <stdio.h> 
#include <string.h>

int main(){
	char S[20][20],E[20][20],choice,search[20];
	int n,i;
	printf("enter number of word(s) : ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0; i<n; i++){
		printf("enter swahili word : ");
		scanf("%s",S[i]);
		printf("enter its meaning in english : ");
		scanf("%s",E[i]);
		printf("\n");
	}	
	
	printf("Choose dictionary mode\nA.S-->E\nB.E-->S\nChoice : ");
	scanf("%s",&choice);
	printf("\n");
	
	if(choice == 'A'){
		printf("tafuta neno : ");
		scanf("%s",&search);
		for(i=0; i<n; i++){
			if(strcmp(search,S[i]) == 0){
				printf("%s --> %s\n",S[i],E[i]);
				return 0;
			}
		}
	}else if(choice == 'B'){
		printf("search a word : ");
		scanf("%s",&search);
		for(i=0; i<n; i++){
			if(strcmp(search,E[i]) == 0){
				printf("%s --> %s\n",E[i],S[i]);
				return 0;
			}
		}
	}else{
		printf("Invalid choice\n");
	}
	getchar();
}
