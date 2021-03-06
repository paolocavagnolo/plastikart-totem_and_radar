#define aPin 26 //5
#define bPin 28 //6
#define cPin 30 //7
#define dPin 32 //8
#define ePin 34 //9
#define fPin 36 //1
#define gPin 38 //2
#define hPin 40 //3
#define iPin 42 //4 - 

#define lightPin 44
#define audioPin 50

#define remoteBtn A9
#define playBtn A8
#define dmxPin 9

uint16_t aOn[] = {1834, 2413, 3136, 11377, 11955, 12822, 20919, 22943, 24389, 26813, 26837, 26862, 26886, 26911, 26936, 26960, 26985, 27010, 27034, 27059, 27083, 27108, 27133, 27157, 27182, 27206, 27231, 27256, 27280, 27305, 27330, 27354, 27379, 27404, 27428, 27453, 27477, 27502, 27527, 27551, 27576, 27601, 27625, 27650, 27674, 27699, 27724, 27748, 27773, 27798, 27822, 27847, 27871, 27896, 27921, 27945, 27970, 27995, 28019, 28044, 28068, 28093, 28118, 28142, 28167, 28192, 28216, 28241, 28265, 28290, 28315, 28339, 28364, 28380};
uint16_t aOff[] = {1907, 2485, 3208, 11653, 12231, 13098, 21479, 23521, 24971, 26821, 26845, 26870, 26895, 26919, 26944, 26968, 26993, 27018, 27042, 27067, 27092, 27116, 27141, 27166, 27190, 27215, 27239, 27264, 27289, 27313, 27338, 27363, 27387, 27412, 27436, 27461, 27486, 27510, 27535, 27560, 27584, 27609, 27633, 27658, 27683, 27707, 27732, 27757, 27781, 27806, 27830, 27855, 27880, 27904, 27929, 27954, 27978, 28003, 28027, 28052, 28077, 28101, 28126, 28151, 28175, 28200, 28224, 28249, 28274, 28298, 28323, 28348, 28372, 28389};
uint16_t bOn[] = {100, 678, 1256, 1834, 2413, 3136, 3569, 4148, 4726, 5883, 7039, 8196, 9353, 10509, 12244, 13112, 16003, 17232, 18606, 21497, 22365, 23810, 25283, 26821, 26845, 26870, 26895, 26919, 26944, 26968, 26993, 27018, 27042, 27067, 27092, 27116, 27141, 27165, 27190, 27215, 27239, 27264, 27289, 27313, 27338, 27363, 27387, 27412, 27436, 27461, 27486, 27510, 27535, 27560, 27584, 27609, 27633, 27658, 27683, 27707, 27732, 27756, 27781, 27806, 27830, 27855, 27880, 27904, 27929, 27954, 27978, 28003, 28027, 28052, 28077, 28101, 28126, 28151, 28175, 28200, 28224, 28249, 28274, 28298, 28323, 28348, 28372};
uint16_t bOff[] = {172, 750, 1329, 1907, 2485, 3208, 3642, 4220, 5291, 6448, 7605, 8761, 9918, 11363, 12520, 13677, 16871, 18027, 19473, 21642, 22943, 24100, 26024, 26829, 26854, 26878, 26903, 26927, 26952, 26977, 27001, 27026, 27051, 27075, 27100, 27125, 27149, 27174, 27198, 27223, 27248, 27272, 27297, 27321, 27346, 27371, 27395, 27420, 27445, 27469, 27494, 27518, 27543, 27568, 27592, 27617, 27642, 27666, 27691, 27716, 27740, 27765, 27789, 27814, 27839, 27863, 27888, 27913, 27937, 27962, 27986, 28011, 28036, 28060, 28085, 28110, 28134, 28159, 28183, 28208, 28233, 28257, 28282, 28307, 28331, 28356, 28380};
uint16_t cOn[] = {2196, 12533, 20630, 20919, 21786, 22943, 24389, 26829, 26854, 26878, 26903, 26927, 26952, 26977, 27001, 27026, 27051, 27075, 27100, 27124, 27149, 27174, 27198, 27223, 27248, 27272, 27297, 27321, 27346, 27371, 27395, 27420, 27445, 27469, 27494, 27518, 27543, 27568, 27592, 27617, 27642, 27666, 27691, 27715, 27740, 27765, 27789, 27814, 27839, 27863, 27888, 27913, 27937, 27962, 27986, 28011, 28036, 28060, 28085, 28110, 28134, 28159, 28183, 28208, 28233, 28257, 28282, 28306, 28331, 28356, 28380};
uint16_t cOff[] = {2268, 12809, 20649, 21479, 21808, 23521, 24971, 26837, 26862, 26886, 26911, 26936, 26960, 26985, 27010, 27034, 27059, 27083, 27108, 27133, 27157, 27182, 27207, 27231, 27256, 27280, 27305, 27330, 27354, 27379, 27404, 27428, 27453, 27477, 27502, 27527, 27551, 27576, 27601, 27625, 27650, 27675, 27699, 27724, 27748, 27773, 27798, 27822, 27847, 27871, 27896, 27921, 27945, 27970, 27995, 28019, 28044, 28068, 28093, 28118, 28142, 28167, 28192, 28216, 28241, 28265, 28290, 28315, 28339, 28364, 28389};
uint16_t dOn[] = {9786, 10509, 11955, 13112, 14268, 14557, 14846, 15280, 16003, 17738, 18606, 20630, 23425, 23810, 25283, 26468, 26837, 26870, 26903, 26936, 26968, 27001, 27034, 27067, 27100, 27133, 27165, 27198, 27231, 27264, 27297, 27330, 27363, 27395, 27428, 27461, 27494, 27527, 27560, 27592, 27625, 27658, 27691, 27724, 27756, 27789, 27822, 27855, 27888, 27921, 27954, 27986, 28019, 28052, 28085, 28118, 28151, 28183, 28216, 28249, 28282, 28315, 28348, 28364, 28380};
uint16_t dOff[] = {9931, 11363, 12231, 13677, 14296, 14586, 14875, 15309, 16873, 18028, 19476, 20649, 23528, 24100, 26024, 26813, 26845, 26878, 26911, 26944, 26977, 27010, 27042, 27075, 27108, 27141, 27174, 27207, 27239, 27272, 27305, 27338, 27371, 27404, 27436, 27469, 27502, 27535, 27568, 27601, 27633, 27666, 27699, 27732, 27765, 27798, 27830, 27863, 27896, 27929, 27962, 27995, 28027, 28060, 28093, 28126, 28159, 28192, 28224, 28257, 28290, 28323, 28356, 28372, 28389};
uint16_t eOn[] = {8630, 11377, 12244, 13690, 17232, 20340, 23232, 24389, 26418, 26829, 26845, 26862, 26878, 26895, 26911, 26927, 26944, 26960, 26977, 26993, 27010, 27026, 27042, 27059, 27075, 27092, 27108, 27124, 27141, 27157, 27174, 27190, 27206, 27223, 27239, 27256, 27272, 27289, 27305, 27321, 27338, 27354, 27371, 27387, 27404, 27420, 27436, 27453, 27469, 27486, 27502, 27518, 27535, 27551, 27568, 27584, 27601, 27617, 27633, 27650, 27666, 27683, 27699, 27715, 27732, 27748, 27765, 27781, 27798, 27814, 27830, 27847, 27863, 27880, 27896, 27913, 27929, 27945, 27962, 27978, 27995, 28011, 28027, 28044, 28060, 28077, 28093, 28110, 28126, 28142, 28159, 28175, 28192, 28208, 28224, 28241, 28257, 28274, 28290, 28306, 28323, 28339, 28356, 28372};
uint16_t eOff[] = {8919, 11653, 12520, 14051, 17739, 20360, 23437, 24971, 26813, 26837, 26854, 26870, 26886, 26903, 26919, 26936, 26952, 26968, 26985, 27001, 27018, 27034, 27051, 27067, 27083, 27100, 27116, 27133, 27149, 27166, 27182, 27198, 27215, 27231, 27248, 27264, 27280, 27297, 27313, 27330, 27346, 27363, 27379, 27395, 27412, 27428, 27445, 27461, 27477, 27494, 27510, 27527, 27543, 27560, 27576, 27592, 27609, 27625, 27642, 27658, 27675, 27691, 27707, 27724, 27740, 27757, 27773, 27789, 27806, 27822, 27839, 27855, 27871, 27888, 27904, 27921, 27937, 27954, 27970, 27986, 28003, 28019, 28036, 28052, 28068, 28085, 28101, 28118, 28134, 28151, 28167, 28183, 28200, 28216, 28233, 28249, 28265, 28282, 28298, 28315, 28331, 28348, 28364, 28380};
uint16_t fOn[] = {4726, 7039, 7618, 8196, 9353, 12533, 12822, 13112, 14268, 14557, 14846, 15280, 16003, 17738, 18606, 20051, 22943, 23810, 25283, 26517, 26821, 26854, 26886, 26919, 26952, 26985, 27018, 27051, 27083, 27116, 27149, 27182, 27215, 27248, 27280, 27313, 27346, 27379, 27412, 27445, 27477, 27510, 27543, 27576, 27609, 27642, 27674, 27707, 27740, 27773, 27806, 27839, 27871, 27904, 27937, 27970, 28003, 28036, 28068, 28101, 28134, 28167, 28200, 28233, 28265, 28298, 28331, 28364, 28380};
uint16_t fOff[] = {5291, 7473, 7907, 8485, 9786, 12809, 13098, 13677, 14296, 14586, 14875, 15309, 16873, 18028, 19476, 20071, 23232, 24100, 26024, 26813, 26829, 26862, 26895, 26927, 26960, 26993, 27026, 27059, 27092, 27125, 27157, 27190, 27223, 27256, 27289, 27321, 27354, 27387, 27420, 27453, 27486, 27518, 27551, 27584, 27617, 27650, 27683, 27716, 27748, 27781, 27814, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28142, 28175, 28208, 28241, 28274, 28307, 28339, 28372, 28389};
uint16_t gOn[] = {10509, 11955, 13112, 16003, 18606, 20919, 21497, 21786, 22365, 22955, 22973, 22991, 23009, 23027, 23045, 23063, 23081, 23100, 23118, 23136, 23154, 23172, 23190, 23208, 23226, 23244, 23262, 23280, 23298, 23316, 23334, 23353, 23371, 23389, 23407, 23425, 23443, 23461, 23479, 23497, 23515, 24389, 26829, 26854, 26878, 26903, 26927, 26952, 26977, 27001, 27026, 27051, 27075, 27100, 27124, 27149, 27174, 27198, 27223, 27248, 27272, 27297, 27321, 27346, 27371, 27395, 27420, 27445, 27469, 27494, 27518, 27543, 27568, 27592, 27617, 27642, 27666, 27691, 27715, 27740, 27765, 27789, 27814, 27839, 27863, 27888, 27913, 27937, 27962, 27986, 28011, 28036, 28060, 28085, 28110, 28134, 28159, 28183, 28208, 28233, 28257, 28282, 28306, 28331, 28356, 28380};
uint16_t gOff[] = {11363, 12231, 13677, 16873, 19476, 21479, 21642, 21808, 22943, 22961, 22979, 22997, 23015, 23033, 23051, 23069, 23087, 23106, 23124, 23142, 23160, 23178, 23196, 23214, 23232, 23250, 23268, 23286, 23304, 23322, 23340, 23359, 23377, 23395, 23413, 23431, 23449, 23467, 23485, 23503, 23521, 24971, 26837, 26862, 26886, 26911, 26936, 26960, 26985, 27010, 27034, 27059, 27083, 27108, 27133, 27157, 27182, 27207, 27231, 27256, 27280, 27305, 27330, 27354, 27379, 27404, 27428, 27453, 27477, 27502, 27527, 27551, 27576, 27601, 27625, 27650, 27675, 27699, 27724, 27748, 27773, 27798, 27822, 27847, 27871, 27896, 27921, 27945, 27970, 27995, 28019, 28044, 28068, 28093, 28118, 28142, 28167, 28192, 28216, 28241, 28265, 28290, 28315, 28339, 28364, 28389};
uint16_t hOn[] = {12244, 12822, 16003, 18606, 21497, 21786, 22365, 22949, 22967, 22985, 23003, 23021, 23039, 23057, 23075, 23093, 23112, 23130, 23148, 23166, 23184, 23202, 23220, 23238, 23256, 23274, 23292, 23310, 23328, 23346, 23365, 23383, 23401, 23419, 23437, 23455, 23473, 23491, 23509, 23810, 25283, 26821, 26845, 26870, 26895, 26919, 26944, 26968, 26993, 27018, 27042, 27067, 27092, 27116, 27141, 27165, 27190, 27215, 27239, 27264, 27289, 27313, 27338, 27363, 27387, 27412, 27436, 27461, 27486, 27510, 27535, 27560, 27584, 27609, 27633, 27658, 27683, 27707, 27732, 27756, 27781, 27806, 27830, 27855, 27880, 27904, 27929, 27954, 27978, 28003, 28027, 28052, 28077, 28101, 28126, 28151, 28175, 28200, 28224, 28249, 28274, 28298, 28323, 28348, 28372};
uint16_t hOff[] = {12520, 13098, 16873, 19476, 21642, 21808, 22943, 22955, 22973, 22991, 23009, 23027, 23045, 23063, 23081, 23100, 23118, 23136, 23154, 23172, 23190, 23208, 23226, 23244, 23262, 23280, 23298, 23316, 23335, 23353, 23371, 23389, 23407, 23425, 23443, 23461, 23479, 23497, 23515, 24100, 26024, 26829, 26854, 26878, 26903, 26927, 26952, 26977, 27001, 27026, 27051, 27075, 27100, 27125, 27149, 27174, 27198, 27223, 27248, 27272, 27297, 27321, 27346, 27371, 27395, 27420, 27445, 27469, 27494, 27518, 27543, 27568, 27592, 27617, 27642, 27666, 27691, 27716, 27740, 27765, 27789, 27814, 27839, 27863, 27888, 27913, 27937, 27962, 27986, 28011, 28036, 28060, 28085, 28110, 28134, 28159, 28183, 28208, 28233, 28257, 28282, 28307, 28331, 28356, 52480};
uint16_t iOn[] = {11377, 12533, 13112, 16003, 18606, 20340, 20919, 21497, 22365, 22943, 22961, 22979, 22997, 23015, 23033, 23051, 23069, 23087, 23106, 23124, 23142, 23160, 23178, 23196, 23214, 23232, 23250, 23268, 23286, 23304, 23322, 23340, 23359, 23377, 23395, 23413, 23431, 23449, 23467, 23485, 23503, 24389, 26813, 26837, 26862, 26886, 26911, 26936, 26960, 26985, 27010, 27034, 27059, 27083, 27108, 27133, 27157, 27182, 27206, 27231, 27256, 27280, 27305, 27330, 27354, 27379, 27404, 27428, 27453, 27477, 27502, 27527, 27551, 27576, 27601, 27625, 27650, 27674, 27699, 27724, 27748, 27773, 27798, 27822, 27847, 27871, 27896, 27921, 27945, 27970, 27995, 28019, 28044, 28068, 28093, 28118, 28142, 28167, 28192, 28216, 28241, 28265, 28290, 28315, 28339, 28364, 28380};
uint16_t iOff[] = {11653, 12809, 13677, 16873, 19476, 20360, 21479, 21642, 22943, 22949, 22967, 22985, 23003, 23021, 23039, 23057, 23075, 23093, 23112, 23130, 23148, 23166, 23184, 23202, 23220, 23238, 23256, 23274, 23292, 23310, 23328, 23346, 23365, 23383, 23401, 23419, 23437, 23455, 23473, 23491, 23509, 24971, 26821, 26845, 26870, 26895, 26919, 26944, 26968, 26993, 27018, 27042, 27067, 27092, 27116, 27141, 27166, 27190, 27215, 27239, 27264, 27289, 27313, 27338, 27363, 27387, 27412, 27436, 27461, 27486, 27510, 27535, 27560, 27584, 27609, 27633, 27658, 27683, 27707, 27732, 27757, 27781, 27806, 27830, 27855, 27880, 27904, 27929, 27954, 27978, 28003, 28027, 28052, 28077, 28101, 28126, 28151, 28175, 28200, 28224, 28249, 28274, 28298, 28323, 28348, 28372, 28389};

uint8_t i_aLen = 74;
uint8_t i_bLen = 87;
uint8_t i_cLen = 71;
uint8_t i_dLen = 65;
uint8_t i_eLen = 104;
uint8_t i_fLen = 69;
uint8_t i_gLen = 106;
uint8_t i_hLen = 105;
uint8_t i_iLen = 107;


uint8_t i_aon = 0;
uint8_t i_aoff = 0;
uint8_t i_bon = 0;
uint8_t i_boff = 0;
uint8_t i_con = 0;
uint8_t i_coff = 0;
uint8_t i_don = 0;
uint8_t i_doff = 0;
uint8_t i_eon = 0;
uint8_t i_eoff = 0;
uint8_t i_fon = 0;
uint8_t i_foff = 0;
uint8_t i_gon = 0;
uint8_t i_goff = 0;
uint8_t i_hon = 0;
uint8_t i_hoff = 0;
uint8_t i_ion = 0;
uint8_t i_ioff = 0;


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

//  Serial.begin(9600);
}

unsigned long t = 0;
unsigned long tt = 0;

bool play = false;

bool first = true;

bool tCont = true;
bool erCont = false;
unsigned long tC = 0;

void loop() {

  if (!digitalRead(playBtn)) {
    
    
    //SEL SU PLAY
    if (first) {
      
      delay(200);
      tC = millis();
    
      while(tCont) {
        if (digitalRead(playBtn)) {
          tCont = false;
          erCont = true;
        }
        if ((millis() - tC) > 200) {
          tCont = false;
          erCont = false;
        }
      }

      if (!erCont) {
        play = true;
        digitalWrite(audioPin,HIGH);
        digitalWrite(lightPin,LOW);
        t = millis();
        first = false;
        tCont = true;
      }
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
        tCont = true;
        
      }
    }
    else {
      while(tCont) {
        if (digitalRead(playBtn)) {
          tCont = false;
          erCont = true;
        }
        if ((millis() - tC) > 200) {
          tCont = false;
          erCont = false;
        }
      }

      if (!erCont) {
        _idle();
      }
      
    }
  }
  else {
    //SEL SU MANUALE
    _idle();
    digitalWrite(audioPin,LOW);
    
  }

  if (play) {
    tt = (millis() - t)/10;

    //AAA
    if ((i_aon) < i_aLen) { 
      if ((tt > aOn[i_aon]) && (!aState)){
        digitalWrite(aPin,LOW);
        i_aon++;
        aState = true;
        //Serial.println("A_ON");
      }
    }
    if ((i_aoff) < i_aLen) { 
      if ((tt > aOff[i_aoff]) && (aState)) {
        digitalWrite(aPin,HIGH);
        i_aoff++;
        aState = false;
        //Serial.println("A_OFF");
      }
    }
    // BBB-2
    if ((i_bon) < i_bLen) { 
      if ((tt > bOn[i_bon]) && (!bState)){
        digitalWrite(bPin,LOW);
        i_bon++;
        bState = true;
        //Serial.println("B_ON");
      }
    }
    if ((i_boff) < i_bLen) { 
      if ((tt > bOff[i_boff]) && (bState)) {
        digitalWrite(bPin,HIGH);
        i_boff++;
        bState = false;
        //Serial.println("B_OFF");
      }
    }

    // CCC-3
    if ((i_con) < i_cLen) { 
      if ((tt > cOn[i_con]) && (!cState)){
        digitalWrite(cPin,LOW);
        i_con++;
        cState = true;
        //Serial.println("C_ON");
      }
    }
    if ((i_coff) < i_cLen) { 
      if ((tt > cOff[i_coff]) && (cState)) {
        digitalWrite(cPin,HIGH);
        i_coff++;
        cState = false;
        //Serial.println("C_OFF");
      }
    }
    // DDD-4
    if ((i_don) < i_dLen) { 
      if ((tt > dOn[i_don]) && (!dState)){
        digitalWrite(dPin,LOW);
        i_don++;
        dState = true;
        //Serial.println("D_ON");
      }
    }
    if ((i_doff) < i_dLen) { 
      if ((tt > dOff[i_doff]) && (dState)) {
        digitalWrite(dPin,HIGH);
        i_doff++;
        dState = false;
        //Serial.println("D_OFF");
      }
    }

    // EEE-5
    if ((i_eon) < i_eLen) { 
      if ((tt > eOn[i_eon]) && (!eState)){
        digitalWrite(ePin,LOW);
        i_eon++;
        eState = true;
        //Serial.println("E_ON");
      }
    }
    if ((i_eoff) < i_eLen) { 
      if ((tt > eOff[i_eoff]) && (eState)) {
        digitalWrite(ePin,HIGH);
        i_eoff++;
        eState = false;
        //Serial.println("E_OFF");
      }
    }

    // FFF-6
    if ((i_fon) < i_fLen) { 
      if ((tt > fOn[i_fon]) && (!fState)){
        digitalWrite(fPin,LOW);
        i_fon++;
        fState = true;
        //Serial.println("F_ON");
      }
    }
    if ((i_foff) < i_fLen) { 
      if ((tt > fOff[i_foff]) && (fState)) {
        digitalWrite(fPin,HIGH);
        i_foff++;
        fState = false;
        //Serial.println("F_OFF");
      }
    }

    // GGG-7
    if ((i_gon) < i_gLen) { 
      if ((tt > gOn[i_gon]) && (!gState)){
        digitalWrite(gPin,LOW);
        i_gon++;
        gState = true;
        //Serial.println("G_ON");
      }
    }
    if ((i_goff) < i_gLen) { 
      if ((tt > gOff[i_goff]) && (gState)) {
        digitalWrite(gPin,HIGH);
        i_goff++;
        gState = false;
        //Serial.println("G_OFF");
      }
    }
    
    // HHH-8
    if ((i_hon) < i_hLen) { 
      if ((tt > hOn[i_hon]) && (!hState)){
        digitalWrite(hPin,LOW);
        i_hon++;
        hState = true;
        //Serial.println("H_ON");
      }
    }
    if ((i_hoff) < i_hLen) { 
      if ((tt > hOff[i_hoff]) && (hState)) {
        digitalWrite(hPin,HIGH);
        i_hoff++;
        hState = false;
        //Serial.println("H_OFF");
      }
    }
 
    // III-9
    if ((i_ion) < i_iLen) { 
      if ((tt > iOn[i_ion]) && (!iState)){
        digitalWrite(iPin,LOW);
        i_ion++;
        iState = true;
        //Serial.println("I_ON");
      }
    }
    if ((i_ioff) < i_iLen) { 
      if ((tt > iOff[i_ioff]) && (iState)) {
        digitalWrite(iPin,HIGH);
        i_ioff++;
        iState = false;
        //Serial.println("I_OFF");
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

  tCont = true;
  erCont = false;

  play = false;
  digitalWrite(lightPin, HIGH);
  first = true;

  for (uint8_t i=48;i>25;i=i-2) {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }

  
}
