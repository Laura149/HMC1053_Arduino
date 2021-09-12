double valor = 0; // 
const int analogInPinA = A0; 
const int analogInPinB = A1; 
const int analogInPinC = A2; 

int sensorValueA = 0; 
int sensorValueB = 0;    
int sensorValueC = 0;           
int milisegundos=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValueA = analogRead(analogInPinA); 

//delay(100); 
sensorValueB = analogRead(analogInPinB); 
 
//delay(100); 
sensorValueC = analogRead(analogInPinC); 
 milisegundos=millis(); 
//delay(100); 
   // print the results to the serial monitor:
Serial.print(sensorValueA);//milisegundo sno tiene valor aun 
Serial.print("," );

Serial.print(sensorValueB);
Serial.print("," );

Serial.print(sensorValueC);
Serial.print("," );

Serial.println(milisegundos);

    
}
