//
//  main.c
//  main
//
//  Created by Mihail Karamanolev on 9/20/23.
//

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    clock_t start_time, end_time;
    double execution_time, X, Y, Z;

    // takes the time of when the benchmark starts
    start_time = clock();

    sleep(10);
    
    
    // takes the time of when the benchmark ends
    end_time = clock();
    execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", execution_time);
    
    return 0;
    
}

