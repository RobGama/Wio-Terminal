/*
 *  Robson Gama da Paixão
 *  
 *  Playing with the Seeed TFT LCD Library (included inside the Wio Terminal Board Library)
 *  https://github.com/Seeed-Studio/Seeed_Arduino_LCD
 *  
 */

/*
 * Impotant information:
 * The Wio Terminal LCD screen is 2.4 inch, 320*240
 */

#include"TFT_eSPI.h"
TFT_eSPI tft;

void setup() {
    tft.begin();
    tft.setRotation(3); 
    
    tft.fillScreen(TFT_NAVY); // fills entire the screen with colour=NAVY(0,0,128)
    
}
 
void loop() {
 
  tft.drawPixel(4,7,TFT_WHITE); //drawing a white pixel at (4,7)
  delay(250);
      
  tft.drawLine(0,0,160,120,TFT_WHITE); //drawing a white line from (x0=0, y0=0) to (x1=160,y1=120)
  tft.drawLine(320,0,160,120,TFT_WHITE); //drawing a white line from (x0=320, y0=0) to (x1=160,y1=120)
  tft.drawLine(0,240,160,120,TFT_WHITE); //drawing a white line from (x0=0, y0=240) to (x1=160,y1=120)
  tft.drawLine(320,240,160,120,TFT_WHITE); //drawing a white line from (x0=320, y0=240) to (x1=160,y1=120)
  delay(250);
  
  tft.drawFastHLine(0,120,320,TFT_WHITE); //A white horizontal line starting from (0,120)  
  tft.drawFastVLine(160,0,240,TFT_WHITE); // A white vertical line starting from (160,0)
  delay(250);
  
  tft.drawRect(120,90,80,60,TFT_WHITE); // A 80x60 white rectangle starting from (120,90)
  delay(250);
  tft.fillRect(120,90,80,60,TFT_YELLOW); // A 100x100 black rectangle starting from (110, 70)
  delay(250);
  
  tft.drawCircle(160,120,25,TFT_RED); //A white circle origin at (160, 120) with radius of 25
  delay(250);
  tft.fillCircle(160,120,5,TFT_RED); //A filled red circle origin at (160, 120) with radius of 5
  delay(250);
  
  tft.drawTriangle(160,90,100,150,220,150,TFT_RED); //A red line triangle with points at (160,90), (100,150) and (220,150)
  delay(250);
  tft.fillTriangle(160,90,100,150,220,150,TFT_CYAN); //A cyan filled triangle with points at (160,90), (100,150) and (220,150)
  delay(250);
  
  tft.drawRoundRect(40,30,50,50,10,TFT_CYAN); //A 50x50 cyan roudned rectangle starting from (40, 30) with corner radius of 10
  delay(250);  
  tft.fillRoundRect(40,30,50,50,10,TFT_LIGHTGREY); //A 50x50 light grey roudned rectangle starting from (40, 30) with corner radius of 10
  delay(250);

  for(int i=0; i<5; i++){
    tft.fillScreen(TFT_LIGHTGREY);
    
    tft.drawChar(64,60,'R',TFT_BLACK, TFT_WHITE,3); // Draw a black character 'R' from (64,60) with background colour as white and size as 3 (range=1 to 7)
    tft.drawChar(96,60,'O',TFT_BLACK, TFT_WHITE,3);
    tft.drawChar(128,60,'B',TFT_BLACK, TFT_WHITE,3);
    tft.drawChar(160,60,'S',TFT_BLACK, TFT_WHITE,3);
    tft.drawChar(192,60,'O',TFT_BLACK, TFT_WHITE,3);
    tft.drawChar(224,60,'N',TFT_BLACK, TFT_WHITE,3);
        
    tft.setTextColor(TFT_RED);
    tft.setTextSize(2);
    tft.drawString("Wio Terminal is awesome!", 20, 120);
    
    delay(1000);      
  }
  
  tft.fillScreen(TFT_NAVY);
  delay(250);

}
