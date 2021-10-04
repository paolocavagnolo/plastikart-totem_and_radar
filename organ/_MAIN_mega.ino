#include <avr/pgmspace.h>

#define aPin 26 //5
#define bPin 28 //6
#define cPin 30 //7
#define dPin 32 //8
#define ePin 34 //9
#define fPin 36 //1
#define gPin 38 //2
#define hPin 40 //3
#define iPin 42 //4

#define lightPin 44
#define audioPin 50

#define remoteBtn A9
#define playBtn A8
#define dmxPin 9

const PROGMEM unsigned long aOn[] = {18348, 24132, 31361, 113770, 119554, 128229, 209192, 229433, 243891, 268130, 268376, 268622, 268868, 269114, 269361, 269607, 269854, 270100, 270346, 270592, 270838, 271085, 271331, 271578, 271823, 272069, 272316, 272562, 272809, 273055, 273302, 273547, 273793, 274040, 274286, 274533, 274779, 275025, 275271, 275517, 275764, 276010, 276257, 276503, 276748, 276995, 277241, 277488, 277734, 277980, 278227, 278472, 278719, 278965, 279211, 279458, 279704, 279951, 280196, 280443, 280689, 280935, 281182, 281428, 281675, 281920, 282166, 282413, 282659, 282906, 283152, 283398, 283644, 283809};
const PROGMEM unsigned long aOff[] = {19072, 24856, 32085, 116531, 122314, 130989, 214794, 235216, 249715, 268212, 268458, 268705, 268951, 269196, 269443, 269689, 269936, 270182, 270429, 270675, 270920, 271167, 271413, 271660, 271906, 272152, 272398, 272644, 272891, 273137, 273384, 273630, 273876, 274122, 274368, 274615, 274861, 275107, 275354, 275600, 275846, 276092, 276339, 276585, 276831, 277078, 277323, 277570, 277816, 278062, 278309, 278555, 278802, 279047, 279293, 279540, 279786, 280033, 280279, 280526, 280771, 281017, 281264, 281510, 281757, 282003, 282248, 282495, 282741, 282988, 283234, 283481, 283727, 283891};
const PROGMEM unsigned long bOn[] = {1000, 6783, 12566, 18348, 24132, 31361, 35698, 41482, 47264, 58831, 70397, 81963, 93530, 105096, 122445, 131120, 160036, 172325, 186060, 214976, 223651, 238108, 252832, 268212, 268458, 268704, 268951, 269196, 269443, 269689, 269936, 270182, 270428, 270675, 270920, 271167, 271413, 271659, 271906, 272152, 272398, 272644, 272891, 273137, 273383, 273630, 273876, 274122, 274368, 274614, 274861, 275107, 275354, 275600, 275845, 276092, 276338, 276585, 276831, 277078, 277323, 277569, 277816, 278062, 278309, 278555, 278801, 279047, 279293, 279540, 279786, 280033, 280279, 280525, 280771, 281017, 281264, 281510, 281756, 282003, 282248, 282495, 282741, 282988, 283234, 283480, 283727};
const PROGMEM unsigned long bOff[] = {1723, 7507, 13290, 19072, 24856, 32085, 36422, 42206, 52916, 64483, 76050, 87615, 99182, 113639, 125206, 136772, 168711, 180278, 194735, 216421, 229434, 241000, 260248, 268294, 268540, 268786, 269033, 269279, 269526, 269771, 270018, 270264, 270510, 270757, 271003, 271250, 271495, 271741, 271988, 272234, 272481, 272727, 272973, 273219, 273465, 273712, 273958, 274205, 274451, 274696, 274943, 275189, 275436, 275682, 275928, 276175, 276420, 276667, 276913, 277160, 277406, 277652, 277898, 278144, 278391, 278637, 278883, 279130, 279376, 279622, 279868, 280115, 280361, 280607, 280854, 281100, 281346, 281592, 281838, 282085, 282331, 282578, 282823, 283070, 283316, 283562, 283809};
const PROGMEM unsigned long cOn[] = {21963, 125337, 206301, 209192, 217867, 229433, 243891, 268293, 268540, 268786, 269033, 269279, 269526, 269771, 270017, 270264, 270510, 270757, 271003, 271248, 271495, 271741, 271988, 272234, 272480, 272727, 272972, 273219, 273465, 273712, 273958, 274204, 274451, 274696, 274943, 275189, 275435, 275682, 275928, 276175, 276420, 276667, 276913, 277159, 277406, 277652, 277898, 278144, 278390, 278637, 278883, 279130, 279376, 279622, 279868, 280114, 280361, 280607, 280854, 281100, 281345, 281592, 281838, 282085, 282331, 282577, 282823, 283069, 283316, 283562, 283809};
const PROGMEM unsigned long cOff[] = {22687, 128097, 206497, 214794, 218084, 235216, 249715, 268376, 268622, 268868, 269115, 269361, 269608, 269854, 270100, 270346, 270592, 270839, 271085, 271331, 271578, 271823, 272070, 272316, 272562, 272809, 273055, 273302, 273547, 273794, 274040, 274286, 274533, 274779, 275026, 275271, 275517, 275764, 276010, 276257, 276503, 276750, 276995, 277241, 277488, 277734, 277981, 278227, 278472, 278719, 278965, 279212, 279458, 279705, 279951, 280196, 280443, 280689, 280936, 281182, 281428, 281675, 281920, 282167, 282413, 282659, 282906, 283152, 283398, 283644, 283891};
const PROGMEM unsigned long dOn[] = {97867, 105096, 119554, 131120, 142686, 145578, 148469, 152807, 160036, 177385, 186060, 206301, 234253, 238108, 252832, 264682, 268376, 268704, 269033, 269361, 269689, 270017, 270346, 270675, 271003, 271331, 271659, 271988, 272316, 272644, 272972, 273302, 273630, 273958, 274286, 274614, 274943, 275271, 275600, 275928, 276257, 276585, 276913, 277241, 277569, 277898, 278227, 278555, 278883, 279211, 279540, 279868, 280196, 280525, 280854, 281182, 281510, 281838, 282166, 282495, 282823, 283152, 283480, 283644, 283809};
const PROGMEM unsigned long dOff[] = {99313, 113639, 122314, 136772, 142969, 145861, 148753, 153090, 168738, 180284, 194762, 206497, 235282, 241000, 260248, 268130, 268458, 268786, 269115, 269443, 269771, 270100, 270429, 270757, 271085, 271413, 271741, 272070, 272398, 272727, 273055, 273384, 273712, 274040, 274368, 274696, 275026, 275354, 275682, 276010, 276339, 276667, 276995, 277323, 277652, 277981, 278309, 278637, 278965, 279293, 279622, 279951, 280279, 280607, 280936, 281264, 281592, 281920, 282248, 282578, 282906, 283234, 283562, 283727, 283891};
const PROGMEM unsigned long eOn[] = {86301, 113770, 122445, 136903, 172325, 203409, 232325, 243891, 264189, 268293, 268458, 268622, 268786, 268951, 269114, 269279, 269443, 269607, 269771, 269936, 270100, 270264, 270428, 270592, 270757, 270920, 271085, 271248, 271413, 271578, 271741, 271906, 272069, 272234, 272398, 272562, 272727, 272891, 273055, 273219, 273383, 273547, 273712, 273876, 274040, 274204, 274368, 274533, 274696, 274861, 275025, 275189, 275354, 275517, 275682, 275845, 276010, 276175, 276338, 276503, 276667, 276831, 276995, 277159, 277323, 277488, 277652, 277816, 277980, 278144, 278309, 278472, 278637, 278801, 278965, 279130, 279293, 279458, 279622, 279786, 279951, 280114, 280279, 280443, 280607, 280771, 280935, 281100, 281264, 281428, 281592, 281756, 281920, 282085, 282248, 282413, 282577, 282741, 282906, 283069, 283234, 283398, 283562, 283727};
const PROGMEM unsigned long eOff[] = {89192, 116531, 125206, 140517, 177392, 203606, 234370, 249715, 268130, 268376, 268540, 268705, 268868, 269033, 269196, 269361, 269526, 269689, 269854, 270018, 270182, 270346, 270510, 270675, 270839, 271003, 271167, 271331, 271495, 271660, 271823, 271988, 272152, 272316, 272481, 272644, 272809, 272973, 273137, 273302, 273465, 273630, 273794, 273958, 274122, 274286, 274451, 274615, 274779, 274943, 275107, 275271, 275436, 275600, 275764, 275928, 276092, 276257, 276420, 276585, 276750, 276913, 277078, 277241, 277406, 277570, 277734, 277898, 278062, 278227, 278391, 278555, 278719, 278883, 279047, 279212, 279376, 279540, 279705, 279868, 280033, 280196, 280361, 280526, 280689, 280854, 281017, 281182, 281346, 281510, 281675, 281838, 282003, 282167, 282331, 282495, 282659, 282823, 282988, 283152, 283316, 283481, 283644, 283809};
const PROGMEM unsigned long fOn[] = {47264, 70397, 76180, 81963, 93530, 125337, 128229, 131120, 142686, 145578, 148469, 152807, 160036, 177385, 186060, 200517, 229433, 238108, 252832, 265175, 268212, 268540, 268868, 269196, 269526, 269854, 270182, 270510, 270838, 271167, 271495, 271823, 272152, 272480, 272809, 273137, 273465, 273793, 274122, 274451, 274779, 275107, 275435, 275764, 276092, 276420, 276748, 277078, 277406, 277734, 278062, 278390, 278719, 279047, 279376, 279704, 280033, 280361, 280689, 281017, 281345, 281675, 282003, 282331, 282659, 282988, 283316, 283644, 283809};
const PROGMEM unsigned long fOff[] = {52916, 74730, 79071, 84855, 97867, 128097, 130989, 136772, 142969, 145861, 148753, 153090, 168738, 180284, 194762, 200714, 232325, 241000, 260248, 268130, 268294, 268622, 268951, 269279, 269608, 269936, 270264, 270592, 270920, 271250, 271578, 271906, 272234, 272562, 272891, 273219, 273547, 273876, 274205, 274533, 274861, 275189, 275517, 275846, 276175, 276503, 276831, 277160, 277488, 277816, 278144, 278472, 278802, 279130, 279458, 279786, 280115, 280443, 280771, 281100, 281428, 281757, 282085, 282413, 282741, 283070, 283398, 283727, 283891};
const PROGMEM unsigned long gOn[] = {105096, 119554, 131120, 160036, 186060, 209192, 214976, 217867, 223651, 229554, 229735, 229915, 230096, 230277, 230457, 230638, 230818, 231000, 231180, 231361, 231541, 231722, 231903, 232084, 232264, 232445, 232626, 232807, 232987, 233168, 233348, 233530, 233710, 233891, 234071, 234253, 234433, 234614, 234794, 234976, 235156, 243891, 268293, 268540, 268786, 269033, 269279, 269526, 269771, 270017, 270264, 270510, 270757, 271003, 271248, 271495, 271741, 271988, 272234, 272480, 272727, 272972, 273219, 273465, 273712, 273958, 274204, 274451, 274696, 274943, 275189, 275435, 275682, 275928, 276175, 276420, 276667, 276913, 277159, 277406, 277652, 277898, 278144, 278390, 278637, 278883, 279130, 279376, 279622, 279868, 280114, 280361, 280607, 280854, 281100, 281345, 281592, 281838, 282085, 282331, 282577, 282823, 283069, 283316, 283562, 283809};
const PROGMEM unsigned long gOff[] = {113639, 122314, 136772, 168738, 194762, 214794, 216421, 218084, 229434, 229614, 229795, 229976, 230157, 230337, 230517, 230698, 230879, 231060, 231240, 231421, 231602, 231783, 231963, 232144, 232325, 232506, 232686, 232867, 233047, 233229, 233409, 233590, 233770, 233952, 234132, 234313, 234493, 234675, 234855, 235036, 235216, 249715, 268376, 268622, 268868, 269115, 269361, 269608, 269854, 270100, 270346, 270592, 270839, 271085, 271331, 271578, 271823, 272070, 272316, 272562, 272809, 273055, 273302, 273547, 273794, 274040, 274286, 274533, 274779, 275026, 275271, 275517, 275764, 276010, 276257, 276503, 276750, 276995, 277241, 277488, 277734, 277981, 278227, 278472, 278719, 278965, 279212, 279458, 279705, 279951, 280196, 280443, 280689, 280936, 281182, 281428, 281675, 281920, 282167, 282413, 282659, 282906, 283152, 283398, 283644, 283891};
const PROGMEM unsigned long hOn[] = {122445, 128229, 160036, 186060, 214976, 217867, 223651, 229493, 229675, 229855, 230036, 230216, 230397, 230578, 230759, 230939, 231120, 231301, 231482, 231662, 231843, 232023, 232205, 232385, 232566, 232746, 232928, 233108, 233289, 233469, 233651, 233831, 234012, 234192, 234373, 234554, 234735, 234915, 235096, 238108, 252832, 268212, 268458, 268704, 268951, 269196, 269443, 269689, 269936, 270182, 270428, 270675, 270920, 271167, 271413, 271659, 271906, 272152, 272398, 272644, 272891, 273137, 273383, 273630, 273876, 274122, 274368, 274614, 274861, 275107, 275354, 275600, 275845, 276092, 276338, 276585, 276831, 277078, 277323, 277569, 277816, 278062, 278309, 278555, 278801, 279047, 279293, 279540, 279786, 280033, 280279, 280525, 280771, 281017, 281264, 281510, 281756, 282003, 282248, 282495, 282741, 282988, 283234, 283480, 283727};
const PROGMEM unsigned long hOff[] = {125206, 130989, 168738, 194762, 216421, 218084, 229434, 229554, 229735, 229915, 230096, 230277, 230458, 230638, 230819, 231000, 231181, 231361, 231542, 231722, 231904, 232084, 232265, 232445, 232627, 232807, 232988, 233168, 233350, 233530, 233711, 233891, 234072, 234253, 234434, 234614, 234795, 234976, 235157, 241000, 260248, 268294, 268540, 268786, 269033, 269279, 269526, 269771, 270018, 270264, 270510, 270757, 271003, 271250, 271495, 271741, 271988, 272234, 272481, 272727, 272973, 273219, 273465, 273712, 273958, 274205, 274451, 274696, 274943, 275189, 275436, 275682, 275928, 276175, 276420, 276667, 276913, 277160, 277406, 277652, 277898, 278144, 278391, 278637, 278883, 279130, 279376, 279622, 279868, 280115, 280361, 280607, 280854, 281100, 281346, 281592, 281838, 282085, 282331, 282578, 282823, 283070, 283316, 283562, 523809};
const PROGMEM unsigned long iOn[] = {113770, 125337, 131120, 160036, 186060, 203409, 209192, 214976, 223651, 229433, 229614, 229794, 229976, 230156, 230337, 230517, 230698, 230879, 231060, 231240, 231421, 231602, 231783, 231963, 232144, 232325, 232506, 232686, 232867, 233047, 233229, 233409, 233590, 233770, 233952, 234132, 234313, 234493, 234675, 234855, 235036, 243891, 268130, 268376, 268622, 268868, 269114, 269361, 269607, 269854, 270100, 270346, 270592, 270838, 271085, 271331, 271578, 271823, 272069, 272316, 272562, 272809, 273055, 273302, 273547, 273793, 274040, 274286, 274533, 274779, 275025, 275271, 275517, 275764, 276010, 276257, 276503, 276748, 276995, 277241, 277488, 277734, 277980, 278227, 278472, 278719, 278965, 279211, 279458, 279704, 279951, 280196, 280443, 280689, 280935, 281182, 281428, 281675, 281920, 282166, 282413, 282659, 282906, 283152, 283398, 283644, 283809};
const PROGMEM unsigned long iOff[] = {116531, 128097, 136772, 168738, 194762, 203606, 214794, 216421, 229434, 229493, 229675, 229855, 230036, 230216, 230397, 230578, 230759, 230939, 231120, 231301, 231482, 231662, 231843, 232023, 232205, 232385, 232566, 232746, 232928, 233108, 233289, 233469, 233651, 233831, 234012, 234192, 234373, 234554, 234735, 234915, 235096, 249715, 268212, 268458, 268705, 268951, 269196, 269443, 269689, 269936, 270182, 270429, 270675, 270920, 271167, 271413, 271660, 271906, 272152, 272398, 272644, 272891, 273137, 273384, 273630, 273876, 274122, 274368, 274615, 274861, 275107, 275354, 275600, 275846, 276092, 276339, 276585, 276831, 277078, 277323, 277570, 277816, 278062, 278309, 278555, 278802, 279047, 279293, 279540, 279786, 280033, 280279, 280526, 280771, 281017, 281264, 281510, 281757, 282003, 282248, 282495, 282741, 282988, 283234, 283481, 283727, 283891};

int i_aLen = 74;
int i_bLen = 87;
int i_cLen = 71;
int i_dLen = 65;
int i_eLen = 104;
int i_fLen = 69;
int i_gLen = 106;
int i_hLen = 105;
int i_iLen = 107;

int i_aon = 0;
int i_aoff = 0;
int i_bon = 0;
int i_boff = 0;
int i_con = 0;
int i_coff = 0;
int i_don = 0;
int i_doff = 0;
int i_eon = 0;
int i_eoff = 0;
int i_fon = 0;
int i_foff = 0;
int i_gon = 0;
int i_goff = 0;
int i_hon = 0;
int i_hoff = 0;
int i_ion = 0;
int i_ioff = 0;


bool aState = false;
bool bState = false;
bool cState = false;
bool dState = false;
bool eState = false;
bool fState = false;
bool gState = false;
bool hState = false;
bool iState = false;


void setup() {
 
  pinMode(lightPin,OUTPUT);
  digitalWrite(lightPin,HIGH);
  pinMode(audioPin,OUTPUT);
  digitalWrite(audioPin,LOW);

  pinMode(remoteBtn,INPUT_PULLUP);
  pinMode(playBtn,INPUT_PULLUP);
  pinMode(dmxPin,INPUT_PULLUP);

  for (uint8_t i=48;i>25;i=i-2) {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }
 
}

unsigned long t = 0;
unsigned long tt =   0;
bool play = false;

bool first = true;

void loop() {

  if (!digitalRead(playBtn)) {
   
    //SEL SU PLAY
    if (first) {
      play = true;
      digitalWrite(audioPin,HIGH);
      digitalWrite(lightPin,LOW);
      t = millis();
      first = false;
    }
   
  }

  else if (digitalRead(remoteBtn)) {

    //SEL SU REMOTE
    if (digitalRead(dmxPin)) {
      if (first) {

        play = true;
        digitalWrite(audioPin,HIGH);
        digitalWrite(lightPin,LOW);
        t = millis();
        first = false;
       
      }
    }
    else {
      _idle();
    }
  }
  else {
    //SEL SU MANUALE
    _idle();
   
  }

  if (play) {
    //AAA
    if ((i_aon) < i_aLen) {
      if (((millis() - t) > pgm_read_dword(&aOn[i_aon])) && (!aState)){
        digitalWrite(aPin,LOW);
        i_aon++;
        aState = true;
      }
    }
    if ((i_aoff) < i_aLen) {
      if (((millis() - t) > pgm_read_dword(&aOff[i_aoff])) && (aState)) {
        digitalWrite(aPin,HIGH);
        i_aoff++;
        aState = false;
      }
    }
    // BBB-2
    if ((i_bon) < i_bLen) {
      if (((millis() - t) > pgm_read_dword(&bOn[i_bon])) && (!bState)){
        digitalWrite(bPin,LOW);
        i_bon++;
        bState = true;
      }
    }
    if ((i_boff) < i_bLen) {
      if (((millis() - t) > pgm_read_dword(&bOff[i_boff])) && (bState)) {
        digitalWrite(bPin,HIGH);
        i_boff++;
        bState = false;
      }
    }

    // CCC-3
    if ((i_con) < i_cLen) {
      if (((millis() - t) > pgm_read_dword(&cOn[i_con])) && (!cState)){
        digitalWrite(cPin,LOW);
        i_con++;
        cState = true;
      }
    }
    if ((i_coff) < i_cLen) {
      if (((millis() - t) > pgm_read_dword(&cOff[i_coff])) && (cState)) {
        digitalWrite(cPin,HIGH);
        i_coff++;
        cState = false;
      }
    }
    // DDD-4
    if ((i_don) < i_dLen) {
      if (((millis() - t) > pgm_read_dword(&dOn[i_don])) && (!dState)){
        digitalWrite(dPin,LOW);
        i_don++;
        dState = true;
      }
    }
    if ((i_doff) < i_dLen) {
      if (((millis() - t) > pgm_read_dword(&dOff[i_doff])) && (dState)) {
        digitalWrite(dPin,HIGH);
        i_doff++;
        dState = false;
      }
    }

    // EEE-5
    if ((i_eon) < i_eLen) {
      if (((millis() - t) > pgm_read_dword(&eOn[i_eon])) && (!eState)){
        digitalWrite(ePin,LOW);
        i_eon++;
        eState = true;
      }
    }
    if ((i_eoff) < i_eLen) {
      if (((millis() - t) > pgm_read_dword(&eOff[i_eoff])) && (eState)) {
        digitalWrite(ePin,HIGH);
        i_eoff++;
        eState = false;
      }
    }

    // FFF-6
    if ((i_fon) < i_fLen) {
      if (((millis() - t) > pgm_read_dword(&fOn[i_fon])) && (!fState)){
        digitalWrite(fPin,LOW);
        i_fon++;
        fState = true;
      }
    }
    if ((i_foff) < i_fLen) {
      if (((millis() - t) > pgm_read_dword(&fOff[i_foff])) && (fState)) {
        digitalWrite(fPin,HIGH);
        i_foff++;
        fState = false;
      }
    }

    // GGG-7
    if ((i_gon) < i_gLen) {
      if (((millis() - t) > pgm_read_dword(&gOn[i_gon])) && (!gState)){
        digitalWrite(gPin,LOW);
        i_gon++;
        gState = true;
      }
    }
    if ((i_goff) < i_gLen) {
      if (((millis() - t) > pgm_read_dword(&gOff[i_goff])) && (gState)) {
        digitalWrite(gPin,HIGH);
        i_goff++;
        gState = false;
      }
    }
   
    // HHH-8
    if ((i_hon) < i_hLen) {
      if (((millis() - t) > pgm_read_dword(&hOn[i_hon])) && (!hState)){
        digitalWrite(hPin,LOW);
        i_hon++;
        hState = true;
      }
    }
    if ((i_hoff) < i_hLen) {
      if (((millis() - t) > pgm_read_dword(&hOff[i_hoff])) && (hState)) {
        digitalWrite(hPin,HIGH);
        i_hoff++;
        hState = false;
      }
    }
 
    // III-9
    if ((i_ion) < i_iLen) {
      if (((millis() - t) > pgm_read_dword(&iOn[i_ion])) && (!iState)){
        digitalWrite(iPin,LOW);
        i_ion++;
        iState = true;
      }
    }
    if ((i_ioff) < i_iLen) {
      if (((millis() - t) > pgm_read_dword(&iOff[i_ioff])) && (iState)) {
        digitalWrite(iPin,HIGH);
        i_ioff++;
        iState = false;
      }
    }

  }
 
}

void _idle() {

  aState = false;
  bState = false;
  cState = false;
  dState = false;
  eState = false;
  fState = false;
  gState = false;
  hState = false;
  iState = false;

  i_aon = 0;
  i_aoff = 0;
  i_bon = 0;
  i_boff = 0;
  i_con = 0;
  i_coff = 0;
  i_don = 0;
  i_doff = 0;
  i_eon = 0;
  i_eoff = 0;
  i_fon = 0;
  i_foff = 0;
  i_gon = 0;
  i_goff = 0;
  i_hon = 0;
  i_hoff = 0;
  i_ion = 0;
  i_ioff = 0;

  play = false;
  digitalWrite(lightPin, HIGH);
  first = true;

  for (uint8_t i=48;i>25;i=i-2) {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }

 
}
