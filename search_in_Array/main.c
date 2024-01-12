//This 'C' program searches for the given value in the array, and prints it with position if it exist in the array.
/*
 Example :
 Enter size of array: 10
 Enter elements in array: 10 12 20 25 13 10 9 40 60 5

 Enter element to search: 25

 25 is found at position 4
 */

//Created by Mehmet Akif Duran, 12 Jan 2024.

#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100000


int main(void){ //beginnig of the main function
    
    // variable decleration(s).
    
    int array[MAX_SIZE],size,count,number;
    int founded; //if array has the users element it is going to equal if not it will equal zero and we will use it in a loop to print the result.
    
    // executable statement(s).
    
    printf("Enter size of array: ");
        scanf("%d", &size); //getting users array size.
    
    printf("Enter elements in array : ");
    for(count=0;count<size;count++) //user inptus arrays elements.
        scanf("%d", &array[count]);
    
    //getting the element that we will search in the array
    printf("Enter element to search: ");
        scanf("%d", &number);
    
    founded = 0 ;
    
    for(count=0; count<size; count++)
    {//beginnig of the for loop.
        
        if(number == array[count])
        {
            founded = 1 ;
            break;
        }
        else
        {
            founded = 0 ;
        }
    }//end of the for loop
    if (founded == 1) {
        printf("%d is found at position %d\n", number,count+1);
    }else
        printf("%d is not found in array. \n",number);
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    return 0;
} //end of the main function
