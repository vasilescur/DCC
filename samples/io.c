// Defines basic input/output functionality

void putc(int c) {
    // Parameter `c` will be the first value in the stack, so it will be
    // accessible by lw from $r6

    // $r1 will be at offset 0 on the stack
    // That's our parameter
    asm ("
        lw      $r1,    0($r6);
        output  $r1;
    ");

    return;
}

int getc() {
    asm ("
        input   $r5;
    ");

    return; // Implicit return $r5
}