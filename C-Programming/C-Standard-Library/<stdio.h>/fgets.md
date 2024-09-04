#stdio

```c
#include <stdio.h>

char *fgets(char          *str, int count, FILE          *stream) //until C99
char *fgets(char *restrict str, int count, FILE *restrict stream) //since C99
```

Reads at most (count - 1) characters from the given file stream and stores them in the character array pointed to by `str`. Parsing stops if a newline character is found, in which case `str` will contain that newline character, or if end-of-file occurs. If bytes are read and no errors occur, writes a null character at the position immediately after the last character written to `str`.

### Parameters
| *str* | pointer to an element of a char array |
| ---- | ---- |
| *count* | maximum number of characters to write (typically the length of `str`) |
| *stream* | file stream to read the data from |
### Return value

`str` on success, null pointer on failure.


### Example

```c
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    FILE* tmpf = tmpfile();
    // Alan Turing\n
    // John von Neumann\n
    // Alonzo Church\n
    fputs("Alan Turing\n", tmpf);
    fputs("John von Neumann\n", tmpf);
    fputs("Alonzo Church\n", tmpf);
 
    rewind(tmpf);
    
    char buf[8];
    // Alan Tu
    // ring\n
    // Alonzo Church\n
    while (fgets(buf, sizeof buf, tmpf) != NULL)
          printf("\"%s\"\n", buf);
 
    if (feof(tmpf))
       puts("End of file reached");
}
```
```text
"Alan Tu"
"ring
"
"John vo"
"n Neuma"
"nn
"
"Alonzo "
"Church
"
End of file reached
```