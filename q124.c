// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *fs, *fd;
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    // Open source file in read mode
    fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(fs);
        return 1;
    }

    // Copy content char by char
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    // Close files
    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", dest);

    return 0;
}
