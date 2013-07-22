
/* ScalableSSD Library
 Written by Rohan Seth, 2013
 
 Version 1.0; 
 
 Direct any questions or suggestions to rohanscar@gmail.com

I would like to thank Prof Dhananjay V. Gadre, Co-ordinator CEDT,NSIT and Rohit Dureja (Undergraduate Student, NSIT ) for their continuous guidance and support during the development of the library.
 
 Thanks to Dean Readings , Mark Chambers and Nathan Seidle for help  used from their library SevenSeg,2013 to code this segment.

Before This take a look at Readme included in the folder.

*/



#ifndef ScalableSSD_h
#define ScalableSSD_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


class ScalableSSD
{

public:
ScalableSSD();                    //Constructor
 

void Display();

void Sendnumber(char number1);
void Sendnumber(char number1,char DecPlace_in);		 
void Sendnumber(char number1,char number2,char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4, char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4,char number5, char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4,char number5, char number6,char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4,char number5,char number6,char number7, char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4,char number5,char number6,char number7,char number8,char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4,char number5,char number6,char number7,char number8,char number9,char DecPlace_in);	
void Sendnumber(char number1,char number2,char number3,char number4,char number5,char number6,char number7,char number8,char number9,char number10, char DecPlace_in);	

void Setup(boolean mode_in,int many,byte dec_allow, byte D1, byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1, byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3, byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4, byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4,byte D5, byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4,byte D5,byte D6,byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4,byte D5,byte D6,byte D7,byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4,byte D5,byte D6,byte D7,byte D8,byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4,byte D5,byte D6,byte D7,byte D8,byte D9,byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
void Setup(boolean mode_in,int many,byte dec_allow, byte D1,byte D2,byte D3,byte D4,byte D5,byte D6,byte D7,byte D8,byte D9,byte D10, byte S1, byte S2, byte S3, byte S4, byte S5, byte S6, byte S7, byte S8);
    //Public Variables


private:
 

//Private Functions
  void CreateArray();


//Private Variables
  boolean mode,DigitOn,DigitOff,SegOn,SegOff;
  int numeral;  
  byte DigitPins[11];
  byte SSDPins[8];
  boolean ssd[11][8];
  byte nums[11];
  int num1;
  int num2;  
  int num3;
  int num4;
  int decimall;
  byte Decimall;
  int DecPlace;

};

#endif