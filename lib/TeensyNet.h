/********************

TeensyNet.h

Version 0.0.1
Last Modified 04/10/2014
By Jim Mayhugh

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

// function prototypes

void pidSetup(void);
void readStructures(void);
void saveStructures(void);
void displayStructure(byte *, int, int);
void updatePIDs(uint8_t);
void findChips(void);
void sendUDPpacket(void);
void udpProcess(void);
void asciiArrayToHexArray(char*, char*, uint8_t*);
void actionStatus(int);
void getAllActionStatus(void);
void getPIDStatus(uint8_t);
uint8_t matchChipAddress(uint8_t*);
void actionSwitchSet(uint8_t*, uint8_t);
void showChipAddress( uint8_t*);
void showChipType(int);
void showChipInfo(int);
void addChipStatus(int);
void setSwitch(uint8_t, uint8_t);
void updateChipStatus(int);
void updateActions(uint8_t);
void EEPROMclear(void);
void MasterStop(void);
void softReset(void);
void Read_TC_Volts(uint8_t);
void Read_CJ_Temp(uint8_t);
void TC_Lookup(void);
void lcdCenterStr(char *);
