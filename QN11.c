   #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	//create a structure to store the records for all students
	struct student
	{
		char reg_no[30];
		int marks1;
		int marks2;
		int marks3;
		int marks4;
	};
	int main(){
		
		FILE *fpointer;//create file pointer variable
		struct student s[100];
		int n,i,index;
		int max1,max2,max3,max4;
		int min1,min2,min3,min4;
		double avg1,avg2,avg3,avg4;
		int sum1=0,sum2=0,sum3=0,sum4=0;
		char ch;
		//open the file in write mode
		fpointer=fopen("sgrade.txt","w");
		if(fpointer==NULL){
			printf("\nError:file can not be created.  \a");
			exit(0);
		}
		
		printf("\nEnter the number of students:  ");
		scanf("%d",&n);
		
		//initiatializing the maximum and minimum score in CSS114 as the first element
		max1=s[0].marks1;
		min1=s[0].marks1;
		
		//initiatializing the maximum and minimum score in CSS124 as the first element
		max2=s[0].marks2;
		min2=s[0].marks2;
		
		//initiatializing the maximum and minimum score in CSS122 as the first element
		max3=s[0].marks3;
		min3=s[0].marks3;
		
		//initiatializing the maximum and minimum score in CSS118 as the first element
		max4=s[0].marks4;
		min4=s[0].marks4;
		
		//taking the records of student and store them in the file
		for(i=0;i<n;i++){
			printf("\nfor student no.%d", i+1);
			printf("\nenter registration number: ");
			scanf("%s",s[i].reg_no);
			//receive score for CSS114
			printf("enter marks for CSS114: \n  ");
			scanf("%d",&s[i].marks1);
			
				printf("enter marks for CSS124: \n  ");
			scanf("%d",&s[i].marks2);
			
				printf("enter marks for CSS122: \n  ");
			scanf("%d",&s[i].marks3);
			
				printf("enter marks for CSS118: \n  ");
			scanf("%d",&s[i].marks4);
			fprintf(fpointer,"\nreg_no: %s\t marks_for_CSS114: %d\t marks_for_CSS124: %d\t marks_for_CSS122: %d\t marks_for_CSS118: %d\t\n",s[i].reg_no,s[i].marks1,s[i].marks2,s[i].marks3,s[i].marks4);
	        //get the total marks in CSS114
			sum1=sum1+s[i].marks1;
	        //get the total marks in CSS124
			sum2=sum2+s[i].marks2;
			//get the total marks in CSS122
	        sum3=sum3+s[i].marks3;
	        //get the total marks in CSS118
	        sum4=sum4+s[i].marks4;
	        
	                 //find the maximum score in CSS114 if current score is greater than max1
	        if(s[i].marks1>max1){
	        	max1=s[i].marks1;
	               
			}
			        //find the minimum score in CSS114 if current score is small than min1
	        if(s[i].marks1<min1){
	        min1 = 	s[i].marks1;
			}
	         
	                 //find the maximum score in CSS124 if current score is greater than max2
	        if(s[i].marks2>max2){
	        	max2=s[i].marks2;
	               
			}
			        //find the minimum score in CSS124 if current score is small than min1
	        if(s[i].marks2<min2){
	        min2 = 	s[i].marks2;
			}
	         
	                 //find the maximum score in CSS122 if current score is greater than max3
	        if(s[i].marks3>max3){
	        	max3=s[i].marks3;
	               
			}
			        //find the minimum score in CSS122 if current score is small than min1
	        if(s[i].marks3<min3){
	        min3 = 	s[i].marks3;
			}
	         
	                 //find the maximum score in CSS118 if current score is greater than max4
	        if(s[i].marks4>max4){
	        	max4=s[i].marks4;
	               
			}
			        //find the minimum score in CSS118 if current score is small than min4
	        if(s[i].marks4<min4){
	        min4 = 	s[i].marks4;
			}
	        
	        
		}
	
		
		//give the output of the total score in CSS114
		printf("\nthe sum of all marks in CSS114  is: %d",sum1);
		
		//give the output of the total score in CSS124
		printf("\nthe sum of all marks in CSS124  is: %d",sum2);
		
		//give the output of the total score in CSS122
		printf("\nthe sum of all marks in CSS122  is: %d",sum3);
		
		//give the output of the total score in CSS118
		printf("\nthe sum of all marks in CSS118  is: %d",sum4);
		
		//give the average of all scores in CSS114
		avg1= sum1/n;
		
		//give the average of all scores in CSS124
		avg2= sum2/n;
		
		//give the average of all scores in CSS122
		avg3= sum3/n;
		
		//give the average of all scores in CSS118
		avg4= sum4/n;
		
			//give the output of the total average score in CSS114
		printf("\nthe average of all marks in CSS114  is: %f",avg1);
		
		//give the output of the total average score in CSS124
		printf("\nthe average of all marks in CSS124  is: %f",avg2);
		
		//give the output of the total average score in CSS122
		printf("\nthe average of all marks in CSS122  is: %f",avg3);
		
		//give the output of the total average score in CSS118
		printf("\nthe average of all marks in CSS118  is: %f",avg4);
		
		//give the best student in CSS114
		printf("\n The best student in CSS114  gets: %d",max1);
		
		//give the worst student in CSS114
		printf("\n The worst student in CSS114  gets: %d",min1);
		
			
		//give the best student in CSS124
		printf("\n The best student in CSS124  gets: %d",max2);
		
		//give the worst student in CSS124
		printf("\n The worst student in CSS124   gets: %d",min2);
			
		//give the best student in CSS122
		printf("\n The best student in CSS122  gets: %d",max3);
		
		//give the worst student in CSS122
		printf("\n The worst student in CSS122  gets: %d",min3);
			
		//give the best student in CSS118
		printf("\n The best student in CSS118  gets: %d",max4);
		
		//give the worst student in CSS118
		printf("\n The worst student in CSS118  gets: %d",min4);
		
		//close the file 
		//fclose(fpointer);
		
	
		//open the file in read mode
		fpointer=fopen("sgrade.txt","r");
		if(fpointer==NULL){
			printf("\nError: file is either corrupted or demaged.  \a");
			exit(0);
		}
		
		//print the content of file
		for(i=1;i<=n;i++){
			fscanf(fpointer,"%s\t%d\t%d\t%d\t%d\n",s[i].reg_no,&s[i].marks1,&s[i].marks2,&s[i].marks3,&s[i].marks4);
			printf("\nreg_no=%d\tmarks_for_CSS114=%d\tmarks_for_CSS114=%d\tmarks_for_CSS114=%d\tmarks_for_CSS114=%d",
			s[i].reg_no,s[i].marks1,s[i].marks2,s[i].marks3,s[i].marks4);
		}
		
		//close the file
		//fclose(fpointer);
		
		//opens file in reading mode
		fpointer= fopen("sgrade.txt","r");
		if(fpointer==NULL)
		{
			fprintf(stderr,"\nError opening file\n");
			exit(1);
		}
		//read file content until end of file
		while( (ch = getc(fpointer)) != EOF){
			printf("%ch",ch);
		}
		
		
		//close the file
		//fclose(fpointer);
		return 0;
	}
