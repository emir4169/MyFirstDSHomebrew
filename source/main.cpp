#include <nds.h>
#include <stdio.h>
char Text[100];
char MyName[100]="AAAAAAAAA";
int main(void) {
 
consoleDemoInit();
sprintf(Text, "%s", MyName);
iprintf(Text);
powerOn(POWER_ALL_2D);
while(1) {
swiWaitForVBlank();
}
}