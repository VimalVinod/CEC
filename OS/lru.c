#include <stdio.h>

int findLRU(int time[], int frames) {
    int min = time[0], pos = 0;
    for (int i = 1; i < frames; i++) {
        if (time[i] < min) {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

void LRU(int pages[], int n, int frames) {
    int frame[frames], time[frames], page_faults = 0, counter = 0;

    for (int i = 0; i < frames; i++) frame[i] = -1;

    for (int i = 0; i < n; i++) {
        int found = 0, pos;

        // Check if page exists in frame (Hit)
        for (int j = 0; j < frames; j++) {
            if (frame[j] == pages[i]) {
                found = 1;
                time[j] = counter++;
                break;
            }
        }

        if (!found) {  // Miss
            if (i < frames) pos = i;  
            else pos = findLRU(time, frames);
            
            frame[pos] = pages[i];
            time[pos] = counter++;
            page_faults++;
            printf("Page %d -> Miss | Frames: ", pages[i]);
        } else {
            printf("Page %d -> Hit  | Frames: ", pages[i]);
        }

        for (int j = 0; j < frames; j++) 
            printf("%d ", (frame[j] != -1) ? frame[j] : -1);
        printf("\n");
    }

    printf("Total Page Faults: %d\n", page_faults);
}

int main() {
    int n, frames;
    printf("Enter number of pages: ");
    scanf("%d", &n);
    int pages[n];
    printf("Enter page reference sequence: ");
    for (int i = 0; i < n; i++) scanf("%d", &pages[i]);
    
    printf("Enter number of frames: ");
    scanf("%d", &frames);

    LRU(pages, n, frames);
    return 0;
}

