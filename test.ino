int led = 5;    
int button = A0; 
   

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);  
  pinMode(button, INPUT);
}

void loop() {
    int  buttonState = analogRead(button);
     Serial.println(buttonState);
     int value = map(buttonState, 0, 1023, 0, 1);
          Serial.println(value);

     if (value == HIGH) {
        digitalWrite(led, HIGH);
        Serial.println("LED ON");
        delay(100);
       }
     else {
        digitalWrite(led, LOW);
        Serial.println("LED OFF");
        delay(100);
     }
}
