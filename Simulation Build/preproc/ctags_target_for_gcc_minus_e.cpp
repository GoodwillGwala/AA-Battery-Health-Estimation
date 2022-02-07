# 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
// *********************************************************************
// includes
// *********************************************************************
# 5 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 2
# 6 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 2
# 7 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 2
# 8 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 2
# 9 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 2
# 10 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 2


// *********************************************************************
// LCDML display settings
// *********************************************************************
// settings for LCD



// enable this line (set to 1) to show a header above the first menu element
// this function can be changed in DisplayMenu tab





// LCD object
// liquid crystal needs (rs, e, dat4, dat5, dat6, dat7)
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


// *********************************************************************
// Prototypes
// *********************************************************************
void lcdml_menu_display();
void lcdml_menu_clear();
void lcdml_menu_control();

// *********************************************************************
// Global variables
// *********************************************************************


// *********************************************************************
// Objects
// *********************************************************************
LCDMenuLib2_menu LCDML_0 (255, 0, 0, 
# 46 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
                                    __null
# 46 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
                                        , 
# 46 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
                                          __null
# 46 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
                                              ); // root menu element (do not change)
LCDMenuLib2 LCDML(LCDML_0, 2 - 1, 16, lcdml_menu_display, lcdml_menu_clear, lcdml_menu_control);

// *********************************************************************
// LCDML MENU/DISP
// *********************************************************************
// LCDML_0        => layer 0
// LCDML_0_X      => layer 1
// LCDML_0_X_X    => layer 2
// LCDML_0_X_X_X  => layer 3
// LCDML_0_...      => layer ...


// LCDML_add(id, prev_layer, new_num, lang_char_array, callback_function)
const char g_LCDML_DISP_lang_lcdml_0_var[] 
# 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Battery Test"}; LCDMenuLib2_menu LCDML_0_1(0, 0, 1, 
# 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null
# 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
, 
# 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_0_function() { LCDML_0.addChild(LCDML_0_1); };
const char g_LCDML_DISP_lang_lcdml_1_var[] 
# 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Options"}; LCDMenuLib2_menu LCDML_0_2(1, 0, 1, 
# 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null
# 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
, 
# 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_1_function() { LCDML_0.addChild(LCDML_0_2); };
const char g_LCDML_DISP_lang_lcdml_2_var[] 
# 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Program"}; LCDMenuLib2_menu LCDML_0_3(2, 0, 1, 
# 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null
# 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
, 
# 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_2_function() { LCDML_0.addChild(LCDML_0_3); };
const char g_LCDML_DISP_lang_lcdml_3_var[] 
# 63 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 63 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Quick Test"}; LCDMenuLib2_menu LCDML_0_1_1(3, 0, 1, BatteryTest, 
# 63 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 63 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_3_function() { LCDML_0_1.addChild(LCDML_0_1_1); };
const char g_LCDML_DISP_lang_lcdml_4_var[] 
# 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Settings"}; LCDMenuLib2_menu LCDML_0_2_1(4, 0, 1, 
# 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null
# 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
, 
# 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_4_function() { LCDML_0_2.addChild(LCDML_0_2_1); };
const char g_LCDML_DISP_lang_lcdml_5_var[] 
# 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Battery Type"}; LCDMenuLib2_menu LCDML_0_2_1_1(5, 0, 1, 
# 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null
# 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
, 
# 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_5_function() { LCDML_0_2_1.addChild(LCDML_0_2_1_1); };

const char g_LCDML_DISP_lang_lcdml_6_var[] 
# 67 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 67 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Model Battery"}; LCDMenuLib2_menu LCDML_0_3_1(6, false, 1, Regression, 
# 67 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 67 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_6_function() { LCDML_0_3.addChild(LCDML_0_3_1); };
const char g_LCDML_DISP_lang_lcdml_7_var[] 
# 68 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 68 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Simulate Model"}; LCDMenuLib2_menu LCDML_0_3_2(7, true, 1, Regression, 
# 68 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 68 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_7_function() { LCDML_0_3.addChild(LCDML_0_3_2); };
const char g_LCDML_DISP_lang_lcdml_8_var[] 
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Alkaline"}; LCDMenuLib2_menu LCDML_0_2_1_1_1(8, 0, 1, BatteryType, 
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_8_function() { LCDML_0_2_1_1.addChild(LCDML_0_2_1_1_1); }; // NULL = no menu function
const char g_LCDML_DISP_lang_lcdml_9_var[] 
# 70 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 70 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Duracell"}; LCDMenuLib2_menu LCDML_0_2_1_1_2(9, 1, 1, BatteryType, 
# 70 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 70 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_9_function() { LCDML_0_2_1_1.addChild(LCDML_0_2_1_1_2); }; // NULL = no menu function
const char g_LCDML_DISP_lang_lcdml_10_var[] 
# 71 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 71 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"NIHM 2"}; LCDMenuLib2_menu LCDML_0_2_1_1_3(10, 2, 1, BatteryType, 
# 71 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 71 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_10_function() { LCDML_0_2_1_1.addChild(LCDML_0_2_1_1_3); }; // NULL = no menu function
const char g_LCDML_DISP_lang_lcdml_11_var[] 
# 72 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 72 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Non-Rechargable"}; LCDMenuLib2_menu LCDML_0_2_1_1_4(11, 3, 1, BatteryType, 
# 72 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 72 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_11_function() { LCDML_0_2_1_1.addChild(LCDML_0_2_1_1_4); }; // NULL = no menu function
const char g_LCDML_DISP_lang_lcdml_12_var[] 
# 73 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 73 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= {"Rechargable "}; LCDMenuLib2_menu LCDML_0_2_1_1_5(12, 4, 1, BatteryType, 
# 73 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3 4
__null 
# 73 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
); void LCDML_DISP_12_function() { LCDML_0_2_1_1.addChild(LCDML_0_2_1_1_5); }; // NULL = no menu function



// create menu
const char * const g_LCDML_DISP_lang_lcdml_table[] 
# 78 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
__attribute__((__progmem__)) 
# 78 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
= { g_LCDML_DISP_lang_lcdml_0_var, g_LCDML_DISP_lang_lcdml_1_var, g_LCDML_DISP_lang_lcdml_2_var, g_LCDML_DISP_lang_lcdml_3_var, g_LCDML_DISP_lang_lcdml_4_var, g_LCDML_DISP_lang_lcdml_5_var, g_LCDML_DISP_lang_lcdml_6_var, g_LCDML_DISP_lang_lcdml_7_var, g_LCDML_DISP_lang_lcdml_8_var, g_LCDML_DISP_lang_lcdml_9_var, g_LCDML_DISP_lang_lcdml_10_var, g_LCDML_DISP_lang_lcdml_11_var, g_LCDML_DISP_lang_lcdml_12_var, };

// *********************************************************************
// SETUP
// *********************************************************************
void setup()
{
  // serial init; only be needed if serial control is used
  Serial.begin(9600); // start serial
  Serial.println((reinterpret_cast<const __FlashStringHelper *>(
# 87 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
                (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 87 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
                "Battery Testor V1.0"
# 87 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
                ); &__c[0];}))
# 87 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
                ))); // only for examples
  // LCD Begin
  lcd.begin(16, 2);

  lcd.print((reinterpret_cast<const __FlashStringHelper *>(
# 91 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
           (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 91 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
           "Battery Testor V1.0"
# 91 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino" 3
           ); &__c[0];}))
# 91 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
           )));
  // LCDMenuLib Setup
  LCDML_DISP_0_function(); LCDML_DISP_1_function(); LCDML_DISP_2_function(); LCDML_DISP_3_function(); LCDML_DISP_4_function(); LCDML_DISP_5_function(); LCDML_DISP_6_function(); LCDML_DISP_7_function(); LCDML_DISP_8_function(); LCDML_DISP_9_function(); LCDML_DISP_10_function(); LCDML_DISP_11_function(); LCDML_DISP_12_function();;; LCDML.init(12);

  // Some settings which can be used

  // Enable Menu Rollover
  LCDML.MENU_enRollover();


}

// *********************************************************************
// LOOP
// *********************************************************************
void loop()
{
  LCDML.loop();
}
# 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/Control.ino"
// =====================================================================
//
// INPUT CONTROL
//
// =====================================================================
// *********************************************************************
// *********************************************************************
// content:
// Control over one analog input



// *********************************************************************
// ******************* CONTROL OVER ONE ANALOG PIN *********************
// *********************************************************************


  unsigned long g_LCDML_DISP_press_time = 0;
// settings

  // when you did not use a button set the value to zero
# 39 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/Control.ino"
// *********************************************************************

void lcdml_menu_control(void)
{
  // If something must init, put it in the setup condition
  if(LCDML.BT_setup()) {
    // runs only once
  }
  // check debounce timer
  if((millis() - g_LCDML_DISP_press_time) >= 200) {
    g_LCDML_DISP_press_time = millis(); // reset debounce timer

    uint16_t value = analogRead(0); // analog pin for keypad
    if (value >= 700 /* Button Enter*/ && value <= 750) { LCDML.BT_enter();}
    if (value >= 140 /* Button Up*/ && value <= 146) { LCDML.BT_up();}
    if (value >= 300 /* Button Down*/ && value <= 330) { LCDML.BT_down();}
    if (value >= 496 /* Button Back*/ && value <= 506) { LCDML.BT_quit();}



  }
}
// *********************************************************************
// ******************************* END *********************************
// *********************************************************************
# 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
// =====================================================================
//
// Output function
//
// =====================================================================

/* ******************************************************************** */
void lcdml_menu_clear()
/* ******************************************************************** */
{
  lcd.clear();
  lcd.setCursor(0, 0);
}

/* ******************************************************************** */
void lcdml_menu_display()
/* ******************************************************************** */
{
  // update content
  // ***************
  if (LCDML.DISP_checkMenuUpdate()) {
    // clear menu
    // ***************
    LCDML.DISP_clear();

    // declaration of some variables
    // ***************
    // content variable
    char content_text[16]; // save the content text of every menu element
    // menu element object
    LCDMenuLib2_menu *tmp;
    // some limit values
    uint8_t i = LCDML.MENU_getScroll();
    uint8_t maxi = (2 - 1) + i;
    uint8_t n = 0;

    // Display a header with the parent element name
    if (1 > 0)
    {
      // only one line
      if (LCDML.MENU_getLayer() == 0)
      {
        // this text is displayed when no header is available
        lcd.setCursor(0, 0);
        lcd.print((reinterpret_cast<const __FlashStringHelper *>(
# 45 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3
                 (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 45 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
                 "Main Menu"
# 45 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3
                 ); &__c[0];}))
# 45 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
                 )));
      }
      else
      {
        // Display parent name
        if(LCDML.MENU_getParentID() < 255) { strcpy_P(content_text, (char*)
# 50 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3
       (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(
# 50 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
       &(g_LCDML_DISP_lang_lcdml_table[LCDML.MENU_getParentID()])
# 50 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3
       )); uint16_t __result; __asm__ __volatile__ ( "lpm %A0, Z+" "\n\t" "lpm %B0, Z" "\n\t" : "=r" (__result), "=z" (__addr16) : "1" (__addr16) ); __result; }))
# 50 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
       ); };
        lcd.setCursor(0, 0);
        lcd.print(content_text);
      }
    }

    // check if this element has children
    if ((tmp = LCDML.MENU_getDisplayedObj()) != 
# 57 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3 4
                                               __null
# 57 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
                                                   )
    {
      // loop to display lines
      do
      {
        // check if a menu element has a condition and if the condition be true
        if (tmp->checkCondition())
        {
          // check the type off a menu element
          if (tmp->checkType_menu() == true)
          {
            // display normal content
            if(tmp->getID() < 255) { strcpy_P(content_text, (char*)
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3
           (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
           &(g_LCDML_DISP_lang_lcdml_table[tmp->getID()])
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3
           )); uint16_t __result; __asm__ __volatile__ ( "lpm %A0, Z+" "\n\t" "lpm %B0, Z" "\n\t" : "=r" (__result), "=z" (__addr16) : "1" (__addr16) ); __result; }))
# 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
           ); };
            lcd.setCursor(1, (n + 1));
            lcd.print(content_text);
          }
          else
          {
            if (tmp->checkType_dynParam()) {
              tmp->callback(n);
            }
          }
          // increment some values
          i++;
          n++;
        }
        // try to go to the next sibling and check the number of displayed rows
      } while (((tmp = tmp->getSibling(1)) != 
# 84 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino" 3 4
                                             __null
# 84 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
                                                 ) && (i < maxi));
    }
  }

  if (LCDML.DISP_checkMenuCursorUpdate())
  {
    // init vars
    uint8_t n_max = (LCDML.MENU_getChilds() >= (2 - 1)) ? (2 - 1) : (LCDML.MENU_getChilds());
    uint8_t scrollbar_min = 0;
    uint8_t scrollbar_max = LCDML.MENU_getChilds();
    uint8_t scrollbar_cur_pos = LCDML.MENU_getCursorPosAbs();
    uint8_t scroll_pos = ((1.*n_max * (2 - 1)) / (scrollbar_max - 1) * scrollbar_cur_pos);


    // display rows
    for (uint8_t n = 0; n < n_max; n++)
    {
      //set cursor
      lcd.setCursor(0, (n + 1));

      //set cursor char
      if (n == LCDML.MENU_getCursorPos()) {
        lcd.write(0x7E /* cursor Symbol*/);
      } else {
        lcd.write('_');
      }

      // delete or reset scrollbar
      if (0 /* enable a scrollbar*/ == 1) {
        if (scrollbar_max > n_max) {
          lcd.setCursor((16 - 1), (n + 1));
          lcd.write((uint8_t)0);
        }
        else {
          lcd.setCursor((16 - 1), (n + 1));
          lcd.print(' ');
        }
      }
    }

    // display scrollbar
    if (0 /* enable a scrollbar*/ == 1) {
      if (scrollbar_max > n_max) {
        //set scroll position
        if (scrollbar_cur_pos == scrollbar_min) {
          // min pos
          lcd.setCursor((16 - 1), (0 + 1));
          lcd.write((uint8_t)1);
        } else if (scrollbar_cur_pos == (scrollbar_max - 1)) {
          // max pos
          lcd.setCursor((16 - 1), (n_max - 1 + 1));
          lcd.write((uint8_t)4);
        } else {
          // between
          lcd.setCursor((16 - 1), (scroll_pos / n_max + 1));
          lcd.write((uint8_t)(scroll_pos % n_max) + 1);
        }
      }
    }
  }
}
# 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
/* ===================================================================== *
 *                                                                       *
   Menu Callback Function
 *                                                                       *
   =====================================================================

*/
// *********************************************************************


// *********************************************************************
// Global variables
// *********************************************************************
String BatteryName [] { "Alkaline", "Duracel", "Rechargable", "Non-Rechargable"};
const uint16_t samples = 64;
double vReal[samples];
double vImag[samples];

double peak;
double BatteryDC;
double impedance;

struct BatteryModel
{
  String Name;
  double coeff_1;
  double coeff_2;

};

const uint16_t data = 10;
int BatteryIndex;

BatteryModel model[data]
{
  {BatteryName[0], -0.31 , 0.60}

};

struct DataPoint {
  double DC;
  double IR;
  double SOC;
};



DataPoint DataPoints [data] =
{

  //{Voltage  , Impedance , State Of Charge}
  {1.38 , 0.3 , 1}, // 1     //100%
  {1.29 , 0.33, 0.9}, // 2     //90%
  {1.27 , 0.36, 0.8}, // 3     //80%
  {1.255, 0.39, 0.7}, // 4     //70%
  {1.234 , 0.42, 0.6}, // 5     //60%
  {1.225 , 0.45, 0.5}, // 6     //50%
  {1.220 , 0.348, 0.4}, // 7     //40%
  {1.212 , 0.51, 0.3}, // 8     //30%
  {1.18 , 0.57, 0.2}, // 9     //20%
  {1.10 , 0.6, 0.1} // 10    //10%

};

int BatteryCount = 1;
bool run_test = true;
bool run_reg = true;

const double samplingFrequency = 5000;
const double signalFrequency = 1000;
unsigned long microseconds;
unsigned int sampling_period_us;
/* ===================================================================== *
 *                                                                       *
   ADC Function
 *                                                                       *
   ===================================================================== */

void adc(int Channel)
// *********************************************************************
{


  for (int i = 0; i < samples; i++)
  {

    vReal[i] = (adc_read(7, 64, Channel));
    vImag[i] = 0;

  }


}





void Regression(bool simulation)
{
  //simulation = 3;
  const long oneSecond = 1000; // a second is a thousand milliseconds
  const long oneMinute = oneSecond * 60;
  const long oneHour = oneMinute * 60;
  const long oneDay = oneHour * 24;
  const long sampling_delay = oneSecond;
  double values[2];
  LinearRegression lr = LinearRegression();
  if (LCDML.FUNC_setup()) // ****** SETUP *********
  {
    run_reg = true;
  }


    while (run_reg)
    {
      run_reg = false; //run until regression is done
      Serial.println("Learning Started ");
      int i = 0;
      do
      {
        double temp;
        if (simulation)
        {
          run_reg = false;
          BatteryDC = DataPoints[i].DC;
          temp = DataPoints[i].IR;
          lr.learn(DataPoints[i].SOC , DataPoints[i].IR );

          i++;
          Serial.println(BatteryDC);
        lcd.clear();
        lcd.print("DATA NO: ");
        lcd.print(lr.samples());
        lcd.setCursor(0, 1);
        lcd.print("DC:");

        lcd.print( BatteryDC );
        lcd.print(" IR:");
        lcd.print(temp);
        Serial.println("Sleeping...");
        delay(1500);

        }
        else if(!simulation)
        {
          temp = Impedance();
          lr.learn(BatteryDC, temp);
          run_reg = false;

          Serial.println(BatteryDC);
        lcd.clear();
        lcd.print("DATA NO: ");
        lcd.print(lr.samples());
        lcd.setCursor(0, 1);
        lcd.print("DC:");

        lcd.print( BatteryDC );
        lcd.print(" IR:");
        lcd.print(temp);
        Serial.println("Sleeping...");
        delay(oneMinute);
        }

        Serial.println(BatteryDC);
        lcd.clear();
        lcd.print("DATA NO: ");
        lcd.print(lr.samples());
        lcd.setCursor(0, 1);
        lcd.print("DC:");

        lcd.print( BatteryDC );
        lcd.print(" IR:");
        lcd.print(temp);
        Serial.println("Sleeping...");

      } while (BatteryDC > 1.1 || i < 10 && simulation );


      simulation = false; //Simulation is done
      Serial.println("End learn");

      Serial.print("Correlation: ");
      double temp = lr.correlation() * (-100);
      Serial.print(temp);
      Serial.println("%");

      Serial.print("Values: ");
      lr.parameters(values);
      Serial.print("Y = ");
      Serial.print(values[0]);
      Serial.print("*X + ");
      Serial.println(values[1]);
      model[BatteryCount].coeff_1 = values[0];
      model[BatteryCount].coeff_2 = values[1];
      EEPROM.put(BatteryCount, model);
      Serial.print("Captured ");
      BatteryCount++;

    }




  if (LCDML.BT_checkAny())
    {

      lcd.clear();
      Serial.print("Checking out");
      //lcd.print("Y = ");
      //lcd.print(values[0]);
      //lcd.print("*X + ");
      //lcd.println(values[1]);
      delay(3000);
      lr.reset();
      //Serial.println("Reset ->");
      LCDML.FUNC_goBackToMenu(1);
      LCDML.BT_resetAll();

    }

}

double FFT(int Channel, double *vReal)
// *********************************************************************
{

  arduinoFFT FFT = arduinoFFT(); /* Create FFT object */


  FFT.Windowing(vReal, samples, 0x00 /* rectangle (Box car) */, 0x01); /* Weigh data */
  FFT.Compute(vReal, vImag, samples, 0x01); /* Compute FFT */
  FFT.ComplexToMagnitude(vReal, vImag, samples); /* Compute magnitudes */
  peak = (5.0 / 1023.0) * FFT.MajorPeak(vReal, samples, samplingFrequency); /*AC peak*/


  if (Channel == 1)
  {

    Serial.print("Battery:  ");
    Serial.println(peak, 3);
    BatteryDC = (5.0 / 1023.0) * (FFT.DC(vReal, samples) / (samples / 2.0000) / 2.0000) - (peak / 2);

  }
  else
  {
    Serial.print("Shunt:  ");
    Serial.println(peak, 3);
  }

  return peak;

}
double Impedance()
// *********************************************************************
{

  adc(1);
  double deltaV = FFT(1, vReal);
  adc(2);
  double deltaC = FFT(2, vReal);
  double Impedance = deltaV / deltaC;

  return (Impedance);
}

double SOH()
{

  impedance = Impedance() - 0.6 ; //For testing purposes Only
  return (impedance - model[BatteryIndex].coeff_2) / model[BatteryIndex].coeff_1;


}

void BatteryType(uint8_t param)
// *********************************************************************
{
  if (LCDML.FUNC_setup()) // ****** SETUP *********
  {

    BatteryIndex = param;


  }


  if (LCDML.FUNC_loop())
  {
    lcd.print("Model Changed");

    lcd.setCursor(0, 1);
    lcd.print("Y =");
    lcd.print(model[BatteryIndex].coeff_1);
    lcd.print("*X+");
    lcd.println(model[BatteryIndex].coeff_2);

  }

  if (LCDML.BT_checkAny()) // check if any button is pressed (enter, up, down, left, right)
  {
    LCDML.FUNC_goBackToMenu(); // leave this function
  }

}

//* ===================================================================== *



// *********************************************************************
void BatteryTest()
// *********************************************************************
{

  if (LCDML.FUNC_setup()) // ****** SETUP *********
  {
    run_test = true;
  }

  if (LCDML.FUNC_loop())
  {

    while (run_test)
    {
      double Health = SOH() * 100;
      lcd.clear();
      lcd.print((reinterpret_cast<const __FlashStringHelper *>(
# 328 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino" 3
               (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 328 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
               "DC:"
# 328 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino" 3
               ); &__c[0];}))
# 328 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
               )));
      lcd.print(BatteryDC);
      lcd.print((reinterpret_cast<const __FlashStringHelper *>(
# 330 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino" 3
               (__extension__({static const char __c[] __attribute__((__progmem__)) = (
# 330 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
               " IR:"
# 330 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino" 3
               ); &__c[0];}))
# 330 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
               )));
      lcd.print(impedance);
      lcd.setCursor(0, 1);
      lcd.print("HEALTH: ");
      lcd.print( (Health));
      lcd.print("%");

      run_test = false; //run once

    }


    if (LCDML.BT_checkAny()) // check if any button is pressed (enter, up, down, left, right)
    {
      LCDML.FUNC_goBackToMenu(); // leave this function
    }
  }

}


// *********************************************************************

//TEST FUNCTION TO SEE VALUES FROM ADC; DEMO FUNCTION





void PrintVector(double *vData, uint16_t bufferSize, uint8_t scaleType)
{
  for (uint16_t i = 0; i < bufferSize; i++)
  {
    double abscissa;
    /* Print abscissa value */
    switch (scaleType)
    {
      case 0x00:
        abscissa = (i * 1.0);
        break;
      case 0x01:
        abscissa = ((i * 1.0) / samplingFrequency);
        break;
      case 0x02:
        abscissa = ((i * 1.0 * samplingFrequency) / samples);
        break;
    }
    Serial.print(abscissa, 6);
    if (scaleType == 0x02)
      Serial.print("Hz");
    Serial.print(" ");
    Serial.println(vData[i] * (5.0 / 1024.0), 2);
  }
  Serial.println();
}
