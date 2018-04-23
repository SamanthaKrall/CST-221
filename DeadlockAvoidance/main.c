/* Author: Samantha Krall
CST- 221 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int resourcesAvail = 3;
int process1Need = 5;
int process1Has = 2;
int process2Need =5;
int process2Has = 2;
int seconds = 0;

int main(){
    while(process1Has < process1Need){
        if(resourcesAvail <= 0){
            printf("There are not enough resources. \n");
            while(seconds <= 2){
                printf("%d Seconds\n", seconds);
                sleep(1);
                seconds++;
            }
        }else{
            process1Has++;
            resourcesAvail--;
            printf("Process 1 has %d resources and needs %d resources\n", process1Has, process1Need);
            printf("Process 1 requests more resources.\n");
            printf("Process 1 now has %d resources and needs %d resources.\n There are %d resources left.\n", process1Has, process1Need, resourcesAvail);
        }
    }
    printf("Process 1 now has the resources to run, will run and then release it's resources.\n");
    resourcesAvail = resourcesAvail + process1Has;
    
    while(process2Has < process2Need){
        if(resourcesAvail <= 0){
            printf("There are not enough resources.\n");
            while (seconds <= 2){
                printf("%d Seconds\n", seconds);
                sleep(1);
                seconds++;
            }
        }else{
            process2Has++;
            resourcesAvail--;
            printf("Process 2 has requested more resources.\n");
            printf("Process 2 now has %d resources and needs %d resources.\n There are %d resources left.\n", process2Has, process2Need, resourcesAvail);
        }
    }
    printf("Process 2 now has the resources to run, will run and then release it's resources. \n");
    resourcesAvail = process2Has + resourcesAvail;
}