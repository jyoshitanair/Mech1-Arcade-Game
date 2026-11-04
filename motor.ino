const int enable = 12; 
const int left = 10; 
const int right = 9; 
const int button = 8; 
bool ooo = false;
int lastbutton = false;
void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(enable, OUTPUT);
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
}

void loop() {
  if(digitalRead(button)==LOW && digitalRead(button)!= lastbutton){
    ooo = !ooo;
    delay(5);
  }
  if(ooo){
    digitalWrite(enable, HIGH);
    digitalWrite(left, HIGH);
    digitalWrite(right, LOW);
  }else{
    digitalWrite(enable, LOW);
  }
  lastbutton = digitalRead(button);
}
