// Pin definitions

const int lockdownPin = A3;
const int startButtonPin = A1;      
const int stopButtonPin = A0;
const int motorForwardPin = 1;
const int motorBackwardPin = 2;
const int waterPumpPin = 3;
const int waterOutPumpPin = 4;
const int spinningPin = 5;
const int DoorContactPin = 6; // Output for door lock operation


// Flag to track whether testing has been completed
bool testingCompleted = false;

void setup() {
  pinMode(motorForwardPin, OUTPUT);
  pinMode(motorBackwardPin, OUTPUT);
  pinMode(waterPumpPin, OUTPUT);
  pinMode(waterOutPumpPin, OUTPUT);
  pinMode(spinningPin, OUTPUT);
  pinMode(DoorContactPin, OUTPUT);

  pinMode(lockdownPin, INPUT_PULLUP);
  pinMode(startButtonPin, INPUT_PULLUP);
  pinMode(stopButtonPin, INPUT_PULLUP);



   digitalWrite(motorForwardPin, 1);
  digitalWrite(motorBackwardPin, 1);
  digitalWrite(waterPumpPin, 1);
  digitalWrite(waterOutPumpPin, 1);
  digitalWrite(DoorContactPin, 1);
  digitalWrite(spinningPin, 1);

}

void loop() { 
  // Check if testing has been completed
  int lockdownState = digitalRead(lockdownPin);
  int startButtonState = digitalRead(startButtonPin);
  int stopButtonState = digitalRead(stopButtonPin);  // Add this line




//if (lockdownState == 1 && startButtonState == 1 && !testingCompleted ) {
if (!testingCompleted ) {

digitalWrite(DoorContactPin, 0);
   
   

  
   ///////////// Washing ////////////////

  digitalWrite(waterPumpPin, 0); 
      digitalWrite(motorForwardPin, 0); 
        delay(30000);  // 4 minutes in milliseconds
   digitalWrite(motorForwardPin, 1);
   delay(5000);  // DELAY bin lymin o lisar

    
      // Backward motion (adjust the duration as needed)
      digitalWrite(motorBackwardPin, 0); // Start motor backward
           delay(30000);    // 4 minutes in milliseconds
      digitalWrite(motorBackwardPin, 1); // Stop motor backward
     delay(2000);  // DELAY bin lymin o lisar

      
      // Forward motion (adjust the duration as needed)
      digitalWrite(motorForwardPin, 0); // Start motor forward
          delay(30000);   // 4 minutes in milliseconds
      digitalWrite(motorForwardPin, 1); // Stop motor forward
      delay(2000); // DELAY bin lymin o lisar


      // Backward motion (adjust the duration as needed)
      digitalWrite(motorBackwardPin, 0); // Start motor backward
            delay(30000);    // 4 minutes in milliseconds
      digitalWrite(motorBackwardPin, 1); // Stop motor backward


        digitalWrite(waterPumpPin, 1); 

     delay(2000); // A3ML DELAY BIN PRELAV O VIDABGE     



//:::::::::::: vidange ////////////////////////
 digitalWrite(waterOutPumpPin, 0);

    digitalWrite(motorForwardPin, 0); // Start motor forward
                delay(90000); //1,5 min
    digitalWrite(motorForwardPin, 1); // Stop motor forward

 delay(5000);


      digitalWrite(motorBackwardPin, 0); // Start motor backward
                delay(90000); //1,5 min
      digitalWrite(motorBackwardPin, 1); // Stop motor backward


      digitalWrite(waterOutPumpPin, 1);



  delay(5000);



  



   ///////////// Washing ////////////////

  digitalWrite(waterPumpPin, 0); 
      digitalWrite(motorForwardPin, 0); 
        delay(240000);  // 4 minutes in milliseconds
   digitalWrite(motorForwardPin, 1);
   
   delay(5000);  // DELAY bin lymin o lisar

    
      // Backward motion (adjust the duration as needed)
      digitalWrite(motorBackwardPin, 0); // Start motor backward
        delay(240000);  // 4 minutes in milliseconds
      digitalWrite(motorBackwardPin, 1); // Stop motor backward
     delay(2000);  // DELAY bin lymin o lisar

      
      // Forward motion (adjust the duration as needed)
      digitalWrite(motorForwardPin, 0); // Start motor forward
        delay(240000);  // 4 minutes in milliseconds
      digitalWrite(motorForwardPin, 1); // Stop motor forward
      delay(2000); // DELAY bin lymin o lisar


      // Backward motion (adjust the duration as needed)
      digitalWrite(motorBackwardPin, 0); // Start motor backward
          delay(240000);  // 4 minutes in milliseconds
      digitalWrite(motorBackwardPin, 1); // Stop motor backward
     delay(2000); // A3ML DELAY BIN PRELAV O VIDABGE     

    
    

  

//:::::::::::: vidange ////////////////////////
 digitalWrite(waterOutPumpPin, 0);

    digitalWrite(motorForwardPin, 0); // Start motor forward
                delay(90000); //1,5 min
    digitalWrite(motorForwardPin, 1); // Stop motor forward

 delay(5000);


      digitalWrite(motorBackwardPin, 0); // Start motor backward
                delay(90000); //1,5 min
      digitalWrite(motorBackwardPin, 1); // Stop motor backward


      digitalWrite(waterOutPumpPin, 1);



  delay(5000);




     
/////////// RINSING      ///////

 digitalWrite(waterPumpPin, 0); 
      digitalWrite(motorForwardPin, 0); 
        delay(120000);  // 2 minutes in milliseconds
   digitalWrite(motorForwardPin, 1);
  digitalWrite(waterPumpPin, 1); 
   delay(5000);  // DELAY bin lymin o lisar

    
      // Backward motion (adjust the duration as needed)
      digitalWrite(motorBackwardPin, 0); // Start motor backward
        delay(120000);  // 2 minutes in milliseconds
      digitalWrite(motorBackwardPin, 1); // Stop motor backward
     delay(2000);  // DELAY bin lymin o lisar



//:::::::::::: vidange ////////////////////////
 digitalWrite(waterOutPumpPin, 0);

    digitalWrite(motorForwardPin, 0); // Start motor forward
                delay(90000); //1,5 min
    digitalWrite(motorForwardPin, 1); // Stop motor forward

 delay(5000);


      digitalWrite(motorBackwardPin, 0); // Start motor backward
                delay(90000); //1,5 min
      digitalWrite(motorBackwardPin, 1); // Stop motor backward


      digitalWrite(waterOutPumpPin, 1);



  delay(5000);




     
/////////// RINSING      ///////

 digitalWrite(waterPumpPin, 0); 
      digitalWrite(motorForwardPin, 0); 
        delay(120000);  // 2 minutes in milliseconds
   digitalWrite(motorForwardPin, 1);
  digitalWrite(waterPumpPin, 1); 
   delay(5000);  // DELAY bin lymin o lisar

    
      // Backward motion (adjust the duration as needed)
      digitalWrite(motorBackwardPin, 0); // Start motor backward
        delay(120000);  // 2 minutes in milliseconds
      digitalWrite(motorBackwardPin, 1); // Stop motor backward
     delay(2000);  // DELAY bin lymin o lisar


////////// essorage - spinning

     digitalWrite(waterOutPumpPin, 0);
      digitalWrite(spinningPin, 0);
     
                delay(420000);// 7 min

      digitalWrite(waterOutPumpPin, 1);
      digitalWrite(spinningPin, 1);

      //FIN
       delay(60000); // 1min
       digitalWrite(DoorContactPin, 1);

testingCompleted = true;

   
     }
  /*   
      if (stopButtonState == 1) {
  // Code to stop everything
  digitalWrite(motorForwardPin, 1);
  digitalWrite(motorBackwardPin, 1);
  digitalWrite(waterPumpPin, 1);
  digitalWrite(waterOutPumpPin, 1);
  digitalWrite(spinningPin, 1);
         delay(60000); // 1min 
  digitalWrite(DoorContactPin, 1);
      }
   */
  
 
  return;
}
