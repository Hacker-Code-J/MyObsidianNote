
```c
void printProgressBar(int current, int total) {
	int width = 50; // Width of the progress bar
    float progress = (float)current / total;
    int pos = width * progress;

    printf("\r[");
    for (int i = 0; i < width; ++i) {
        if (i < pos) printf("=");
        else if (i == pos) printf(">");
        else printf(" ");
    }
    printf("] %d%% (%d/%d)", (int)(progress * 100.0), current, total);
    fflush(stdout); // Flush the output buffer
}
```