#include <Servo.h>

int delayVal2 = 25; 
int delayVal = 40;
bool time = true;  
//Creating Servo Objects
Servo rightAnkle;
Servo leftAnkle;
Servo rightKnee;
Servo leftKnee;
Servo rightThigh;
Servo leftThigh;
Servo rightHip;
Servo leftHip;

//Function Prototype//
void stand();
void turnLeft();
void turnRight();

void setup()
{
 //Servo input pins
 rightAnkle.attach(2);
 rightKnee.attach(3);
 rightThigh.attach(4);
 rightHip.attach(5);
 leftAnkle.attach(6);
 leftKnee.attach(7);
 leftThigh.attach(8);
 leftHip.attach(9);
 stand();
 delay(2000);
/*
stand();
for(int i = 0; i < 3; i+= 1)  
  { 
 legs();     }
handDemo();



 for(int i = 0; i < 8; i+= 1)  
  { 
 legs();     }
 
*/
}

void loop() 
{}

int rightAnkPos = 83;
int rightKneePos = 88;
int rightThighPos = 100;
int rightHipPos = 90;  
int leftAnkPos = 88;
int leftKneePos = 90;
int leftThighPos = 65;
int leftHipPos = 81;


//Function Definition//

void stand ()
{ 
  rightAnkle.write(83);
  int rightAnkPos = 83;
  rightKnee.write(88);
  int rightKneePos = 88;
  rightThigh.write(100);
  int rightThighPos = 100;
  rightHip.write(90);
  int rightHipPos = 90;
  leftAnkle.write(88);
  int leftAnkPos = 88;
  leftKnee.write(90);
  int leftKneePos = 90;
  leftThigh.write(65);
  int leftThighPos = 65;
  leftHip.write(81);
  int leftHipPos = 81;
}


///////////////Legs//////////////////


void legs()
{
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 2;
    rightAnkPos -= 2;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(delayVal2); }   
  delay(10);
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos -= 2;
    rightAnkPos += 2;
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
    delay(delayVal2); } 
delay(10);
for(int i = 0; i < 6 ; i+= 1)  
  {   
    leftAnkPos -= 2;
    rightAnkPos += 2;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );  
    delay(delayVal2); } 
delay(10);  
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 2;
    rightAnkPos -= 2;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(delayVal2); } 
   delay(10); 
}


////////////FORWARD///////////////


void forward()
{
  
for(int i = 0; i < 5; i+= 1)  
  {
    if (time){
   leftThighPos -= 2;               
    leftKneePos += 2;
   leftThigh.write( leftThighPos);
    leftKnee.write(leftKneePos );

    delay(delayVal2);}
  } 
 

//Left and Right Ankle Bend Left    
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 2;
    rightAnkPos += 2;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(delayVal2); 
  } 
    
delay(delayVal); 


//Straighten Left Leg
for(int i = 0; i < 5; i+= 1)  
  {   
    leftThighPos += 2;               
    leftKneePos -= 2;
   leftThigh.write( leftThighPos);
    leftKnee.write(leftKneePos); 
 
    delay(delayVal2);
  } 


//right leg forward
for(int i = 0; i < 5; i+= 1)  
  {
     rightThighPos += 2;
    rightKneePos -= 2; 
    rightThigh.write( rightThighPos);
    rightKnee.write(rightKneePos);    
    
    delay(delayVal2); 
  } 


//Right and Left Ankle back to Normal
  for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos -= 2;
    rightAnkPos -= 2;
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
    
    delay(delayVal2); 
  } 


//Right and left Ankle Bend right 
  for(int i = 0; i < 6 ; i+= 1)  
  {   
    leftAnkPos -= 2;
    rightAnkPos -= 2;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos);  
    
    delay(delayVal2); 
  } 

delay(delayVal);  

//Straighten Right Leg
for(int i = 0; i < 5; i+= 1)  
  {
    rightThighPos -= 2;
    rightKneePos += 2;
   rightThigh.write( rightThighPos);
    rightKnee.write(rightKneePos); 
     
    delay(delayVal2);
  } 
  

//Left Leg bend Forward
for(int i = 0; i < 5; i+= 1)  
  {
   leftThighPos -= 2;               
    leftKneePos += 2;
   leftThigh.write( leftThighPos);
    leftKnee.write(leftKneePos);
   
    delay(delayVal2);
  } 


//Ankles back to normal
  for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 2;
    rightAnkPos += 2;   
     rightAnkle.write(rightAnkPos);   
    leftAnkle.write(leftAnkPos);
    delay(delayVal2);
  }   

time = false;

}



///////////////LEFT/////////////////////////////////////////


void turnLeft()
{
for(int i = 0; i < 5; i+= 1)  
  {  
    leftThighPos -= 2;               
    leftKneePos += 2;
   leftThigh.write( leftThighPos);
    leftKnee.write(leftKneePos); 
      
    delay(60);
  }   


//Left and Right Ankle Bend Left    
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos); 
    
    delay(60);
  } 
    
delay(delayVal);  


//Left Hip Counter ClockWise, 
for(int i = 0; i < 5; i+= 1)  
  {   
    leftHipPos -= 4;  
    leftHip.write(leftHipPos);
    
    delay(60);
    } 
    
delay(delayVal);


//Left and Right Ankle back to normal   
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 

    delay(60); 
  } 

 
//Left and Right Ankle Bend Right Left Hip Straighten
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
    leftHipPos += 4;  
    leftHip.write(leftHipPos); 
    
    delay(60); 
  } 
    
delay(delayVal);


//Right Hip Counter Clockwise
for(int i = 0; i < 5; i+= 1)  
  {   
    rightHipPos -=4;
    rightHip.write(rightHipPos); 
    leftHipPos += 4;
    leftHip.write(leftHipPos);
 
    delay(60); 
  } 
    
delay(delayVal);


//Left and Right Ankle Normal
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
     
    delay(60); 
  } 
    
delay(delayVal);


///////SECOND TIME///////////////

//Left and Right Ankle BEND LEFT 
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    leftThighPos += 2;               
    leftKneePos -= 2;
   leftThigh.write( leftThighPos);
    leftKnee.write(leftKneePos ); 
    delay(60); } 
    
delay(delayVal);



//LEFT HIP CC
for(int i = 0; i < 5; i+= 1)  
  {   
    leftHipPos -= 4;  
    leftHip.write(leftHipPos); 
    
    rightHipPos +=4;
     
    rightHip.write(rightHipPos);
    
    delay(60); } 
    
delay(delayVal);




//LEFT RIGHT ANKLE NORMAL   
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); } 
    
   

//Left and Right Ankle Bend Right 
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
     
    
    
    delay(60); } 
    
delay(delayVal);
 

//Right Hip Counter Clockwise
for(int i = 0; i < 5; i+= 1)  
  {   

    rightHipPos -=5;
     
    rightHip.write(rightHipPos); 
    
    leftHipPos += 2;  
    leftHip.write(leftHipPos); 
 
    delay(60); }


//LEFT RIGHT ANKLE NORMAL   
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); }

//LEFT RIGHT ANKLE BEND LEFT
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    rightHipPos +=5; 
    rightHip.write(rightHipPos); 
    leftHipPos -= 2;  
    leftHip.write(leftHipPos); 
    
    delay(60); }
    

//LEFT RIGHT ANKLE STRAIGHT
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); }
}


/////////////////TURN RIGHT///////////////////////////////////////////////

void turnRight ()
{
  for(int i = 0; i < 5; i+= 1)  
  {  
  rightThighPos += 1;
    rightKneePos -= 1; 
    rightThigh.write( rightThighPos);
    rightKnee.write(rightKneePos );
    delay(60);
  }  
  
//Left and Right Ankle Bend Right    
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); } 
    
delay(delayVal); 



//right Hip ClockWise, Left leg forward
for(int i = 0; i < 5; i+= 1)  
  {   
    rightHipPos +=4; 
    rightHip.write(rightHipPos);
      
       delay(60); } 
    
delay(delayVal);


//Left and Right Ankle back to normal   
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); } 




//Left and Right Ankle Bend Leftt right Hip Straighten
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
    rightHipPos -=4; 
    rightHip.write(rightHipPos);
    delay(60); } 
    
delay(delayVal);


//Left Hip Counter Clockwise
for(int i = 0; i < 5; i+= 1)  
  {   

    rightHipPos -=4;
     
    rightHip.write(rightHipPos); 
    leftHipPos += 4;
      
    leftHip.write(leftHipPos);
 
    delay(60); } 
    
delay(delayVal);

//Left and Right Ankle Normal
for(int i = 0; i < 5; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
     
    delay(60); } 
    
delay(delayVal);

//Second Time

//Left and Right Ankle BEND RIGHT, Right Thigh/Knee Straighten
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    
    delay(60); } 
    
delay(delayVal);

//Right HIP CW, Left Hip Straighten
for(int i = 0; i < 5; i+= 1)  
  {   
    
    
    rightHipPos +=4;
     leftHipPos -= 4;  
    leftHip.write(leftHipPos); 
    rightHip.write(rightHipPos);
    
    delay(60); } 
    
delay(delayVal);

//LEFT RIGHT ANKLE NORMAL   
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); } 

    
////////Third Time //////////  

//Left and Right Ankle Bend Left
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos );
     
    
    delay(60); } 
    
delay(delayVal);


//Left Right Hip CW 
for(int i = 0; i < 5; i+= 1)  
  {   

    rightHipPos -=5;
     
    rightHip.write(rightHipPos); 
    
    leftHipPos += 2;  
    leftHip.write(leftHipPos);
   
   rightThighPos -= 1;
    rightKneePos += 1; 
    rightThigh.write( rightThighPos);
    rightKnee.write(rightKneePos ); 
 
    delay(60); }


//LEFT RIGHT ANKLE NORMAL   
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); }


//LEFT RIGHT ANKLE BEND Right
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos -= 3;
    rightAnkPos -= 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    delay(60); }

//Right Hip  Normal
for(int i = 0; i < 5; i+= 1)  
  {   
    
    rightHipPos +=5; 
    rightHip.write(rightHipPos); 
    
    delay(60); }
    
    
//Left Hip  Normal
for(int i = 0; i < 5; i+= 1)  
  {   
    
    leftHipPos -= 2;  
    leftHip.write(leftHipPos); 
    
    delay(60); }

//LEFT RIGHT ANKLE STRAIGHT
for(int i = 0; i < 6; i+= 1)  
  {   
    leftAnkPos += 3;
    rightAnkPos += 3;    
    leftAnkle.write(leftAnkPos);
    rightAnkle.write(rightAnkPos ); 
    
    delay(60); }

}
