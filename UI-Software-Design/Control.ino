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
