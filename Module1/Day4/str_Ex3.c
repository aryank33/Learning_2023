#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeTotalSeconds(char *timeString) {
    int hours, minutes, seconds;
    
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);  
    
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;  
    
    return totalSeconds;
}

int main() {
    char timeString[9];
    
    printf("Enter the time in the format hh:mm:ss: ");
    fgets(timeString, sizeof(timeString), stdin);
    
    if (timeString[strlen(timeString) - 1] == '\n') {
        timeString[strlen(timeString) - 1] = '\0';
    }
    
    int totalSeconds = computeTotalSeconds(timeString);
    
    printf("Total seconds: %d\n", totalSeconds);
    
    return 0;
}
