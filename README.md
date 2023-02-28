# map_Function
analog value  convert  digital (0,1) using map function

using esp8266 pin A0 as input pin

int  val = analogRead(button);

map(val, min, max, min_Value, max_Value);

min- analog  input 

max - analog input

min_Value- value user want to start

max_Value- max value user want

map(val, 0, 1023, 0, 1);
