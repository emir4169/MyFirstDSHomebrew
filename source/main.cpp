#include <nds.h>
#include <stdio.h>
char Text[100];
char Text2[100];
char MyName[100]="AAAAAAAAA";
char MyName2[100] ="HAI";
u16 Pressed;
u16 Held;
u16 Released;
int main(void) {
 while(1) {Pressed = keysDown();Held = keysHeld();Released = keysUp();};
 while (Pressed = BIT(0)) {sprintf(Text2, "%s", MyName2);iprintf(Text2);};
consoleDemoInit();
sprintf(Text, "%s", MyName);
iprintf(Text);
powerOn(POWER_ALL_2D);
while(1) {
swiWaitForVBlank();
}
}