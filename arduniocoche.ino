/*Left tired variables*/
const int leftTire1 = 2;    // Conectada al pin 0
const int leftTire2 = 4;
const int leftTire_speed = 3;    // Pin variable

/*Right tired variables*/
const int rightTire1 = 7;    // Conectada al pin 0
const int rightTire2 = 8;
const int rightTire_speed = 6;    // Pin variable

int speedTire = 105;
int input;

void setup()
{
 Serial.begin(9600); //Iniciamos el serial
  
 pinMode (leftTire_speed, OUTPUT); 
 pinMode (leftTire1, OUTPUT);
 pinMode (leftTire2, OUTPUT);
  
 pinMode (rightTire_speed, OUTPUT); 
 pinMode (rightTire1, OUTPUT);
 pinMode (rightTire2, OUTPUT);

}
void loop()
{
  if (Serial.available()>0){
    input=Serial.read();
    if (input== 'w'){
      speedTire = 105;
      digitalWrite(leftTire1, HIGH);
      digitalWrite(leftTire2, LOW);
      digitalWrite(rightTire1, HIGH);
      digitalWrite(rightTire2, LOW);
      analogWrite(leftTire_speed,speedTire);
      analogWrite(rightTire_speed,speedTire);
      
    }
    else if(input== 's')
    {
      speedTire = 105;
      digitalWrite(leftTire1, LOW);
      digitalWrite(leftTire2, HIGH);
      digitalWrite(rightTire1, LOW);
      digitalWrite(rightTire2, HIGH);
      analogWrite(leftTire_speed,speedTire);
      analogWrite(rightTire_speed,speedTire);
    }
    else if(input== 'p')
    {
      speedTire = 0;
      analogWrite(leftTire_speed,speedTire);
      analogWrite(rightTire_speed,speedTire);
    }
  }
}
