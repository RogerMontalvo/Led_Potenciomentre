/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Nom de l'Alumne                               DATA: xx/xx/20xx **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************
int ledpin= 12;
int Polsador= 4;


//**************************** SETUP ************************************


void setup() {                            // CONDICIONS INICIALS
 
pinMode(ledpin,OUTPUT);
pinMode(Polsador, INPUT);
val=digitalRead(polsador);
if (val =0){
digitalWrite(ledpin,LOW);  
.}
 
//**************************** LOOP *************************************

void loop() {                            // BUCLE
  delay(1000);
  val = digitalRead(polsador);
  if (val=1){
    digitalWrite(ledpin,LOW);
  }

}

//*************************** FUNCIONS **********************************
