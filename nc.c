// homework 4
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int convert(int base,int number); // prototype of convert

int main(void) {

  	int base = 0;
    	int number = 0;

	//the big loop that will ask the user for input until exit command (-1)
	while (base != -1){
        printf("Enter Base (2, 4 or 8. Use -1 to Exit): ");
        scanf("%d", &base);
	// saying if the user enters anything but the given options, disallow it by prompting that message
	if (base == (2 || 4 || 8)){
		printf("Base %d is not allowed! Try again.", base);
		continue;
	}
	//otherwise run the switch statement
	else {
	switch (base) { // switch statement looks for what the base is and acts accordingly
		case 2: //if the user enters 2, run this piece
			printf("Enter number to convert to Base 10: ");
			scanf("%d", &number);
			// the convert function here analyzes what the user entered as number above and runs this piece of code
			int convert(int base,int number) {
	                	int decimal = 0;
	                	int weight = 1;
	                	int rem;
				int num = number;

				//this while loops traverses through the number entered by User and stops when that number is down to zero,
				//it also does a very crucial part which is: if the remainder is greater than the base as it traverses through the number,
				//it breaks out of the loop and sends an error message. Otherwise, the code keeps going until the number is down to zero,
				//then it runs the else statement which prints out the decimal as the answer.
	                	while(number != 0){
	                        	rem = number % 10;
						if (rem >= base){break;}
						else {
	                        			decimal = decimal + rem*weight;
	                        			number = number / 10;
                     					weight = weight*2;
						}
         				}
						if (rem >= base){
							printf("Error: a single digit is larger than the base.\n");
							printf("The base 10 equivalent is: 0");
		        		}
						else {
							printf("The base 10 equivalent of %d is: %d", num, decimal);
						}
			}
			convert(base,number); //we ran the above function
			printf("\n"); //print a new line
		break; //break from the case statement
		case 4: //if the user enters 4, run this pieace
			printf("Enter number to convert to Base 10: ");
            		scanf("%d", &number);
			// the convert function here analyzes what the user entered as number above and runs this piece of code
            		int convert4(int base,int number) {
                                int decimal = 0;
                                int weight = 1;
                                int rem;
                                int num = number;

				//this while loops traverses through the number entered by User and stops when that number is down to zero,
				//it also does a very crucial part which is: if the remainder is greater than the base as it traverses through the number,
				//it breaks out of the loop and sends an error message. Otherwise, the code keeps going until the number is down to zero,
				//then it runs the else statement which prints out the decimal as the answer.
                                while(number != 0){
                                        rem = number % 10;
                                        if (rem >= base){break;}
                                        else {
                                        decimal = decimal + rem*weight;
                                        number = number / 10;
                                        weight = weight*4;
										}
                                }
                                if (rem >= base){
                                        printf("Error: a single digit is larger than the base.\n");
					printf("The base 10 equivalent is: 0");
                                }
                                else {
                                        printf("The base 10 equivalent of %d is: %d", num, decimal);
                                }
            		}
			convert4(base,number); //we ran the above function
			printf("\n"); //print a new line
		break; //break from the case statement
       		case 8: //if the user enters 8, run this pieace
                	printf("Enter number to convert to Base 10: ");
                	scanf("%d", &number);
				//the convert function here analyzes what the user entered as number above and runs this piece of code
                       		int convert8(int base,int number) {
                               		int decimal = 0;
                                	int weight = 1;
                                	int rem;
                                	int num = number;

					//this while loops traverses through the number entered by User and stops when that number is down to zero,
					//it also does a very crucial part which is: if the remainder is greater than the base as it traverses through the number,
					//it breaks out of the loop and sends an error message. Otherwise, the code keeps going until the number is down to zero,
					//then it runs the else statement which prints out the decimal as the answer.
                                	while(number != 0){
						rem = number % 10;
						if (rem >= base){break;}
						else {
							decimal = decimal + rem*weight;
							number = number / 10;
							weight = weight*8;
						}
					}
					if (rem >= base){
						printf("Error: a single digit is larger than the base.\n");
						printf("The base 10 equivalent is: 0");
					}
					else {
						printf("The base 10 equivalent of %d is: %d", num, decimal);
					}
                        	}
				convert8(base, number); //we ran the above function
				printf("\n"); //print a new line
		break; //break from the case statement
		case -1: //case where User quits the program
			printf("Enter number to convert to Base 10: 0\n");	
		break;
		default: //default state where any other base is not allowed
			printf("Base %d is not allowed! Try again.\n",base);
		break;
		}
	}
	}
	return 0; //main return
}
