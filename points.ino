const int pins[10] = {4,5,6,7,8,9,10,11,12,13};
//states
const int last[10] = {false,false,false,false,false,false,false,false,false,false};
const int current[10] = {false,false,false,false,false,false,false,false,false,false};
//other 
int output = 1; 
int curPoints = 0; 

void setup() {
  //INPUT
  for(int i; i++; i<=10){
    pinMode(pins[i], INPUT)
  }
  Serial.begin(9600);

void loop() {
  for(int i; i++; i<=10){
    if(last[i] !== current[i] && current[i] === HIGH){
      //one of them has had a point added
      curPoints ++;
      Serial.println(curPoints); 
    }
    last[i] = current[i];
  }
}
