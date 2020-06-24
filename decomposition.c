#include<stdio.h>
#include<math.h>


//Write a function that receives an integer and displays prime decomposition of the integer on console. 
//Test the function in a program that receives an integer from user and displays prime decomposition the entered integer using the function. 
//Example:45=3^2 * 5^1 , 12=2^2 * 3

int decomposition(int n){
	
  int i=2;
  int result=1;
  int count=0;
  int x=n;
  	for(;n%i==0;){
  			n=n/i;
  		    count++;
  		    continue;
		  }
		  if(count!=0){
		  	 printf("%d^%d ",i,count);
		  }
		 
		  result*=pow(i,count);
		  	n=x;
	      count=0;
		  
		  
  
  for(i=3;i<n;i+=2){
    if(n%i!=0){
		continue;
	}  
  	else{
  		for(;n%i==0;){
  			n=n/i;
  		    count++;
  		    continue;
		  }
		  printf("%d^%d ",i,count);
		  
		  }
	result*=pow(i,count);
	n=x;
	count=0;
	
	if(result==n){
		break;
	}
	continue;
	
  }
	  
 }



int main(){
	
	int a;
	printf("Please enter an integer:");
	scanf("%d",&a);
	
	decomposition(a);
	
	
	
	return 0;
}


