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
lcdMainOnBottom();
consoleDemoInit();
sprintf(Text, "%s", MyName);
iprintf(Text);
while(1){Pressed = keysDown();Held = keysHeld();Released = keysUp();};
while(1){while(Pressed = BIT(0)) {sprintf(Text2, "%s", MyName2);iprintf(Text2);};};
powerOn(POWER_ALL_2D);
while(1) {
swiWaitForVBlank();
}
}