/* Author: Samantha Krall
Producer and Consumer Assignment
*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define MAXSIZE 5

int main()
{
    int count = 0;
    void producer(){
        int i;
        if(count == MAXSIZE)sleep();
        while(1){
            i = produce();
            put(i);
        }
        count++;
        if(count == 1)wakeup(consumer());
    }
    void consumer(){
        int i;
        if(count == 0)sleep();
        while(1){
            i = get();
            consume(i);
        }
        count--;
        if(count == MAXSIZE -1)wakeup(producer);
    }
    int theProduct;
    int produce(){
        return theProduct++;
    }
    void consume(int i){
        printf("%i", i);
    }
}
