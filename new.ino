
const int startButtonPin = A2;

const int motorForwardPin = 1;
const int motorBackwardPin = 2;
const int waterPumpPin = 3;
const int waterOutPumpPin = 4;
const int spinningPin = 5;
const int DoorContactPin = 6; 

int startButtonState = 0;

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

  pinMode(startButtonPin, INPUT);

}

void loop() {

startButtonState = digitalRead(startButtonPin);

 if (startButtonState == 1) {

 
      digitalWrite(DoorContactPin, 0);
    Washing();
    vidange();
    Washing();
    vidange();

    rinsing();
    vidange();

    rinsing();
    vidange();

    essorage();
          


 }
 return;
}


void Washing() {
   digitalWrite(waterPumpPin, 0); 

     digitalWrite(waterOutPumpPin, 0);


 const int cycleCount = 15; // Number of washing cycles

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
    digitalWrite(waterPumpPin, 0); 
    delay(2000); // A3ML DELAY BIN PRELAV O VIDABGE     

      digitalWrite(waterOutPumpPin, 1);


}



void vidange() {
 // Assuming a pin has been connected to a relay
digitalWrite(waterOutPumpPin, 1);

 const int cycleCount = 1; // Number of washing cycles

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



      digitalWrite(waterOutPumpPin, 0);



  delay(2000);


}

void rinsing() {
  digitalWrite(waterPumpPin, 0); 
     digitalWrite(waterOutPumpPin, 0);


  const int cycleCount = 4; // Number of cycles each cycle is 1 min

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

      digitalWrite(waterPumpPin, 1); 
delay(2000);
}

void essorage() {

     digitalWrite(waterOutPumpPin, 1);
     
      digitalWrite(spinningPin, 0);
      digitalWrite(motorForwardPin, 0);

                delay(420000);// 7 min
      digitalWrite(motorForwardPin, 1);
      digitalWrite(spinningPin, 1);  
      
      
    digitalWrite(waterOutPumpPin, 0);

 delay(60000); // 1min

      digitalWrite(DoorContactPin, 1);
}