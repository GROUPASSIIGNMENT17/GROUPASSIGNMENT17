#include <stdio.h>
int main(){
//Declaration start
	int i, average, maximum, minimum, s_deviation, sum=0, mean;
      int array[5] = {4, 2, 5, 8, 1};
        //apply for loop
            for(i=0; i<5; i++){
          	//To find the sum
		    sum = sum + array[i];
		    //To find the average after gets the sum above
		    average=sum/5;
		    //Tofind the smallest and maxmum number
		    array[0] = maximum;
		    array[0] = minimum;
		    if(array[i] > maximum){
		    maximum = array[i];
			}
			else if(array[i] < minimum){
			array[i] = minimum;	
			}
			//Befor calculating sdt deviation should be find the mean
			mean = sum/5;
		    }
			// standard deviation solution,
			for(i=0; i<5; i++){
		    sum+= (array[i] - mean) * (array[i] - mean);
	    	s_deviation = sqrt(sum/5);
	        }
		   //GETS THE ANSWERS
		printf("\n\nTHE AVERAGE IS: %4d ", average);
	  printf("\n\nTHE MAXIMUM NUMBER IS: %4d ", maximum);
	printf("\n\nTHE SMALLEST(MINIMUM) NUMBER IS: %4d ", minimum);   
   printf("\n\nTHE STANDARD DEVIASION IS: %4d ", s_deviation);   
 return 0;
}
