
// *********************************************************************
// includes
// *********************************************************************
#include <LiquidCrystal.h>
#include <LCDMenuLib2.h>
#include <EEPROM.h>
#include <LinearRegression.h>
#include <arduinoFFT.h>
#include <atmega-adc.h>


// *********************************************************************
// LCDML display settings
// *********************************************************************
// settings for LCD
#define _LCDML_DISP_cols  16
#define _LCDML_DISP_rows  2

// enable this line (set to 1) to show a header above the first menu element
// this function can be changed in DisplayMenu tab
#define _LCDML_DSIP_use_header 1

#define _LCDML_DISP_cfg_cursor                     0x7E   // cursor Symbol
#define _LCDML_DISP_cfg_scrollbar                  0      // enable a scrollbar

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
LCDMenuLib2_menu LCDML_0 (255, 0, 0, NULL, NULL); // root menu element (do not change)
LCDMenuLib2 LCDML(LCDML_0, _LCDML_DISP_rows - _LCDML_DSIP_use_header, _LCDML_DISP_cols, lcdml_menu_display, lcdml_menu_clear, lcdml_menu_control);

// *********************************************************************
// LCDML MENU/DISP
// *********************************************************************
// LCDML_0        => layer 0
// LCDML_0_X      => layer 1
// LCDML_0_X_X    => layer 2
// LCDML_0_X_X_X  => layer 3
// LCDML_0_...      => layer ...


// LCDML_add(id, prev_layer, new_num, lang_char_array, callback_function)
LCDML_add         (0  , LCDML_0     , 1  , "Battery Test"     , NULL );
LCDML_add         (1  , LCDML_0     , 2  , "Options"          , NULL);
LCDML_add         (2  , LCDML_0     , 3  , "Program"          , NULL);
LCDML_add         (3  , LCDML_0_1   , 1  , "Quick Test"       , BatteryTest);
LCDML_add         (4  , LCDML_0_2   , 1  , "Settings"         , NULL);
LCDML_add         (5  , LCDML_0_2_1 , 1  , "Battery Type"     , NULL);

LCDML_addAdvanced (6  , LCDML_0_3   , 1  ,  NULL, "Model Battery"    , Regression, false,_LCDML_TYPE_default);
LCDML_addAdvanced (7  , LCDML_0_3   , 2  ,  NULL, "Simulate Model"    , Regression, true,_LCDML_TYPE_default);
LCDML_addAdvanced (8 , LCDML_0_2_1_1   , 1  , NULL, "Alkaline"      , BatteryType,       0,            _LCDML_TYPE_default);              // NULL = no menu function
LCDML_addAdvanced (9 , LCDML_0_2_1_1   , 2  , NULL, "Duracell"      , BatteryType,       1,            _LCDML_TYPE_default);              // NULL = no menu function
LCDML_addAdvanced (10 , LCDML_0_2_1_1   , 3  , NULL, "NIHM 2"      , BatteryType,       2,            _LCDML_TYPE_default);              // NULL = no menu function
LCDML_addAdvanced (11 , LCDML_0_2_1_1   , 4  , NULL, "Non-Rechargable"      , BatteryType,       3,            _LCDML_TYPE_default);              // NULL = no menu function
LCDML_addAdvanced (12 , LCDML_0_2_1_1   , 5  , NULL, "Rechargable "      , BatteryType,       4,            _LCDML_TYPE_default);              // NULL = no menu function

#define _LCDML_DISP_cnt    12

// create menu
LCDML_createMenu(_LCDML_DISP_cnt);

// *********************************************************************
// SETUP
// *********************************************************************
void setup()
{
  // serial init; only be needed if serial control is used
  Serial.begin(9600);                // start serial
  Serial.println(F("Battery Testor V1.0")); // only for examples
  // LCD Begin
  lcd.begin(_LCDML_DISP_cols, _LCDML_DISP_rows);

  lcd.print(F("Battery Testor V1.0"));
  // LCDMenuLib Setup
  LCDML_setup(_LCDML_DISP_cnt);

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
