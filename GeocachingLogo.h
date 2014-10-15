
/*

*/

#ifndef GeocachingLogo_H
#define GeocachingLogo_H


#include "Arduino.h"
#include "LiquidCrystal.h"


class GeocachingLogo {
  
  public:
    
    LiquidCrystal *lcd;
      
    GeocachingLogo(LiquidCrystal *alcd);
    void draw(uint8_t x, uint8_t y);
    void prepareFont();
  private:

}; //end of class GeocachingLogo



#endif
