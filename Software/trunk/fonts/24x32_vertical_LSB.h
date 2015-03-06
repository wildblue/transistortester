/* currently only 6 icon elements from total 14 are used */
#define ICON_ELEMENTS 14
#if (ICON_TYPE == 1)
const unsigned char PROGMEM bigfont[ICON_ELEMENTS][96]= {
/* Nick's thin icons */
{ /* code 000 N-P-N thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x1E, 0x21, 0x21, 0x21,
  0x12, 0x00, 0x00, 0x00,  0x00, 0x80, 0x40, 0x3F,

  0x00, 0x7E, 0x4A, 0x4A,  0x4A, 0x34, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFC,
  0x10, 0x08, 0x04, 0x02,  0x01, 0x00, 0x00, 0x00,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x7F,
  0x10, 0xA0, 0xC0, 0xE0,  0xF0, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFC, 0x94, 0x94, 0x94,
  0x85, 0x01, 0x01, 0x01,  0x01, 0x02, 0x04, 0xF8
},

{ /* code 001 N-E-IGBT thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x1E, 0x21, 0x21, 0x21,
  0x12, 0xC0, 0x80, 0x00,  0x80, 0x40, 0x20, 0x1F,
                                           
  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xF8, 0x00, 0x00, 0xDE,
  0x88, 0x07, 0x07, 0x07,  0x06, 0x04, 0x00, 0x00,
                                           
  0x00, 0x04, 0x04, 0x04,  0x04, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x04, 0x04,  0x07, 0x00, 0x00, 0x3D,
  0x08, 0x11, 0xA2, 0xC4,  0xE0, 0xF0, 0x00, 0x00,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFC, 0x94, 0x94, 0x94,
  0x84, 0x01, 0x01, 0x01,  0x01, 0x01, 0x02, 0xFC
},

{ /* code 002 N-E-MOS thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x3F, 0x21, 0x21, 0x12,
  0x0C, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFF,

  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xF8, 0x00, 0x00, 0xDE,
  0x84, 0x84, 0xC4, 0xE4,  0xF4, 0x84, 0x84, 0x07,

  0x00, 0x04, 0x04, 0x04,  0x04, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x04, 0x04,  0x07, 0x00, 0x00, 0x3D,
  0x10, 0x10, 0x11, 0x13,  0x17, 0x10, 0x1F, 0xF0,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x48, 0x94, 0x94, 0x94,
  0x64, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFF
},

{ /* code 003 N-JFET thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x3F, 0x21, 0x21, 0x12,
  0x0C, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFF,
                                           
  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x00, 0xE0, 0xC0, 0x80,  0x00, 0x00, 0xFC, 0xFC,
  0x08, 0x08, 0x08, 0x08,  0x08, 0x08, 0x08, 0x0F,
                                           
  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x0F, 0x07, 0x03,  0x01, 0x01, 0x7F, 0x7F,
  0x20, 0x20, 0x20, 0x20,  0x20, 0x20, 0x20, 0xE0,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x48, 0x94, 0x94, 0x94,
  0x64, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFF
},

{ /* code 004 TRIAC thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0xFF, 0x00, 0x78,
  0x24, 0x22, 0x7E, 0x00,  0x64, 0x52, 0x52, 0x4C,
                                           
  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x84,
  0xC4, 0xE4, 0xF4, 0xFC,  0xF4, 0xEF, 0xDC, 0xBC,
  0xFC, 0xBC, 0x9C, 0x8C,  0x84, 0x00, 0x00, 0x00,
                                           
  0x00, 0x04, 0x04, 0x04,  0x04, 0x04, 0x04, 0x04,
  0x04, 0x02, 0x01, 0x00,  0x00, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0xFF, 0x00, 0xF0,
  0x48, 0x44, 0xFC, 0x00,  0x88, 0xFC, 0x80, 0x00
},

{ /* code 005 THIRISTOR thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0xFF, 0x00, 0x00,
  0x00, 0x7C, 0x12, 0x11,  0x12, 0x7C, 0x00, 0x00,
                                           
  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x82, 0x86, 0x8E, 0x9E,  0xBE, 0xFF, 0xBE, 0x9E,
  0x8E, 0x86, 0x82, 0x00,  0x00, 0x00, 0x00, 0x00,
                                           
  0x00, 0x04, 0x04, 0x04,  0x04, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x04, 0x02,  0x01, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0xFF, 0x00, 0x00,
  0x00, 0x78, 0x84, 0x84,  0x84, 0x48, 0x00, 0x00
},
 #if (ICON_ELEMENTS > 6)
{ /* code 006 inductance thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0xE0, 0x10,  0x08, 0x08, 0x0F, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x38, 0x45,  0x82, 0x82, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x8E, 0x51,  0x20, 0x20, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x03, 0x04,  0x08, 0x08, 0x78, 0x00
},

{ /* code 007 RESISTOR thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x80, 0x80,  0xFC, 0x80, 0x80, 0x80,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFF,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0xFF,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x01, 0x01,  0x3F, 0x01, 0x01, 0x01
},

{ /* code 008 capacitor thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xC0, 0x00, 0x00, 0x00,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x30, 0x30, 0x30,  0x3F, 0x30, 0x30, 0x30,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x03, 0x03,  0xFF, 0x03, 0x03, 0x03,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x03, 0x00, 0x00, 0x00
},

{ /* code 009 DIODE C-A (UP-DOWN) thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xC0, 0x00, 0x00, 0x00,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x20, 0xA0,  0xFF, 0xA0, 0x20, 0x20,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x02, 0x03, 0x03,  0xFF, 0x03, 0x03, 0x02,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x03, 0x00, 0x00, 0x00
},

{ /* code 010 2DIODE C-A+C-A (UP-DOWN) thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x20, 0xA0,  0xFF, 0xA0, 0x20, 0x20,
                                           
  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x82, 0x83, 0xC3,  0xFF, 0xC3, 0x03, 0x02,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x40, 0x41,  0xFF, 0x41, 0x40, 0x40,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x06, 0x07,  0xFF, 0x07, 0x06, 0x04
},

{ /* code 011 2DIODE A-2C-A (UP-DOWN) thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x60, 0xE0,  0xFF, 0xE0, 0x60, 0x20,
                                           
  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x82, 0x82, 0xC2,  0xFF, 0xC2, 0x02, 0x02,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x40, 0x41,  0xFF, 0x41, 0x40, 0x40,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x06, 0x07,  0xFF, 0x07, 0x06, 0x04
},

{ /* code 012 2DIODE C-2A-C (UP-DOWN) thin */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x20, 0xA0,  0xFF, 0xA0, 0x20, 0x20,
                                           
  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x82, 0x83, 0xC3,  0xFF, 0xC3, 0x03, 0x02,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0xC0, 0xC1,  0xFF, 0xC1, 0xC0, 0x40,
                                           
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x04, 0x05,  0xFF, 0x05, 0x04, 0x04
},

{ /* code 013 2Resistor thin */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x04, 0x04, 0x07, 0x04, 0x04, 0xFC,

  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x80, 0x9F, 0x90, 0xD0, 0xF0, 0xD0, 0x10, 0x1F,

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x04, 0x05, 0x07, 0x05, 0x04, 0xFC,

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x10, 0x10, 0x70, 0x10, 0x10, 0x1F
} 
 #endif
}; 
#elif (ICON_TYPE == 2)
/* Nick's bold icons */
const unsigned char PROGMEM bigfont[ICON_ELEMENTS][96]= {
{  /* code 000 N-P-N bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x1E, 0x21, 0x21, 0x21,
  0x12, 0x00, 0x00, 0x00,  0x80, 0xC0, 0xFF, 0x7F,

  0x00, 0x7E, 0x4A, 0x4A,  0x4A, 0x34, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0xFC,  0x80, 0xC0, 0xE0, 0x70,
  0x38, 0x1C, 0x0E, 0x07,  0x03, 0x01, 0x00, 0x00,

  0x00, 0x03, 0x03, 0x03,  0x03, 0x03, 0x03, 0x03,
  0x03, 0x03, 0x7F, 0x7F,  0x07, 0x0F, 0x1C, 0xB8,
  0xF0, 0xE0, 0xF0, 0xF8,  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFC, 0x94, 0x95, 0x95,
  0x85, 0x01, 0x01, 0x03,  0x07, 0x0E, 0xFC, 0xF8

},

{ /* code 001 N-E-IGBT bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x41, 0x41,  0x41, 0x22, 0x00, 0xE0,
  0xC0, 0x80, 0xC0, 0xE0,  0x70, 0x18, 0x0F, 0x07,

  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x00, 0xF8, 0xF8, 0x00,  0xDE, 0xDE, 0x8C, 0x07,
  0x07, 0x07, 0x07, 0x06,  0x04, 0x00, 0x00, 0x00,

  0x00, 0x0C, 0x0C, 0x0C,  0x0C, 0x0C, 0x0C, 0x0C,
  0x0C, 0x0F, 0x0F, 0x00,  0x7B, 0x7B, 0x31, 0x63,
  0xC6, 0x8C, 0x98, 0xC0,  0xE0, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x94, 0x94,  0x94, 0x94, 0x00, 0x04,
  0x06, 0x07, 0x07, 0x07,  0x0F, 0x18, 0xF0, 0xE0

},

{ /* code 002 N-E-MOS bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x3F, 0x21, 0xA1, 0x92,
  0x0C, 0x00, 0x00, 0x00,  0x00, 0x00, 0xFF, 0xFF,

  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF8,  0xF8, 0x00, 0xEF, 0xEF,
  0x86, 0xC6, 0xE6, 0xF6,  0x86, 0x86, 0x87, 0x07,

  0x00, 0x0C, 0x0C, 0x0C,  0x0C, 0x0C, 0x0C, 0x0C,
  0x0C, 0x0C, 0x0C, 0x0F,  0x0F, 0x00, 0xF7, 0xF7,
  0x61, 0x63, 0x67, 0x6F,  0x61, 0x7F, 0xFF, 0xE0,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x48, 0x94, 0x95, 0x95,
  0x64, 0x00, 0x00, 0x00,  0x00, 0x00, 0xFF, 0xFF

},

{ /* code 003 N-JFET bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x3F, 0x21, 0x21, 0x12,
  0x0C, 0x00, 0x00, 0x00,  0x00, 0x00, 0xFF, 0xFF,

  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x00,
  0x00, 0xE0, 0xC0, 0x80,  0x00, 0x00, 0xFF, 0xFF,
  0x0C, 0x0C, 0x0C, 0x0C,  0x0C, 0x0C, 0x0F, 0x0F,

  0x00, 0x03, 0x03, 0x03,  0x03, 0x03, 0x03, 0x03,
  0x03, 0x1F, 0x0F, 0x07,  0x03, 0x03, 0xFF, 0xFF,
  0x60, 0x60, 0x60, 0x60,  0x60, 0x60, 0xE0, 0xE0,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x48, 0x94, 0x95, 0x95,
  0x64, 0x00, 0x00, 0x00,  0x00, 0x00, 0xFF, 0xFF

},

{ /* code 004 TRIAC bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFF, 0xFF, 0x00, 0x78,
  0x24, 0x22, 0x7E, 0x00,  0x64, 0x52, 0x52, 0x4C,

  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x86,
  0xC6, 0xE6, 0xF6, 0xFE,  0xF7, 0xEF, 0xDE, 0xBE,
  0xFE, 0xBE, 0x9E, 0x8E,  0x86, 0x00, 0x00, 0x00,

  0x00, 0x0C, 0x0C, 0x0C,  0x0C, 0x0C, 0x0C, 0x0D,
  0x0D, 0x0D, 0x07, 0x03,  0xFF, 0xFF, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFF, 0xFF, 0x00, 0xF0,
  0x48, 0x44, 0xFC, 0x00,  0x88, 0xFC, 0x80, 0x00

},

{ /* code 005 THIRISTOR bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x7C, 0x12, 0x11,  0x12, 0x7C, 0x00, 0x00,

  0x00, 0x3C, 0x42, 0x52,  0x52, 0x34, 0x00, 0x02,
  0x86, 0x8E, 0x9E, 0xBE,  0xFF, 0xFF, 0xBE, 0x9E,
  0x8E, 0x86, 0x82, 0x00,  0x00, 0x00, 0x00, 0x00,

  0x00, 0x0C, 0x0C, 0x0C,  0x0C, 0x0C, 0x0C, 0x0C,
  0x0D, 0x0D, 0x07, 0x03,  0xFF, 0xFF, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x00,  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x78, 0x84, 0x84,  0x84, 0x48, 0x00, 0x00

},

 #if (ICON_ELEMENTS > 6)
{ /* code 006 inductance bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xF0, 0xF0, 0x00, 0xF0,  0xF8, 0x9C, 0x0E, 0x0E,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x00, 0x78,  0xFD, 0xCF, 0x87, 0x02,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x00, 0x3C,  0x7E, 0xE7, 0xC3, 0x81,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x1F, 0x1F, 0x00, 0x1E,  0x3F, 0x73, 0xE1, 0xE0
},

{ /* code 007 RESISTOR bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x80, 0x80, 0x80, 0xFC,  0xFC, 0x80, 0x80, 0x80,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x01, 0x01,  0x01, 0x01, 0xFF, 0xFF,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x80, 0x80,  0x80, 0x80, 0xFF, 0xFF,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x3F,  0x3F, 0x01, 0x01, 0x01
},

{ /* code 008 capacitor bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xC0,  0xC0, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x38, 0x38, 0x38, 0x3F,  0x3F, 0x38, 0x38, 0x38,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x07, 0x07, 0x07, 0xFF,  0xFF, 0x07, 0x07, 0x07,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03,  0x03, 0x00, 0x00, 0x00
},

{ /* code 009 DIODE C-A (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xC0,  0xC0, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x30, 0xB0, 0xFF,  0xFF, 0xB0, 0x30, 0x30,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x06, 0x07, 0x07, 0xFF,  0xFF, 0x07, 0x07, 0x06,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03,  0x03, 0x00, 0x00, 0x00
},

{ /* code 010 2DIODE C-A+C-A (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x30, 0xB0, 0xFF,  0xFF, 0xB0, 0x30, 0x30,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x86, 0x87, 0xC7, 0xFF,  0xFF, 0xC7, 0x07, 0x06
,
  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x61, 0x61, 0x63, 0xFF,  0xFF, 0x63, 0x60, 0x60,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x0C, 0x0E, 0x0F, 0xFF,  0xFF, 0x0F, 0x0E, 0x0C
},

{ /* code 011 2DIODE A-2C-A (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x70, 0xF0, 0xFF,  0xFF, 0xF0, 0x70, 0x30,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x86, 0x86, 0xC6, 0xFF,  0xFF, 0xC6, 0x06, 0x06,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x61, 0x61, 0x63, 0xFF,  0xFF, 0x63, 0x60, 0x60,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x0C, 0x0E, 0x0F, 0xFF,  0xFF, 0x0F, 0x0E, 0x0C
},

{ /* code 012 2DIODE C-2A-C (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x30, 0xB0, 0xFF,  0xFF, 0xB0, 0x30, 0x30,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x86, 0x87, 0xC7, 0xFF,  0xFF, 0xC7, 0x07, 0x06,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x61, 0xE1, 0xE3, 0xFF,  0xFF, 0xE3, 0xE0, 0x60,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x0C, 0x0C, 0x0D, 0xFF,  0xFF, 0x0D, 0x0C, 0x0C
},

{ /* code 013 2Resistor bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFC, 0xFC, 0x0C, 0x0F,  0x0F, 0x0C, 0xFC, 0xFC,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x8F, 0x8F, 0xCC, 0xFC,  0xFC, 0xCC, 0x0F, 0x0F,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0xF1, 0xF1, 0x33, 0x3F,  0x3F, 0x33, 0xF0, 0xF0,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x3F, 0x3F, 0x30, 0xF0,  0xF0, 0x30, 0x3F, 0x3F
}
 #endif
};
#else

const unsigned char PROGMEM bigfont[ICON_ELEMENTS][96]= {
/* old icons from Wolfgang */
{  /* code 000 N-P-N bold old */

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x1e, 0x21, 0x21,
  0x21, 0x12, 0x00, 0x80,  0xc0, 0xe0, 0x7f, 0x3f,

  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0xfe, 0xfe,  0xc0, 0xe0, 0x70, 0x38,
  0x1c, 0x0e, 0x07, 0x03,  0x01, 0x00, 0x00, 0x00,

  0xfd, 0x95, 0x95, 0x95,  0x69, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x7f, 0x7f,  0x03, 0x07, 0x8e, 0xdc,
  0xf8, 0xf0, 0xf8, 0xfc,  0x80, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0xfc, 0x94, 0x94,
  0x94, 0x84, 0x00, 0x01,  0x03, 0x07, 0xfe, 0xfc,

},

{ /* code 001 N-E-IGBT bold old */

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1e, 0x21, 0x21,  0xa1, 0x92, 0x00, 0xf0,
  0xe0, 0xc0, 0xe0, 0x70,  0x38, 0x1c, 0x0f, 0x07,

  0x00, 0x80, 0x80, 0x80,  0x00, 0x00, 0x00, 0x00,
  0x00, 0xff, 0xff, 0x00,  0xdf, 0xdf, 0x8e, 0x07,
  0x03, 0x03, 0x03, 0x03,  0x02, 0x00, 0x00, 0x00,

  0xcf, 0xd0, 0xd4, 0xd4,  0xcd, 0xc0, 0xc0, 0xc0,
  0xc0, 0xff, 0xff, 0x00,  0xfb, 0xfb, 0x71, 0xe3,
  0xc6, 0x8c, 0xc0, 0xe0,  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xfc, 0x94, 0x94, 0x94,  0x85, 0x01, 0x04, 0x06,
  0x07, 0x07, 0x07, 0x0f,  0x1c, 0x38, 0xf0, 0xe0,
},

{ /* code 002 N-E-MOS bold old */

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x80, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x3f, 0x21, 0x21, 0x21,  0x1e, 0x00, 0xff, 0xff,

  0xe6, 0x16, 0x96, 0x96,  0xa6, 0x06, 0xfe, 0xfe,
  0x00, 0xdf, 0xdf, 0x06,  0x86, 0xc6, 0xe6, 0x06,
  0x06, 0x06, 0x06, 0x06,  0x06, 0x06, 0x07, 0x07,

  0x01, 0x02, 0x02, 0x02,  0x01, 0x00, 0xff, 0xff,
  0x00, 0xef, 0xef, 0x83,  0x87, 0x8f, 0x9f, 0x83,
  0x83, 0x83, 0x83, 0x83,  0x83, 0x83, 0xff, 0xff,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x01, 0x01,
  0x00, 0x07, 0x07, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x49, 0x95, 0x95, 0x95,  0x65, 0x01, 0xff, 0xff,

},

{ /* code 003 N-JFET bold old */

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x80,  0x80, 0x00, 0x00, 0x3f,
  0x21, 0x21, 0x21, 0x1e,  0x00, 0xff, 0xff, 0x00,

  0x80, 0x40, 0x40, 0x40,  0x80, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xff,  0xff, 0x06, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x06,  0x06, 0x07, 0x07, 0x00,

  0x67, 0x68, 0x6a, 0x6a,  0x66, 0x60, 0x60, 0xfc,
  0xf8, 0xf0, 0x60, 0xff,  0xff, 0x60, 0x60, 0x60,
  0x60, 0x60, 0x60, 0x60,  0x60, 0xe0, 0xe0, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x03,
  0x01, 0x00, 0x00, 0x01,  0x01, 0x00, 0x00, 0x48,
  0x94, 0x94, 0x94, 0x64,  0x00, 0xff, 0xff, 0x00,

},

{ /* code 004 TRIAC bold old */

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xff,  0x00, 0x3c, 0x0a, 0x09,
  0x0a, 0x3c, 0x00, 0x22,  0x31, 0x29, 0x29, 0x26,

  0x00, 0x00, 0x82, 0x86,  0x8e, 0x9e, 0xbe, 0xfe,
  0xfe, 0xbe, 0xde, 0xef,  0xf6, 0xfa, 0xfe, 0xfe,
  0xfa, 0xf2, 0xe2, 0xc2,  0x82, 0x00, 0x00, 0x00,

  0x08, 0x08, 0x08, 0x04,  0x02, 0x79, 0x84, 0xa4,
  0xa4, 0x68, 0x00, 0xff,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xff,  0x00, 0x00, 0xf0, 0x28,
  0x24, 0x28, 0xf0, 0x00,  0x10, 0x08, 0xfc, 0x00,

},

{ /* code 005 THIRISTOR bold old */

// was 19x32
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3c,  0x0a, 0x09, 0x0a, 0x3c,
  0x00, 0xff, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x04, 0x0c, 0x1c, 0x3c,
  0x7c, 0xff, 0x7c, 0x3c,  0x1c, 0x0c, 0x04, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x9e, 0xa1, 0xa9,
  0xa9, 0x9a, 0x80, 0x43,  0x23, 0x13, 0x0b, 0x07,
  0x03, 0xff, 0x03, 0x03,  0x03, 0x03, 0x03, 0x03,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x78,  0x84, 0x84, 0x84, 0x48,
  0x00, 0xff, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,

},

 #if (ICON_ELEMENTS > 6)
 /* additional elements copied from Nick's bold icons */
{ /* code 006 inductance bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xF0, 0xF0, 0x00, 0xF0,  0xF8, 0x9C, 0x0E, 0x0E,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x00, 0x78,  0xFD, 0xCF, 0x87, 0x02,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x00, 0x3C,  0x7E, 0xE7, 0xC3, 0x81,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x1F, 0x1F, 0x00, 0x1E,  0x3F, 0x73, 0xE1, 0xE0
},

{ /* code 007 RESISTOR bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x80, 0x80, 0x80, 0xFC,  0xFC, 0x80, 0x80, 0x80,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x01, 0x01,  0x01, 0x01, 0xFF, 0xFF,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x80, 0x80,  0x80, 0x80, 0xFF, 0xFF,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x3F,  0x3F, 0x01, 0x01, 0x01
},

{ /* code 008 capacitor bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xC0,  0xC0, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x38, 0x38, 0x38, 0x3F,  0x3F, 0x38, 0x38, 0x38,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x07, 0x07, 0x07, 0xFF,  0xFF, 0x07, 0x07, 0x07,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03,  0x03, 0x00, 0x00, 0x00
},

{ /* code 009 DIODE C-A (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xC0,  0xC0, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x30, 0xB0, 0xFF,  0xFF, 0xB0, 0x30, 0x30,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x06, 0x07, 0x07, 0xFF,  0xFF, 0x07, 0x07, 0x06,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03,  0x03, 0x00, 0x00, 0x00
},

{ /* code 010 2DIODE C-A+C-A (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x30, 0xB0, 0xFF,  0xFF, 0xB0, 0x30, 0x30,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x86, 0x87, 0xC7, 0xFF,  0xFF, 0xC7, 0x07, 0x06
,
  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x61, 0x61, 0x63, 0xFF,  0xFF, 0x63, 0x60, 0x60,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x0C, 0x0E, 0x0F, 0xFF,  0xFF, 0x0F, 0x0E, 0x0C
},

{ /* code 011 2DIODE A-2C-A (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x70, 0xF0, 0xFF,  0xFF, 0xF0, 0x70, 0x30,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x86, 0x86, 0xC6, 0xFF,  0xFF, 0xC6, 0x06, 0x06,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x61, 0x61, 0x63, 0xFF,  0xFF, 0x63, 0x60, 0x60,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x0C, 0x0E, 0x0F, 0xFF,  0xFF, 0x0F, 0x0E, 0x0C
},

{ /* code 012 2DIODE C-2A-C (UP-DOWN) bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x30, 0x30, 0xB0, 0xFF,  0xFF, 0xB0, 0x30, 0x30,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x86, 0x87, 0xC7, 0xFF,  0xFF, 0xC7, 0x07, 0x06,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x61, 0xE1, 0xE3, 0xFF,  0xFF, 0xE3, 0xE0, 0x60,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x0C, 0x0C, 0x0D, 0xFF,  0xFF, 0x0D, 0x0C, 0x0C
},

{ /* code 013 2Resistor bold */
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0xFC, 0xFC, 0x0C, 0x0F,  0x0F, 0x0C, 0xFC, 0xFC,

  0x00, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80,  0x80, 0x80, 0x80, 0x80,
  0x8F, 0x8F, 0xCC, 0xFC,  0xFC, 0xCC, 0x0F, 0x0F,

  0x00, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,
  0xF1, 0xF1, 0x33, 0x3F,  0x3F, 0x33, 0xF0, 0xF0,

  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x3F, 0x3F, 0x30, 0xF0,  0xF0, 0x30, 0x3F, 0x3F
}
 #endif
};
#endif
