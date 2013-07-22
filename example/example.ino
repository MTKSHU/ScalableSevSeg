
#include "ScalableSSD.h"                        //Inclusion of our library.
ScalableSSD Test;                               //Create an instance of the object


void setup() {
  Test.Setup(0,2,1,10,11,8,7,6,5,4,3,2,9);     //The parameters here are for two SSD's , though it allows upto eleven SSD's. 
  pinMode(13,OUTPUT) ;                          //Parameter Sequence : 1)First : 0/1 for cathode , anode respectively
  pinmode(12,OUTPUT);                                              //  2)Second : The number of SSD's you Wish to connect.
                                                                  //   3)Third : Whether you wish to have decimal or not .(1=allow ; 0 =disallow)
                                                                  //   4)Fourth onwards:The Arduino Digital Pins of common connection.
                                                                  //   5)Remaining:The Segment Pins in Higher to Lower order and DP being Last.*/
    
}

void loop() 
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);                     //Sketch shall be responsible for setting up the pins that are not in use in the library but have ben connected in hardware.
  Test.Sendnumber('A',1,0);                 //To update the number send in the parameters .. IT can receive char as well as int arguments .. TO leave any ssd blank supply any argument beyong 0-9 or a-f.
  
  Test.Display();                          //Call this to Produce an output on the display. REMEMBER : Default value is 0000 so if you use this without updating the number then you would get 0000 as display.
 
}

