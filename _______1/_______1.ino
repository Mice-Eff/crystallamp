
/*
 POWERED BY MICE_EFF https://www.youtube.com/channel/UCskKehuN94_IfqK1HFSkfyQ
 */

#include "Adafruit_NeoPixel.h"
#define LED_COUNT 3 // кол-во светодиодов
#define LED_PIN 1 // пин ленты
int button=2; // пин кнопки
 int a = 0;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

 
void setup() {
  strip.begin();
  strip.show();
strip.setBrightness(240);// установка яркости 0 - 255
  pinMode(button, INPUT);
}

void loop() {
 if(digitalRead(button) == HIGH && a==0 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(255,0, 0)); // ПЕРВЫЙ РЕЖИМ. Красный цвет.                                                                            
    strip.show();    
    delay(500); 
    a=1;
 }
 }

if(digitalRead(button) == HIGH && a==1 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(0, 255,0));  //ВТОРОЙ РЕЖИМ. Зеленый цвет.    ( Цвет можно сменить, сменив три числа  (0, 255,0), первое число это RED канал, Второе-GREEN, Последнее-BLUE.
    strip.show();    
    delay(500);
    }
    a=2;
}
if(digitalRead(button) == HIGH && a==2 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(0, 0, 255)); // ТРЕТИЙ РЕЖИМ. Синий цвет.                                                                         
    strip.show();    
    delay(500);
    }
    a=3;
}
if(digitalRead(button) == HIGH && a==3 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(255, 255, 255)); //  ЧЕРТВЕРТЫЙ РЕЖИМ. Белый цвет.                                                                       
    strip.show();    
    delay(500);
    }
    a=4;
}
 if(digitalRead(button) == HIGH && a==4 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(200, 50, 50)); // ПЯТЫЙ РЕЖИМ. Розовый цвет.                                                                        
    strip.show();    
    delay(500);
    }
    a=5;
}
 if(digitalRead(button) == HIGH && a==5 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(50, 100, 50)); // ШЕСТОЙ РЕЖИМ. Аквамариновый цвет                                                                       
    strip.show();    
    delay(500);
    }
    a=6;
}
 if(digitalRead(button) == HIGH && a==6 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(65, 20, 70)); // СЕДЬМОЙ РЕЖИМ. Фиолетовый цвет.                                                                        
    strip.show();    
    delay(500);
    }
    a=7;
}
 if(digitalRead(button) == HIGH && a==7 ){

    for (int i = 0; i < LED_COUNT; i++) { 
    strip.setPixelColor(i, strip.Color(0, 0, 0)); //                                                                          
    strip.show();    
    delay(500);
    }
    a=0;
}
}


                                                       
                                                        
                                                        
                                 
                                 
              

 

