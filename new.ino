

const int motorForwardPin = 1;
const int motorBackwardPin = 2;
const int waterPumpPin = 3;
const int waterOutPumpPin = 4;
const int spinningPin = 5;
const int DoorContactPin = 6; 

bool testingCompleted = false;

void setup() {
 pinMode(motorForwardPin, OUTPUT);
  pinMode(motorBackwardPin, OUTPUT);
  pinMode(waterPumpPin, OUTPUT);
  pinMode(waterOutPumpPin, OUTPUT);
  pinMode(spinningPin, OUTPUT);
  pinMode(DoorContactPin, OUTPUT);


   digitalWrite(motorForwardPin, 1);
  digitalWrite(motorBackwardPin, 1);
  digitalWrite(waterPumpPin, 1);
  digitalWrite(waterOutPumpPin, 1);
  digitalWrite(DoorContactPin, 1);
  digitalWrite(spinningPin, 1);
}

void loop() {
 // Check if testing has been completed
 if (!testingCompleted) {

    // Call each test procedure in sequence
 
      digitalWrite(DoorContactPin, 0);
    Washing();
    vidange();
    rinsing();
    essorage();
    // Set the flag to indicate testing is completed
           delay(60000); // 1min

      digitalWrite(DoorContactPin, 1);

    testingCompleted = true;

 }

 // Optional: Add additional code here if needed

 // Exit the loop and stop the program
 return;
}


void Washing() {
   digitalWrite(waterPumpPin, 0); 
/*
    


 const int cycleCount = 2; // Number of washing cycles

  for (int cycle = 0; cycle < cycleCount; cycle++) {
    // Forward
    digitalWrite(motorForwardPin, 0);
    delay(30000);  // 30s in milliseconds
    digitalWrite(motorForwardPin, 1);
    delay(2000);

    // Backward
    digitalWrite(motorBackwardPin, 0);
    delay(30000);  // 30s in milliseconds
    digitalWrite(motorBackwardPin, 1);
    delay(2000);
  }
*/
    digitalWrite(waterPumpPin, 1); 
    delay(2000); // A3ML DELAY BIN PRELAV O VIDABGE     



}



void vidange() {
 // Assuming a pin has been connected to a relay
digitalWrite(waterOutPumpPin, 0);

 /*   digitalWrite(motorForwardPin, 0); // Start motor forward
                delay(90000); //1,5 min
    digitalWrite(motorForwardPin, 1); // Stop motor forward
   delay(5000);
      digitalWrite(motorBackwardPin, 0); // Start motor backward
                delay(90000); //1,5 min
      digitalWrite(motorBackwardPin, 1); // Stop motor backward

*/

 const int cycleCount = 3; // Number of washing cycles

  for (int cycle = 0; cycle < cycleCount; cycle++) {
    // Forward
    digitalWrite(motorForwardPin, 0);
    delay(30000);  // 30s in milliseconds
    digitalWrite(motorForwardPin, 1);
    delay(2000);

    // Backward
    digitalWrite(motorBackwardPin, 0);
    delay(30000);  // 30s in milliseconds
    digitalWrite(motorBackwardPin, 1);
    delay(2000);
  }



      digitalWrite(waterOutPumpPin, 1);



  delay(2000);


}

void rinsing() {
  digitalWrite(waterPumpPin, 0); 


  const int cycleCount = 2; // Number of cycles each cycle is 1 min

  for (int cycle = 0; cycle < cycleCount; cycle++) {
    // Forward
    digitalWrite(motorForwardPin, 0);
    delay(30000);  // 30s in milliseconds
    digitalWrite(motorForwardPin, 1);
    delay(2000);

    // Backward
    digitalWrite(motorBackwardPin, 0);
    delay(30000);  // 30s in milliseconds
    digitalWrite(motorBackwardPin, 1);
    delay(2000);
  }

     
     
      digitalWrite(waterPumpPin, 1); 
delay(2000);
}

void essorage() {

     digitalWrite(waterOutPumpPin, 0);
      digitalWrite(spinningPin, 0);
     
                delay(420000);// 7 min

      digitalWrite(waterOutPumpPin, 1);
      digitalWrite(spinningPin, 1);

   /*   //FIN
       delay(60000); // 1min
       digitalWrite(DoorContactPin, 1);*/
}