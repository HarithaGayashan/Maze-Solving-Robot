#define trig_front 4
#define echo_front 5
#define trig_left 6
#define echo_left 7
#define trig_right 8
#define echo_right 9

#define left_forward 10
#define left_backword 11
#define right_forward 14
#define right_backword 15



int distance;
long duration;

int left_distance(){
  digitalWrite(trig_left,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_left,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_left,LOW);

  duration=pulseIn(echo_left,HIGH);
  distance=duration*0.034/2;
  return distance;
}

int right_distance(){
    digitalWrite(trig_right,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_right,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_right,LOW);

  duration=pulseIn(echo_right,HIGH);
  distance=duration*0.034/2;
  return distance;
  
}

int front_distance(){
    digitalWrite(trig_front,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_front,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_front,LOW);

  duration=pulseIn(echo_front,HIGH);
  distance=duration*0.034/2;
  return distance;
}

/*
#define left_forward 10
#define left_backword 11
#define right_forward 14
#define right_backword 15
*/
void turn_left(int wait){
  digitalWrite(left_forward,LOW);
  digitalWrite(left_backword,LOW);
  digitalWrite(right_forward,HIGH);
  digitalWrite(right_backword,LOW);
  delay(wait);
}

void turn_right(int wait){
   digitalWrite(left_forward,HIGH);
  digitalWrite(left_backword,LOW);
  digitalWrite(right_forward,LOW);
  digitalWrite(right_backword,LOW);
  delay(wait);
  
}

void go_forward(int wait){
   digitalWrite(left_forward,HIGH);
  digitalWrite(left_backword,LOW);
  digitalWrite(right_forward,HIGH);
  digitalWrite(right_backword,LOW);
  delay(wait);
  
}

void go_backword(int wait){
   digitalWrite(left_forward,LOW);
  digitalWrite(left_backword,HIGH);
  digitalWrite(right_forward,LOW);
  digitalWrite(right_backword,HIGH);
  delay(wait);
  
}
void stop_car(int wait){
   digitalWrite(left_forward,LOW);
  digitalWrite(left_backword,LOW);
  digitalWrite(right_forward,LOW);
  digitalWrite(right_backword,LOW);
  delay(wait);
}

void setup() {
  // put your setup code here, to run once:
pinMode(trig_front,OUTPUT);
pinMode(echo_front,INPUT);
pinMode(trig_left,OUTPUT);
pinMode(echo_left,INPUT);
pinMode(trig_right,OUTPUT);
pinMode(echo_right,INPUT);
}

void loop() {
 

}
