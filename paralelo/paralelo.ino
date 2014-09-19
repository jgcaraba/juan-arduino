void setup() {
  // put your setup code here, to run once:
pinmode (13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalwrite(13,HIGH); //turn the led  on (HIGH is the voltaje level  )
delay(1000); //
digitalwrite(13,LOW); //
delay(1000);// wait for a second
}
