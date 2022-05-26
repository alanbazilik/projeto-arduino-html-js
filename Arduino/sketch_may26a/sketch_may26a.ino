int led = 11;

void setup()
{
  //Define a porta do led como saida
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}
  
void loop()
{
  char serial = Serial.read();

  if(serial == 'l'){
      digitalWrite(11, HIGH);
    }
  if(serial == 'd'){
  digitalWrite(11, LOW);
    }

    

    


}
