/*
The code is for the Line-follower using 3-IR sensors
Author name: Mohith K U
Author email: mohithmandanna29@gmail.com
*/

//define the pins 
#define ir_left 5
#define ir_center 6
#define ir_right 7

//pins of motor one
#define ENA 8
#define IN1 12
#define IN2 13

//pins of motor two
#define ENB 9
#define IN3 10
#define IN4 11

int Speed = 100; // speed of the robot

void setup() {
  Serial.begin(9600);
  pinMode(ir_left, INPUT);
  pinMode(ir_center, INPUT);
  pinMode(ir_right, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  bool left = digitalRead(left);
  bool center = digitalRead(center);
  bool right = digitalRead(right);

  Serial.println(right);
//if else condition
//1=white,0=black 
  if (left == 1 && center == 0 && right == 1) {
    carforward();
    Serial.println("forward");
  } else if (left == 0 && center == 0 && right == 0) {
    carforward ();
 // } else if (left == 1 && center == 1 && right == 1) {
   // carStop();
  } else if (left == 0 && center == 0 && right == 1) {
    carturnleft();
    } else if (left == 0 && center == 1 && right == 0) {
    carturnleft(); //left or right
  } else if (left == 0 && center == 1 && right == 1) {
    carturnleft();  
  } else if (left == 1 && center == 0 && right == 0) {
    carturnright();
  } else if (left == 1 && center == 1 && right == 0) {
    carturnright();
  }
}
//forward direction
void carforward() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
//left direction
void carturnleft() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
//right direction
void carturnright() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
//stop the robot
void carStop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
