/*
   Project : Smart Car
   Developer : Chanchal Roy
   Date : 20th April 2023
   GitHub : https://github.com/codewithcc/Smart-Car-using-Arduino/
*/

// Input signal pins of L298N
#define IN1 3
#define IN2 5
#define IN3 6
#define IN4 9

int itr = 0, dt = 300;

// Stops the Car
void stopCar()
{
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
}

// Forwards the Car
void forward(float d)
{
  analogWrite(IN1, 255);
  analogWrite(IN2, 0);
  analogWrite(IN3, 255);
  analogWrite(IN4, 0);
  int t = d / 132.8 * 1000;
  delay(t);
  stopCar();
}

// Backwards the Car
void backward(float d)
{
  analogWrite(IN1, 0);
  analogWrite(IN2, 255);
  analogWrite(IN3, 0);
  analogWrite(IN4, 255);
  int t = d / 130.083 * 1000;
  delay(t);
  stopCar();
}

// Turns the Car to Right
void turnRight(int deg)
{
  analogWrite(IN1, 255);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 255);
  int t = deg / 411.0 * 1000;
  delay(t);
  stopCar();
}

// Turns the Car to Left
void turnLeft(float deg)
{
  analogWrite(IN1, 0);
  analogWrite(IN2, 255);
  analogWrite(IN3, 255);
  analogWrite(IN4, 0);
  int t = deg / 395.0 * 1000;
  delay(t);
  stopCar();
}

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, 0);
  stopCar();
}

void loop()
{
  while (itr < 1)
  {
    turnLeft(360);
    itr++;
  }
}
