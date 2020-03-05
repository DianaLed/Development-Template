//#ifndef INCLUDE_ADD_H_
//#define INCLUDE_ADD_H_
//
//int add(int x, int y);
//
//#endif  // INCLUDE_ADD_H_

// Copyright 2020 <Diana Lukashuk>
#pragma once
#ifndef INCLUDE_DateClass_H_
#define INCLUDE_DateClass_H_
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Time {
public:
  Time();
  Time(int s);
  Time(int h, int m, int s);
  friend ostream& operator << (ostream& stream, const Time& a);
  friend istream& operator >> (istream& stream, Time& a);

  //bool operator==(const Time& t);
  friend bool operator==(const Time& left, const Time& right) {
    bool res = 0;
    if ((left.min == right.min) && (left.hou == right.hou) && (left.sec == right.sec)) res = 1;
    return res;
  }
  bool operator!=(const Time& t);
  bool operator>(const Time& t);
  bool operator<(const Time& t);
  bool operator>=(const Time& t);
  bool operator<=(const Time& t);
  Time rand();
  Time& operator=(const Time& t);
  Time operator+(const Time& c);
  Time operator-(const Time& c);
  ~Time();
private:
  int hou, min, sec;
};

Time add(Time a, Time b);
//int add(int i1, int i2);

//const bool Time::operator==(const Time& t) {
//  bool res = 0;
//  if ((min == t.min) && (hou == t.hou) && (sec == t.sec)) res = 1;
//  return res;
//}

#endif

