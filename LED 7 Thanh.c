// Chao mung ban den voi www.mualinhkien.vn
// Huong dan su dung kit 8051
// Huong dan Lap trinh LED 7 Thanh


#include <REGX51.H>

unsigned char maLED[10] = {0x03,0x9F,0x25,0x0D,0x99,0x49,0x41,0x1F,0X01,0x09};
int i;

void delay(int time){
	while(time--);
}

void main(){
	P0 = 0;
	while(1){
    	for(i = 0; i < 10; i++){
			P1 = maLED[i];
			delay(60000);
			}
		}
	}
