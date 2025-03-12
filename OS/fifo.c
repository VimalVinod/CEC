#include <stdio.h>

void FIFO(int pages[], int n, int frames) {
    int frame[frames], front = 0, page_faults = 0;
    
    for (int i = 0; i < frames; i++) frame[i] = -1;  // Initialize empty frames
    
    for (int i = 0; i < n; i++) {
        int found = 0;
        
        // Check if page is already in frame
        for (int j = 0; j < frames; j++) {
            if (frame[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        if (!found) {  // Page fault occurs
            frame[front] = pages[i];  // Replace oldest page
            front = (front + 1) % frames;  // Move FIFO pointer
            page_faults++;
        }

        // Print current frame state
        printf("Page %d -> ", pages[i]);
        for (int j = 0; j < frames; j++)
            printf("%d ", frame[j]);
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

    FIFO(pages, n, frames);
    return 0;
}

