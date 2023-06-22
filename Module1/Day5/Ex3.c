#include <stdio.h>

// Define a structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};


void calculateTimeDifference(struct Time t1, struct Time t2, struct Time *diff) {
    int seconds1, seconds2, timeDiff;
    
    seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    timeDiff = seconds2 - seconds1;
    
    diff->hours = timeDiff / 3600;
    timeDiff %= 3600;
    diff->minutes = timeDiff / 60;
    diff->seconds = timeDiff % 60;
}

int main() {
    struct Time startTime, endTime, diffTime;
    
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    
    calculateTimeDifference(startTime, endTime, &diffTime);
    
    printf("\nTime difference: %d hours, %d minutes, %d seconds\n",
           diffTime.hours, diffTime.minutes, diffTime.seconds);
    
    return 0;
}
