#include <nds.h>
#include <stdio.h>
char Text[100];
char Text2[100];
char RealText[100]="AAAAAAAAA";
char RealText2[100] ="HAI";
u16 Pressed;
u16 Held;
u16 Released;
int main(void) {
lcdMainOnBottom();
consoleDemoInit();
sprintf(Text, "%s", RealText);
iprintf(Text);
powerOn(POWER_ALL_2D);
while(1) {
    if (Pressed & KEY_B) break;
    scanKeys();
    /* Scan Input. */
    Pressed  = keysDown();
    Held     = keysHeld();
    Released = keysUp();

    /* Check pressed state. */
    if (Pressed) { // Or if (Pressed & KEY_A) for a press.
        iprintf("%s", RealText2);
    }

    swiWaitForVBlank();
}
}