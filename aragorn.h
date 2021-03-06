#ifndef __aragorn_H__
#define __aragorn_H__


//
//  Hello EIC Fans:
//
//    Welcome to aragorn.  Aragorn is the Tracker of the Ring Bearer. (Initially).
//
//
//                                                SAZ, MB, & TKH
//                                                2-27-2013
//

#include <vector>

class quink;

class aragorn
{
 public:
  static aragorn* instance()
  {
    if (__instance) return __instance;
    __instance = new aragorn();
    return __instance;
  }
  virtual ~aragorn() {}

  std::vector <quink *> TheQuinks;
  
  static const int hw=1;    //half of the width of each pad
  static const int hh=3;    //half of the height of each pad
  static const int columns = 5; //How many pads in a row
  static const int rows = 2; // How many pads in each column

  void Report();
  void Construct(); //
  void Event();
  void SetChargeCloud(double,double);
  void CheckPad(int);
  aragorn();
  static aragorn *__instance;

};

#endif /* __aragorn_H__ */
