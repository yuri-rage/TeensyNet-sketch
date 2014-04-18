/********************

TeensyNet_types.h

Version 0.0.01
Last Modified 04/19/2014
By yuri

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

This software uses multiple libraries that are subject to additional
licenses as defined by the author of that software. It is the user's
and developer's responsibility to determine and adhere to any additional
requirements that may arise.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*********************/

typedef struct {
  uint8_t    chipAddr[chipAddrSize];
  int16_t    chipStatus;
  uint32_t   tempTimer;
  char       chipName[chipNameSize + 1];
} chipStruct;

const chipStruct chipClear = { {0, 0, 0, 0, 0, 0, 0, 0}, 0, 0, "" };

typedef struct {
  bool       actionEnabled;
  chipStruct *tempPtr;
  int16_t    tooCold;
  chipStruct *tcPtr;
  uint8_t    tcSwitchLastState;
  uint32_t   tcDelay;
  uint32_t   tcMillis;
  int16_t    tooHot;
  chipStruct *thPtr;
  uint8_t    thSwitchLastState;
  uint32_t   thDelay;
  uint32_t   thMillis;
  uint8_t    lcdAddr;
  uint32_t   lcdMillis;
} chipActionStruct;

const chipActionStruct actionClear = { FALSE, NULL, -255, NULL, 'F', 0, 0, 255, NULL, 'F', 0, 0, 0, 0 };

typedef struct {
  bool       pidEnabled;
  chipStruct *tempPtr;
  double     pidSetPoint;
  chipStruct *switchPtr;
  double     pidKp;
  double     pidKi;
  double     pidKd;
  int        pidDirection;
  uint32_t   pidWindowSize;
  uint32_t   pidwindowStartTime;
  double     pidInput;
  double     pidOutput;
  PID       *myPID;
} chipPIDStruct;

const chipPIDStruct pidClear = { FALSE, NULL, 70, NULL, 0, 0, 0, 0, 5000, 0, 0, 0, NULL };


