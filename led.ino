void paralelo (int time ){
  digitalWrite(13,HIGH) ;
  delay(time);
  digitalWrite(13,LOW);
  delay(time);
}

void setup() {
  // put your setup code here, to run once:
pinmode (13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ford (int i=0 ; i<3 ; i++){
digitalwrite(13,HIGH); //turn the led  on (HIGH is the voltaje level  )
delay(1000/(2^i)); //
digitalwrite(13,LOW); //
delay(1000/(2^i));// wait for a second
}
}
//digitalwrite(13,HIGH); //turn the led  on (HIGH is the voltaje level  )
//delay(1000); //
//digitalwrite(13,LOW); //
//delay(1000);// wait for a second
//}
