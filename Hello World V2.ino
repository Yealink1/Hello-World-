int kurz = 250;
int lang = 2000;

void setup() {
 pinMode(D4, OUTPUT);
}

void loop() {
  Ledswitch(kurz); //Anfang erstes Wort
  Ledswitch(kurz);
  Ledswitch(kurz);
  Ledswitch(kurz);
  delay(lang);
  Ledswitch(kurz);
  delay(lang);
  Ledswitch(kurz);
  Ledswitch(lang);
  Ledswitch(kurz);
  Ledswitch(kurz);
  delay(lang);
  Ledswitch(kurz);
  Ledswitch(lang);
  Ledswitch(kurz);
  Ledswitch(kurz);
  delay(lang),
  Ledswitch(lang);
  Ledswitch(lang);
  Ledswitch(lang); //Ende erstes Wort 

  delay(5000);  //Wort abstand 

  Ledswitch(kurz); //Anfang zweites Wort
  Ledswitch(lang);
  Ledswitch(lang);
  delay(lang);
  Ledswitch(lang);
  Ledswitch(lang);
  Ledswitch(lang);
  delay(lang);
  Ledswitch(kurz);
  Ledswitch(lang);
  Ledswitch(kurz);
  delay(lang);
  Ledswitch(lang);
  Ledswitch(kurz);
  Ledswitch(kurz);  //Ende zweites Wort
}

void Ledswitch(int timing){
  digitalWrite(D4, LOW);
  delay(timing);
  digitalWrite(D4, HIGH);
  delay(kurz);
}
