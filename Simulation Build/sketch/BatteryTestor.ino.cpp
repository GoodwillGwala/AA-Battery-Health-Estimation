#include <Arduino.h>
#line 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
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
#line 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_0_function();
#line 61 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_1_function();
#line 62 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_2_function();
#line 63 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_3_function();
#line 64 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_4_function();
#line 65 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_5_function();
#line 67 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_6_function();
#line 68 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_7_function();
#line 69 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_8_function();
#line 70 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_9_function();
#line 71 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_10_function();
#line 72 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_11_function();
#line 73 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void LCDML_DISP_12_function();
#line 83 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void setup();
#line 106 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
void loop();
#line 41 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/Control.ino"
void lcdml_menu_control(void);
#line 79 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
void adc(int Channel);
#line 99 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
void Regression(bool simulation);
#line 224 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
double FFT(int Channel, double *vReal);
#line 254 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
double Impedance();
#line 267 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
double SOH();
#line 276 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
void BatteryType(uint8_t param);
#line 312 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
void BatteryTest();
#line 359 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
void PrintVector(double *vData, uint16_t bufferSize, uint8_t scaleType);
#line 60 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/BatteryTestor.ino"
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

#line 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/Control.ino"
// =====================================================================
//
// INPUT CONTROL
//
// =====================================================================
// *********************************************************************
// *********************************************************************
// content:
// Control over one analog input

#define _LCDML_CONTROL_cfg      1

// *********************************************************************
// ******************* CONTROL OVER ONE ANALOG PIN *********************
// *********************************************************************
#if(_LCDML_CONTROL_cfg == 1)

  unsigned long g_LCDML_DISP_press_time = 0;
// settings
  #define _LCDML_CONTROL_analog_pin              0
  // when you did not use a button set the value to zero
  #define _LCDML_CONTROL_analog_enter_min        700     // Button Enter
  
  #define _LCDML_CONTROL_analog_enter_max        750
  
  #define _LCDML_CONTROL_analog_up_min           140     // Button Up
  
  #define _LCDML_CONTROL_analog_up_max           146
  
  #define _LCDML_CONTROL_analog_down_min         300     // Button Down
  
  #define _LCDML_CONTROL_analog_down_max         330
  
  #define _LCDML_CONTROL_analog_back_min         496     // Button Back
  
  #define _LCDML_CONTROL_analog_back_max         506
  
  
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

    uint16_t value = analogRead(_LCDML_CONTROL_analog_pin);  // analog pin for keypad
    if (value >= _LCDML_CONTROL_analog_enter_min && value <= _LCDML_CONTROL_analog_enter_max) { LCDML.BT_enter();}
    if (value >= _LCDML_CONTROL_analog_up_min    && value <= _LCDML_CONTROL_analog_up_max)    { LCDML.BT_up();}
    if (value >= _LCDML_CONTROL_analog_down_min  && value <= _LCDML_CONTROL_analog_down_max)  { LCDML.BT_down();}
    if (value >= _LCDML_CONTROL_analog_back_min  && value <= _LCDML_CONTROL_analog_back_max)  { LCDML.BT_quit();}

    

  }
}
// *********************************************************************
// ******************************* END *********************************
// *********************************************************************

#else
  #error _LCDML_CONTROL_cfg is not defined or not in range
#endif

#line 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/DisplayMenu.ino"
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
    char content_text[_LCDML_DISP_cols];  // save the content text of every menu element
    // menu element object
    LCDMenuLib2_menu *tmp;
    // some limit values
    uint8_t i = LCDML.MENU_getScroll();
    uint8_t maxi = (_LCDML_DISP_rows - _LCDML_DSIP_use_header) + i;
    uint8_t n = 0;

    // Display a header with the parent element name
    if (_LCDML_DSIP_use_header > 0)
    {
      // only one line
      if (LCDML.MENU_getLayer() == 0)
      {
        // this text is displayed when no header is available
        lcd.setCursor(0, 0);
        lcd.print(F("Main Menu"));
      }
      else
      {
        // Display parent name
        LCDML_getContent(content_text, LCDML.MENU_getParentID());
        lcd.setCursor(0, 0);
        lcd.print(content_text);
      }
    }

    // check if this element has children
    if ((tmp = LCDML.MENU_getDisplayedObj()) != NULL)
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
            LCDML_getContent(content_text, tmp->getID());
            lcd.setCursor(1, (n + _LCDML_DSIP_use_header));
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
      } while (((tmp = tmp->getSibling(1)) != NULL) && (i < maxi));
    }
  }

  if (LCDML.DISP_checkMenuCursorUpdate())
  {
    // init vars
    uint8_t n_max             = (LCDML.MENU_getChilds() >= (_LCDML_DISP_rows - _LCDML_DSIP_use_header)) ? (_LCDML_DISP_rows - _LCDML_DSIP_use_header) : (LCDML.MENU_getChilds());
    uint8_t scrollbar_min     = 0;
    uint8_t scrollbar_max     = LCDML.MENU_getChilds();
    uint8_t scrollbar_cur_pos = LCDML.MENU_getCursorPosAbs();
    uint8_t scroll_pos        = ((1.*n_max * (_LCDML_DISP_rows - _LCDML_DSIP_use_header)) / (scrollbar_max - 1) * scrollbar_cur_pos);


    // display rows
    for (uint8_t n = 0; n < n_max; n++)
    {
      //set cursor
      lcd.setCursor(0, (n + _LCDML_DSIP_use_header));

      //set cursor char
      if (n == LCDML.MENU_getCursorPos()) {
        lcd.write(_LCDML_DISP_cfg_cursor);
      } else {
        lcd.write('_');
      }

      // delete or reset scrollbar
      if (_LCDML_DISP_cfg_scrollbar == 1) {
        if (scrollbar_max > n_max) {
          lcd.setCursor((_LCDML_DISP_cols - 1), (n + _LCDML_DSIP_use_header));
          lcd.write((uint8_t)0);
        }
        else {
          lcd.setCursor((_LCDML_DISP_cols - 1), (n + _LCDML_DSIP_use_header));
          lcd.print(' ');
        }
      }
    }

    // display scrollbar
    if (_LCDML_DISP_cfg_scrollbar == 1) {
      if (scrollbar_max > n_max) {
        //set scroll position
        if (scrollbar_cur_pos == scrollbar_min) {
          // min pos
          lcd.setCursor((_LCDML_DISP_cols - 1), (0 + _LCDML_DSIP_use_header));
          lcd.write((uint8_t)1);
        } else if (scrollbar_cur_pos == (scrollbar_max - 1)) {
          // max pos
          lcd.setCursor((_LCDML_DISP_cols - 1), (n_max - 1 + _LCDML_DSIP_use_header));
          lcd.write((uint8_t)4);
        } else {
          // between
          lcd.setCursor((_LCDML_DISP_cols - 1), (scroll_pos / n_max + _LCDML_DSIP_use_header));
          lcd.write((uint8_t)(scroll_pos % n_max) + 1);
        }
      }
    }
  }
}

#line 1 "/home/mint/Desktop/Design/Implementation/Complete/MainBench/BatteryTestor/MenuFunction.ino"
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



DataPoint DataPoints [data]  =
{
  
  //{Voltage  , Impedance , State Of Charge}
  {1.38 , 0.3 ,   1},  // 1     //100%
  {1.29 , 0.33,   0.9}, // 2     //90%
  {1.27 , 0.36,   0.8}, // 3     //80%
  {1.255, 0.39,   0.7}, // 4     //70%
  {1.234 , 0.42,  0.6}, // 5     //60%
  {1.225 , 0.45,  0.5}, // 6     //50%
  {1.220 , 0.348, 0.4}, // 7     //40%
  {1.212 , 0.51,  0.3}, // 8     //30%
  {1.18 , 0.57,  0.2}, // 9     //20%
  {1.10 , 0.6,   0.1}  // 10    //10%

};

int BatteryCount = 1;
bool run_test = true;
bool run_reg  = true;

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
    
    vReal[i] = (adc_read(ADC_PRESCALER_128, ADC_VREF_AVCC, Channel));
    vImag[i] = 0;
    
  }


}





void Regression(bool simulation)
{
  //simulation = 3;
  const long oneSecond = 1000;  // a second is a thousand milliseconds
  const long oneMinute = oneSecond * 60;
  const long oneHour   = oneMinute * 60;
  const long oneDay    = oneHour * 24;
  const long sampling_delay = oneSecond;
  double values[2];
  LinearRegression lr = LinearRegression();
  if (LCDML.FUNC_setup())         // ****** SETUP *********
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


  FFT.Windowing(vReal, samples, FFT_WIN_TYP_RECTANGLE, FFT_FORWARD); /* Weigh data */
  FFT.Compute(vReal, vImag, samples, FFT_FORWARD); /* Compute FFT */
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

  impedance = Impedance() -       0.6 ; //For testing purposes Only
  return (impedance - model[BatteryIndex].coeff_2) / model[BatteryIndex].coeff_1;


}

void BatteryType(uint8_t param)
// *********************************************************************
{
  if (LCDML.FUNC_setup())         // ****** SETUP *********
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
    LCDML.FUNC_goBackToMenu();  // leave this function
  }

}

//* ===================================================================== *



// *********************************************************************
void BatteryTest()
// *********************************************************************
{

  if (LCDML.FUNC_setup())         // ****** SETUP *********
  {
    run_test = true;
  }

  if (LCDML.FUNC_loop())
  {

    while (run_test)
    {
      double Health = SOH() * 100;
      lcd.clear();
      lcd.print(F("DC:"));
      lcd.print(BatteryDC);
      lcd.print(F(" IR:"));
      lcd.print(impedance);
      lcd.setCursor(0, 1);
      lcd.print("HEALTH: ");
      lcd.print( (Health));
      lcd.print("%");

      run_test = false; //run once

    }


    if (LCDML.BT_checkAny()) // check if any button is pressed (enter, up, down, left, right)
    {
      LCDML.FUNC_goBackToMenu();  // leave this function
    }
  }

}


// *********************************************************************

//TEST FUNCTION TO SEE VALUES FROM ADC; DEMO FUNCTION
#define SCL_INDEX 0x00
#define SCL_TIME 0x01
#define SCL_FREQUENCY 0x02
#define SCL_PLOT 0x03

void PrintVector(double *vData, uint16_t bufferSize, uint8_t scaleType)
{
  for (uint16_t i = 0; i < bufferSize; i++)
  {
    double abscissa;
    /* Print abscissa value */
    switch (scaleType)
    {
      case SCL_INDEX:
        abscissa = (i * 1.0);
        break;
      case SCL_TIME:
        abscissa = ((i * 1.0) / samplingFrequency);
        break;
      case SCL_FREQUENCY:
        abscissa = ((i * 1.0 * samplingFrequency) / samples);
        break;
    }
    Serial.print(abscissa, 6);
    if (scaleType == SCL_FREQUENCY)
      Serial.print("Hz");
    Serial.print(" ");
    Serial.println(vData[i] * (5.0 / 1024.0), 2);
  }
  Serial.println();
}

