#include<Arduino_FreeRTOS.h>
void say (void *pvParameters);
void mesafe(void *pvParameters);
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int f = 7;
int G = 8;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
void setup() {
 xTaskCreate(say,
              (const portCHAR*)"TASK 1",
              100,
              NULL,
              1,
              NULL);
 
 xTaskCreate(mesafe,
              (const portCHAR*)"TASK 2",
              100,
              NULL,
              1,
              NULL);

}

void loop() {
  // put your main code here, to run repeatedly:

}
void say(void *pvParameters){
 (void) pvParameters;
for(int i=2 ; i<=8 ; i++ ){
  pinMode(i , OUTPUT);

}

const char *pcTaskName="say";
 Serial.begin(9600);
for(;;){
   //0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, LOW);
  digitalWrite(G, HIGH);
  Serial.print("Sayı:0\n");
delay(500);
 //1
digitalWrite(A, HIGH);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
Serial.print("Sayı:1\n");
delay(500);
//2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(G, LOW);
  Serial.print("Sayı:2\n");
  delay(500);
//3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(G, LOW);
Serial.print("Sayı:3\n");
delay(500);
//4 
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);

Serial.print("Sayı:4\n");
delay(500);

//5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
  Serial.print("Sayı:5\n");
delay(500);

//6 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
  Serial.print("Sayı:6\n");
delay(500);

//7 
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(G, HIGH);
  Serial.print("Sayı:7\n");
delay(500);
//8

  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
  Serial.print("Sayı:8\n");
delay(500);

//9
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
    Serial.print("Sayı:9\n");
    delay(1000);
  //8

  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
  Serial.print("Sayı:8\n");
  delay(500);
  //7
    digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(G, HIGH);
  Serial.print("Sayı:7\n");
delay(500);
//6 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
  Serial.print("Sayı:6\n");
delay(500);

//5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);
  Serial.print("Sayı:5\n");
delay(500);
//4 
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(G, LOW);

Serial.print("Sayı:4\n");
delay(500);
//3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(G, LOW);
Serial.print("Sayı:3\n");
delay(500);
//2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(G, LOW);
  Serial.print("Sayı:2\n");
  delay(500);
   //1
digitalWrite(A, HIGH);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(f, HIGH);
digitalWrite(G, HIGH);
Serial.print("Sayı:1\n");
delay(500);
   //0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(f, LOW);
  digitalWrite(G, HIGH);
  Serial.print("Sayı:0\n");
delay(500);     
Serial.println(pcTaskName);
vTaskDelay(1000/portTICK_PERIOD_MS);

}
}
 

void mesafe(void *pvParameters){
 (void) pvParameters;

const char *pcTaskName="mesafe";
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
for(;;){
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Ölçümüz: ");
Serial.println(distance);
  
Serial.println(pcTaskName);
vTaskDelay(1000/portTICK_PERIOD_MS);
}
 }

 
