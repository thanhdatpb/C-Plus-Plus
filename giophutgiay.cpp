#include<iostream>
#include<string>

using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;

public:
	Time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}

	void setTime(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
int getHour() 
{
  return hour;
  
}
void setHour(int hour){
this->hour = hour;
}
int getMinute() 
{
  return minute;
}
void setMinute(int minute){
  this->minute = minute;
}
int getSecond()
{
  return second;
}
void setSecond(int second){
  this->second = second;
}
void previousSecond(){
  if hour==0 || minute==0 || second==
}
