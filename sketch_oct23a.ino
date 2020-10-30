void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

  float vin = 0;
  float vout = 0;
  float rl = 0;
  float il = 0;

void loop() {
  
  vin = analogRead(A0);

  vout = (vin*5)/1023;
  
  rl = 560*((5/vout)-1);
  
  il = pow((rl/127562),-1.16550117);
  Serial.print("VOLTAJE ANALOGICO: ");
   Serial.print(vout);
  Serial.println("V");
  Serial.println();
  Serial.print("INTENSIDAD LUMINNICA: ");
  Serial.print(il);
  Serial.println(" lux");
  Serial.println();
  Serial.print("VALOR RESISTENCIA: ");
  Serial.print(rl);
  Serial.println("Ohms");
  Serial.println();
  Serial.println();
  Serial.println();
  if(il<2000)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  
  delay(2000);
}
