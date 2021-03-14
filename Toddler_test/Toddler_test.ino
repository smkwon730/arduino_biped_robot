#include <Servo.h> 
 
Servo servo1;  // create servo object to control a servo 
Servo servo2;
Servo servo3;
Servo servo4;
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
                                            
 
void setup() 
{ 
  servo1.attach(3);  // attaches the servo 
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  
  servo1.write(99);  
  servo2.write(83);
  servo3.write(74);
  servo4.write(78);
  delay(2000);
} 
 


void leftForward(){    //Moving Left Leg Forward
  servo4.write(60);   //right foot 
  servo2.write(60);   //left foot
  delay(500);
  
  servo3.write(50);     //right hip
  servo1.write(70);     //left hip
  delay(100);
 
  servo4.write(60);       //right foot back to flat
  delay(250);
  servo4.write(70);
  delay(250);
  servo4.write(83);
  servo2.write(83);       //left foot back to flat
  delay(500);  
}


void rightForward(){     //Moving Right Leg Forward
  servo4.write(100);        //right foot                   
  servo2.write(100);         //left foot
  delay(500);
  
  servo1.write(120);        //left hip
  servo3.write(90);         //right hip
 delay(100); 
 
  servo2.write(103);         //left foot back to flat
  delay(250);
  servo2.write(93);
  delay(250);
  servo2.write(83);
   servo4.write(78);           //right foot back to flat
}


void leftBackward(){  // moving left leg backwards
  servo4.write(60);    //right foot
  servo2.write(60);    // left foot
  delay(500);
  
   servo3.write(98);     //right hip
  servo1.write(115);     //left hip
  delay(100);
  
   servo4.write(60);       //right foot back to flat
  delay(250);
  servo4.write(70);
  delay(250);
  servo4.write(83);
  servo2.write(83);       //left foot back to flat
  delay(500);  
}



void rightBackward(){
  servo4.write(100);        //right foot                   
  servo2.write(100);         //left foot
  delay(500);
  
  servo1.write(78);        //left hip
  servo3.write(58);         //right hip
 delay(100); 
 
  servo2.write(103);         //left foot back to flat
  delay(250);
  servo2.write(93);
  delay(250);
  servo2.write(83);
   servo4.write(78);           //right foot back to flat
}




//Main Function
void loop() 
{ 
 leftForward();
 rightForward();
 delay(500);
 leftForward();
 rightForward();
 delay(500);
 leftForward();
 rightForward();
 
 delay(500);
 
 
 leftBackward();
   rightBackward();
  delay(500);
  leftBackward();
   rightBackward();
  delay(500);
  leftBackward();
   rightBackward();
   delay(500);
  
  
  
  
}
