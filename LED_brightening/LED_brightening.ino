#include<avr/io.h>
#include<avr/wdt.h>

int main(void){
  //MegaのポートBの6,7(12,13)を出力に設定
  DDRB =  0b11000000;
  //6,7をHighに設定
  PORTB = 0b11000000;
  wdt_enable(WDTO_15MS);//ウォッチドッグタイマを設定する
  
  for(;;){
    wdt_reset();//ウォッチドッグタイマをリセット
  }
  return 0;
}
