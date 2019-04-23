//int analogPin = 3; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read
float voltage;
float pres;
float val2volt = 5.0/1023.0; //mega 10bit is 1023
float volt2pres_a = 1000.0/4.5;//4.5 is param
float volt2pres_b = 185.71/4.5;//185.71 is param

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  val = analogRead(A3);  // read the input pin
  voltage = val2volt * val;
  pres = (volt2pres_a * voltage) - volt2pres_b;
  Serial.println(val);          // debug value
  Serial.println(pres);
  delay(100);
}
