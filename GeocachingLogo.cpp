/*



*/


#include "GeocachingLogo.h"


GeocachingLogo::GeocachingLogo(LiquidCrystal *alcd) : lcd(alcd) {

}

void GeocachingLogo::draw(uint8_t x, uint8_t y) {
  this->prepareFont();
  
  this->lcd->setCursor(x, y);
  this->lcd->write((uint8_t)1);
  this->lcd->write((uint8_t)2);
  this->lcd->write((uint8_t)3);
  this->lcd->write((uint8_t)4);

  this->lcd->setCursor(x, y+1);
  this->lcd->write((uint8_t)5);
  this->lcd->write((uint8_t)6);
  this->lcd->write((uint8_t)7);
  this->lcd->write(" "); 

}


void GeocachingLogo::prepareFont() {
  uint8_t L0[8] = {
    0b00011,
    0b00011,
    0b11000,
    0b01111,
    0b00011,
    0b00010,
    0b00110,
    0b01100
  };
  this->lcd->createChar(1, L0);

  L0[0] = 0b01000;
  L0[1] = 0b11000;
  L0[2] = 0b10000;
  L0[3] = 0b10000;
  L0[4] = 0b11000;
  L0[5] = 0b01100;
//    L0[6] = 0b00110;
  L0[7] = 0b00000;
  this->lcd->createChar(2, L0);

  L0[0] = 	0b00000;
  L0[1] = 	0b11110;
  L0[2] = 	0b00001;
  L0[3] = 	0b00000;
  L0[4] = 	0b00000;
  L0[5] = 	0b00000;
  L0[6] = 	0b00000;
//    L0[7] = 	0b00000;
  this->lcd->createChar(3, L0);

  L0[0] =	0b00100;
  L0[1] =	0b00100;
  L0[2] =	0b00100;
  L0[3] =	0b00010;
//    L0[4] =	0b00000;
//    L0[5] =	0b00000;
//    L0[6] =	0b00000;
//    L0[7] =	0b00000;
  this->lcd->createChar(5, L0);

  L0[0] = 	0b00000;
  L0[1] = 	0b00000;
  L0[2] = 	0b00000;
  L0[3] = 	0b00000;
  L0[4] = 	0b10000;
  L0[5] = 	0b01000;
  L0[6] = 	0b01000;
  L0[7] = 	0b01000;
  this->lcd->createChar(4, L0);

//    L0[0] =	0b00000;
//    L0[1] =	0b00000;
//    L0[2] =	0b00000;
//    L0[3] =	0b00000;
  L0[4] =	0b00000;
  L0[5] =	0b10000;
  L0[6] =	0b01110;
  L0[7] =	0b00000;
  this->lcd->createChar(6, L0);

  L0[0] =	0b11111;
  L0[1] =	0b11110;
  L0[2] =	0b01100;
  L0[3] =	0b01000;
  L0[4] =	0b00100;
  L0[5] =	0b00100;
  L0[6] =	0b00010;
  L0[7] =	0b00010;
  this->lcd->createChar(7, L0);
}


//