#include <stdio.h>
#include <time.h>

int main() {
    time_t startTime, endTime;
    double timeDiff;

    // Get the start and end times
    startTime = time(NULL);
    // Perform some operations...
    endTime = time(NULL);

    // Calculate the time difference
    timeDiff = difftime(endTime, startTime);

    // Print the time difference
    printf("The elapsed time is %.2f seconds.\n", timeDiff);

    return 0;
}
