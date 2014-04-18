/********************

TeensyNet_constants.h

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

const uint32_t resetDebug      = 0x00000001; //      1
const uint32_t pidDebug        = 0x00000002; //      2
const uint32_t eepromDebug     = 0x00000004; //      4
const uint32_t chipDebug       = 0x00000008; //      8
const uint32_t findChipDebug   = 0x00000010; //     16
const uint32_t serialDebug     = 0x00000020; //     32
const uint32_t udpDebug        = 0x00000040; //     64
const uint32_t wifiDebug       = 0x00000080; //    128
const uint32_t udpHexBuff      = 0x00000100; //    256
const uint32_t chipNameDebug   = 0x00000200; //    512
const uint32_t actionDebug     = 0x00000400; //   1024
const uint32_t lcdDebug        = 0x00000800; //   2048
const uint32_t crcDebug        = 0x00001000; //   4096
const uint32_t ds2762Debug     = 0x00002000; //   8192
const uint32_t bonjourDebug    = 0x00004000; //  16384

const uint8_t resetWIZ5200pin  = 9;
const uint8_t chipStartPin     = 12;
const uint8_t resetWIZ5100pin  = 23;

// define serial commands

const uint8_t getMaxChips        = '1';
const uint8_t showChip           = getMaxChips + 1;    // "2"
const uint8_t getChipCount       = showChip + 1;       // "3"
const uint8_t getChipAddress     = getChipCount + 1;   // "4"
const uint8_t getChipStatus      = getChipAddress + 1; // "5"
const uint8_t setSwitchState     = getChipStatus + 1;  // "6"
const uint8_t getAllStatus       = setSwitchState + 1; // "7"
const uint8_t getChipType        = getAllStatus + 1;   // "8"
const uint8_t updateBonjour      = getChipType + 1;    // "9"

const uint8_t getActionArray     = 'A'; // start of new serial command list
const uint8_t updateActionArray  = getActionArray + 1;    // "B"
const uint8_t getActionStatus    = updateActionArray + 1; // "C"
const uint8_t getMaxActions      = getActionStatus + 1;   // "D"
const uint8_t setActionSwitch    = getMaxActions + 1;     // "E"
const uint8_t saveToEEPROM       = setActionSwitch + 1;   // "F"
const uint8_t getEEPROMstatus    = saveToEEPROM + 1;      // "G"
const uint8_t getNewSensors      = getEEPROMstatus + 1;   // "H"
const uint8_t masterStop         = getNewSensors + 1;     // "I"
const uint8_t getMaxPids         = masterStop + 1;        // "J"
const uint8_t masterPidStop      = getMaxPids + 1;        // "K"
const uint8_t getPidStatus       = masterPidStop + 1;     // "L"
const uint8_t updatePidArray     = getPidStatus + 1;      // "M"
const uint8_t getPidArray        = updatePidArray + 1;    // "N"
const uint8_t setPidArray        = getPidArray + 1;       // "O"
const uint8_t useDebug           = setPidArray + 1;       // "P"
const uint8_t restoreStructures  = useDebug + 1;          // "Q"
const uint8_t shortShowChip      = restoreStructures + 1; // "R"
const uint8_t updateChipName     = shortShowChip + 1;     // "S"
const uint8_t showActionStatus   = updateChipName + 1;    // "T"
const uint8_t setAction          = showActionStatus + 1;  // "U"

const uint8_t displayMessage     = 'w';
const uint8_t clearAndReset      = 'x';
const uint8_t clearEEPROM        = 'y';
const uint8_t versionID          = 'z';

// end of serial commands

const uint8_t softSerialError  = 'X';
const uint8_t setSwitchON      = 'N';
const uint8_t setSwitchOFF     = 'F';
const uint8_t switchStatusON   = 'N';
const uint8_t switchStatusOFF  = 'F';
const uint8_t tooHotSwitch     = 'H';
const uint8_t tooColdSwitch    = 'C';
const uint8_t noChipPresent    = 0xFF;


const long baudRate = 115200;

const uint32_t updateTime = 250;
const uint32_t ramUpdateTime = 10000;
const uint32_t ds2762UpdateTime = 250;

// OneWire Setup;
const uint8_t oneWireAddress = 2; // OneWire Bus Address - use pin 2 for TeensyNet board
const uint8_t chipAddrSize   = 8; // 64bit OneWire Address
const uint8_t chipNameSize   = 16;
const uint8_t ds2406MemWr    = 0x55;
const uint8_t ds2406MemRd    = 0xaa;
const uint8_t ds2406AddLow   = 0x07;
const uint8_t ds2406AddHi    = 0x00;
const uint8_t ds2406PIOAoff  = 0x3f;
const uint8_t ds2406PIOAon   = 0x1f;
const uint8_t ds2406End      = 0xff;
const uint8_t t3tcID         = 0xAA; // Teensy 3.0 1-wire slave with MAX31855 K-type Thermocouple chip
const uint8_t max31850ID     = 0x3B; // MAX31850 K-type Thermocouple chip
const uint8_t ds2762ID       = 0x30; // Maxim 2762 digital k-type thermocouple
const uint8_t ds18b20ID      = 0x28; // Maxim DS18B20 digital Thermometer device
const uint8_t ds2406ID       = 0x12; // Maxim DS2406+ digital switch
const uint8_t dsPIO_A        = 0x20;
const uint8_t dsPIO_B        = 0x40;

const uint8_t maxChips       = 36; // Maximum number of Chips
const uint8_t maxActions     = 12; // Maximum number of Actions

// DS2762 oneWire conversion table - K-Type Thermocouple

const uint16_t kNegTableCnt = 271;

const uint16_t kTableCnt = 1373;

const uint32_t tempReadDelay = 125;

const char *charChipAddrArray = "0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00";
const char *unassignedStr = "___UNASSIGNED___";

const uint32_t lcdUpdateTimer = 1000;

const uint8_t maxPIDs = 4;

//I2CEEPROM Stuff
const uint32_t   I2CEEPROMsize         = 0xFFFF;   // MicroChip 24LC512
const uint16_t   I2CEEPROMidAddr       = 0x05;    // ID address to verify a previous I2CEEPROM write
const uint16_t   I2CEEPROMccAddr       = 0x10;    // number of chips found during findchips()
const uint16_t   I2CEEPROMbjAddr       = 0x50;    // start of Bonjour name buffer
const uint16_t   I2CEEPROMchipAddr     = 0x1000;  // start address of chip structures
const uint16_t   I2CEEPROMactionAddr   = 0x5000;  // start address of action structures
const uint16_t   I2CEEPROMpidAddr      = 0x9000;  // start address of chip structures
const uint8_t    I2CEEPROMidVal        = 0x55;    // Shows that an EEPROM update has occurred
const uint8_t    I2C0x50               = 0x50;    // device address at 0x50
const uint8_t    I2C0x51               = 0x51;    // device address at 0x51
const uint8_t    pageSize              = 128;     // MicroChip 24LC512 buffer page

const uint8_t wizReset = 23;         // WIZ nic reset
