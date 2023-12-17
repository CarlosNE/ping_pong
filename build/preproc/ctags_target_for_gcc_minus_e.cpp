# 1 "C:\\Users\\eguib\\OneDrive\\Documentos\\programming\\programming.ino"
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
  pinMode(red_right, 0x1);
  pinMode(yellow_right, 0x1);
  pinMode(green_six, 0x1);
  pinMode(green_five, 0x1);
  pinMode(green_four, 0x1);
  pinMode(green_three, 0x1);
  pinMode(green_two, 0x1);
  pinMode(green_one, 0x1);
  pinMode(red_left, 0x1);
  pinMode(player_one, 0x1);
  pinMode(player_two, 0x1);
}

void loop()
{
  digitalWrite(red_right, 0x1);
  delay(80);
  digitalWrite(13, 0);
  digitalWrite(12, 1);
}
