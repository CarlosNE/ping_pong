int red_right = 13;
int yellow_right = 12;
int green_six = 11;
int green_five = 10;
int green_four = 9;
int green_three = 8;
int green_two = 7;
int green_one = 6;
int red_left = 5;
int player_one = 3;
int player_two = 4;
void setup()
{
  pinMode(red_right, OUTPUT);
  pinMode(yellow_right, OUTPUT);
  pinMode(green_six, OUTPUT);
  pinMode(green_five, OUTPUT);
  pinMode(green_four, OUTPUT);
  pinMode(green_three, OUTPUT);
  pinMode(green_two, OUTPUT);
  pinMode(green_one, OUTPUT);
  pinMode(red_left, OUTPUT);
  pinMode(player_one, OUTPUT);
  pinMode(player_two, OUTPUT);
}

void loop()
{
  digitalWrite(red_right, HIGH);
  delay(80);
  digitalWrite(13, 0);  
  digitalWrite(12, 1);
}