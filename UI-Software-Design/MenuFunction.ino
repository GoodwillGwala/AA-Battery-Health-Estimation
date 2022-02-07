/* ===================================================================== *
 *                                                                       *
   Menu Callback Function
 *                                                                       *
   =====================================================================
 * EXAMPLE CODE:

// *********************************************************************
void your_function_name(uint8_t param)
// *********************************************************************
{
  if(LCDML.FUNC_setup())          // ****** SETUP *********
  {
    // setup is called only if it is started

    // starts a trigger event for the loop function every 100 milliseconds
    LCDML.FUNC_setLoopInterval(100);
  }

  if(LCDML.FUNC_loop())           // ****** LOOP *********
  {
    // loop
    // is called when it is triggered
    // - with LCDML_DISP_triggerMenu( milliseconds )
    // - with every button status change

    // check if any button is pressed (enter, up, down, left, right)
    if(LCDML.BT_checkAny()) {
      LCDML.FUNC_goBackToMenu();
    }
  }

  if(LCDML.FUNC_close())      // ****** STABLE END *********
  {
    // loop end
    // you can here reset some global vars or delete it
  }
}
*/
// *********************************************************************


// *********************************************************************
// Global variables
// *********************************************************************

//TEST FUNCTION TO SEE VALUES IN SERIAL FROM ADC; DEMO FUNCTION AT THE BOTTOM
#define SCL_INDEX 0x00
#define SCL_TIME 0x01
#define SCL_FREQUENCY 0x02
#define SCL_PLOT 0x03


String BatteryName [] { "Alkaline", "Duracel", "Rechargable", "Non-Rechargable"};
const uint16_t samples = 32;
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

const double samplingFrequency = 10000;
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
  Serial.println("Weighed data:");
  PrintVector(vReal, samples, SCL_TIME);

  FFT.Compute(vReal, vImag, samples, FFT_FORWARD); /* Compute FFT */
  FFT.ComplexToMagnitude(vReal, vImag, samples); /* Compute magnitudes */
  
  Serial.println("Computed magnitudes:");
  PrintVector(vReal, (samples >> 1), SCL_FREQUENCY);
  
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
    Serial.print(abscissa, 4);
    if (scaleType == SCL_FREQUENCY)
      Serial.print("Hz");
    Serial.print(" ");
    Serial.println(vData[i] * (5.0 / 1024.0), 2);
  }
  Serial.println();
}
