#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// an example of using qsort with an array of strings
// also see https://man7.org/linux/man-pages/man3/qsort.3.html

// a comparison function that will be used by qsort()
int comparator(const void *element1, const void * element2){
    int result=0;
    result=-strcmp(element1, element2);
    return result;
}

#define ARR_SIZE 5
#define WORD_SIZE 100
int main(){
    char words[ARR_SIZE][WORD_SIZE]={"apple", "Banana", "strawberry", "dragonfruit", "tomato"};

    qsort(words,ARR_SIZE,WORD_SIZE, comparator);

    for(int i=0; i< ARR_SIZE; i++){     // verify the correctness of sorting
        printf("%s\n", words[i]);
    }
}