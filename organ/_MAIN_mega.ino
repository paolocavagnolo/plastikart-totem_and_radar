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

#define remoteBtn A6
#define playBtn A7
#define dmxPin 5

unsigned long aOn[] = {18348, 24132, 31361, 113770, 119554, 128229, 209192, 229433, 243891, 268130, 269114, 270100, 271085, 272069, 273055, 274040, 275025, 276010, 276995, 277980, 278965};
unsigned long aOff[] = {19072, 24856, 32085, 116531, 122314, 130989, 214794, 235216, 249715, 268191, 269176, 270161, 271146, 272131, 273116, 274102, 275086, 276071, 277057, 278041, 279027};
unsigned long bOn[] = {1000, 6783, 12566, 18348, 24132, 31361, 35698, 41482, 47264, 58831, 70397, 81963, 93530, 105096, 122445, 131120, 160036, 172325, 186060, 214976, 223651, 238108, 252832, 268253, 268991, 269238, 269977, 270222, 270962, 271208, 271946, 272193, 272932, 273178, 273917, 274163, 274902, 275148, 275887, 276133, 276872, 277118, 277857, 278104, 278842, 279088, 279828};
unsigned long bOff[] = {1723, 7507, 13290, 19072, 24856, 32085, 36422, 42206, 52916, 64483, 76050, 87615, 99182, 113639, 125206, 136772, 168711, 180278, 194735, 216421, 229434, 241000, 260248, 268314, 269053, 269300, 270038, 270284, 271023, 271269, 272008, 272255, 272993, 273239, 273979, 274225, 274963, 275210, 275948, 276194, 276934, 277180, 277918, 278165, 278904, 279150, 279889};
unsigned long cOn[] = {21963, 125337, 206301, 209192, 217867, 229433, 243891, 268376, 268868, 269361, 269854, 270346, 270838, 271331, 271823, 272316, 272809, 273302, 273793, 274286, 274779, 275271, 275764, 276257, 276748, 277241, 277734, 278227, 278719, 279211, 279704};
unsigned long cOff[] = {22687, 128097, 206497, 214794, 218084, 235216, 249715, 268437, 268930, 269422, 269915, 270408, 270900, 271392, 271885, 272378, 272870, 273363, 273855, 274347, 274840, 275333, 275826, 276318, 276810, 277303, 277795, 278288, 278781, 279272, 279765};
unsigned long dOn[] = {86301, 113770, 122445, 136903, 172325, 203409, 232325, 243891, 264682, 268498, 268745, 269484, 269731, 270469, 270715, 271454, 271701, 272439, 272686, 273425, 273670, 274409, 274656, 275394, 275640, 276380, 276626, 277364, 277611, 278350, 278595, 279335, 279458, 279581};
unsigned long dOff[] = {89192, 116531, 125206, 140517, 177392, 203606, 234370, 249715, 268560, 268745, 268807, 269545, 269792, 270531, 270777, 271515, 271762, 272501, 272747, 273486, 273732, 274470, 274717, 275456, 275702, 276441, 276687, 277426, 277672, 278411, 278657, 279396, 279642, 284383};
unsigned long eOn[] = {47264, 70397, 76180, 81963, 93530, 125337, 128229, 131120, 142686, 145578, 148469, 152807, 160036, 177385, 186060, 200517, 229433, 238108, 252832, 264189, 268622, 269607, 269792, 270592, 270777, 271578, 271762, 272562, 272747, 273547, 273732, 274533, 274717, 275517, 275703, 276503, 276687, 277488, 277672, 278472, 278658, 279458};
unsigned long eOff[] = {52916, 74730, 79071, 84855, 97867, 128097, 130989, 136772, 142969, 145861, 148753, 153090, 168738, 180284, 194762, 200714, 232325, 241000, 260248, 268684, 269484, 269668, 270469, 270654, 271454, 271639, 272439, 272623, 273425, 273609, 274409, 274594, 275394, 275579, 276380, 276564, 277364, 277550, 278350, 278534, 279519, 284876};
unsigned long fOn[] = {265175, 268561, 268684, 269545, 269668, 270531, 270654, 271516, 271639, 272501, 272623, 273486, 273609, 274471, 274594, 275456, 275579, 276441, 276564, 277426, 277550, 278411, 278534, 279335, 279396, 279519};
unsigned long fOff[] = {268622, 268745, 268868, 269607, 269730, 270592, 270715, 271578, 271701, 272562, 272685, 273547, 273670, 274533, 274656, 275517, 275640, 276503, 276626, 277487, 277611, 278472, 278595, 279458, 279581, 283891};
unsigned long gOn[] = {105096, 119554, 131120, 160036, 186060, 209192, 214976, 217867, 223651, 229554, 229735, 229915, 230096, 230277, 230457, 230638, 230818, 231000, 231180, 231361, 231541, 231722, 231903, 232084, 232264, 232445, 232626, 232807, 232987, 233168, 233348, 233530, 233710, 233891, 234071, 234253, 234433, 234614, 234794, 234976, 235156, 243891, 268437, 268807, 269422, 269792, 270408, 270777, 271392, 271762, 272378, 272747, 273363, 273732, 274347, 274717, 275333, 275703, 276318, 276687, 277303, 277672, 278288, 278658, 279273, 279642};
unsigned long gOff[] = {113639, 122314, 136772, 168738, 194762, 214794, 216421, 218084, 229434, 229614, 229795, 229976, 230157, 230337, 230517, 230698, 230879, 231060, 231240, 231421, 231602, 231783, 231963, 232144, 232325, 232506, 232686, 232867, 233047, 233229, 233409, 233590, 233770, 233952, 234132, 234313, 234493, 234675, 234855, 235036, 235216, 249715, 268498, 268868, 269484, 269854, 270469, 270838, 271454, 271823, 272439, 272809, 273425, 273793, 274409, 274779, 275394, 275764, 276380, 276748, 277364, 277734, 278350, 278719, 279335, 279704};
unsigned long hOn[] = {122445, 128229, 160036, 186060, 214976, 217867, 223651, 229493, 229675, 229855, 230036, 230216, 230397, 230578, 230759, 230939, 231120, 231301, 231482, 231662, 231843, 232023, 232205, 232385, 232566, 232746, 232928, 233108, 233289, 233469, 233651, 233831, 234012, 234192, 234373, 234554, 234735, 234915, 235096, 238108, 252832, 268314, 268930, 269300, 269915, 270284, 270900, 271269, 271885, 272255, 272870, 273239, 273855, 274225, 274840, 275210, 275826, 276194, 276810, 277180, 277795, 278165, 278781, 279150, 279765};
unsigned long hOff[] = {125206, 130989, 168738, 194762, 216421, 218084, 229434, 229554, 229735, 229915, 230096, 230277, 230458, 230638, 230819, 231000, 231181, 231361, 231542, 231722, 231904, 232084, 232265, 232445, 232627, 232807, 232988, 233168, 233350, 233530, 233711, 233891, 234072, 234253, 234434, 234614, 234795, 234976, 235157, 241000, 260248, 268376, 268991, 269361, 269977, 270345, 270961, 271331, 271946, 272316, 272932, 273301, 273916, 274286, 274902, 275271, 275887, 276256, 276871, 277241, 277857, 278227, 278842, 279211, 279827};
unsigned long iOn[] = {113770, 125337, 131120, 160036, 186060, 203409, 209192, 214976, 223651, 229433, 229614, 229794, 229976, 230156, 230337, 230517, 230698, 230879, 231060, 231240, 231421, 231602, 231783, 231963, 232144, 232325, 232506, 232686, 232867, 233047, 233229, 233409, 233590, 233770, 233952, 234132, 234313, 234493, 234675, 234855, 235036, 243891, 268191, 269053, 269177, 270038, 270161, 271023, 271146, 272008, 272132, 272993, 273116, 273979, 274102, 274963, 275087, 275948, 276071, 276934, 277057, 277918, 278042, 278904, 279027, 279889};
unsigned long iOff[] = {116531, 128097, 136772, 168738, 194762, 203606, 214794, 216421, 229434, 229493, 229675, 229855, 230036, 230216, 230397, 230578, 230759, 230939, 231120, 231301, 231482, 231662, 231843, 232023, 232205, 232385, 232566, 232746, 232928, 233108, 233289, 233469, 233651, 233831, 234012, 234192, 234373, 234554, 234735, 234915, 235096, 249715, 268253, 269114, 269238, 270100, 270222, 271085, 271208, 272069, 272193, 273055, 273178, 274040, 274163, 275025, 275148, 276010, 276133, 276995, 277118, 277980, 278104, 278965, 279088, 279951};
int i_aLen = 21;
int i_bLen = 47;
int i_cLen = 31;
int i_dLen = 34;
int i_eLen = 42;
int i_fLen = 26;
int i_gLen = 66;
int i_hLen = 65;
int i_iLen = 66;



unsigned long i_aon = 0;
unsigned long i_aoff = 0;
unsigned long i_bon = 0;
unsigned long i_boff = 0;
unsigned long i_con = 0;
unsigned long i_coff = 0;
unsigned long i_don = 0;
unsigned long i_doff = 0;
unsigned long i_eon = 0;
unsigned long i_eoff = 0;
unsigned long i_fon = 0;
unsigned long i_foff = 0;
unsigned long i_gon = 0;
unsigned long i_goff = 0;
unsigned long i_hon = 0;
unsigned long i_hoff = 0;
unsigned long i_ion = 0;
unsigned long i_ioff = 0;


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
  digitalWrite(lightPin,LOW);
  pinMode(audioPin,OUTPUT);
  digitalWrite(audioPin,LOW);

  pinMode(remoteBtn,INPUT_PULLUP);
  pinMode(playBtn,INPUT_PULLUP);
  pinMode(dmxPin,INPUT);

  for (uint8_t i=48;i>25;i=i-2) {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }

  Serial.begin(9600);
  
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
      t = millis();
      first = false;
      Serial.println("PARTO!");
    }
    
  }

  else if (!digitalRead(remoteBtn)) {
    //SEL SU REMOTE
    if (digitalRead(dmxPin)) {
      if (first) {
        play = true;
        digitalWrite(audioPin,HIGH);
        t = millis();
        first = false;
        Serial.println("PARTO!");
      }
    }
    else {
      first = false;
      digitalWrite(audioPin,LOW);
      play = false;
    }
  }
  else {
    //SEL SU MANUALE
    first = false;
    play = false;
    digitalWrite(audioPin,HIGH);
    
  }

  if (play) {
    //AAA
    if ((i_aon) < i_aLen) { 
      if (((millis() - t) > aOn[i_aon]) && (!aState)){
        Serial.println("A_ON");
        digitalWrite(aPin,LOW);
        i_aon++;
        aState = true;
      }
    }
    if ((i_aoff) < i_aLen) { 
      if (((millis() - t) > aOff[i_aoff]) && (aState)) {
        Serial.println("A_OFF");
        digitalWrite(aPin,HIGH);
        i_aoff++;
        aState = false;
      }
    }
    // BBB-2
    if ((i_bon) < i_bLen) { 
      if (((millis() - t) > bOn[i_bon]) && (!bState)){
        Serial.println("B_ON");
        digitalWrite(bPin,LOW);
        i_bon++;
        bState = true;
      }
    }
    if ((i_boff) < i_bLen) { 
      if (((millis() - t) > bOff[i_boff]) && (bState)) {
        Serial.println("B_OFF");
        digitalWrite(bPin,HIGH);
        i_boff++;
        bState = false;
      }
    }

    // CCC-3
    if ((i_con) < i_cLen) { 
      if (((millis() - t) > cOn[i_con]) && (!cState)){
        Serial.println("C_ON");
        digitalWrite(cPin,LOW);
        i_con++;
        cState = true;
      }
    }
    if ((i_coff) < i_cLen) { 
      if (((millis() - t) > cOff[i_coff]) && (cState)) {
        Serial.println("C_OFF");
        digitalWrite(cPin,HIGH);
        i_coff++;
        cState = false;
      }
    }
    // DDD-4
    if ((i_don) < i_dLen) { 
      if (((millis() - t) > dOn[i_don]) && (!dState)){
        Serial.println("D_ON");
        digitalWrite(dPin,LOW);
        i_don++;
        dState = true;
      }
    }
    if ((i_doff) < i_dLen) { 
      if (((millis() - t) > dOff[i_doff]) && (dState)) {
        Serial.println("D_OFF");
        digitalWrite(dPin,HIGH);
        i_doff++;
        dState = false;
      }
    }

    // EEE-5
    if ((i_eon) < i_eLen) { 
      if (((millis() - t) > eOn[i_eon]) && (!eState)){
        Serial.println("E_ON");
        digitalWrite(ePin,LOW);
        i_eon++;
        eState = true;
      }
    }
    if ((i_eoff) < i_eLen) { 
      if (((millis() - t) > eOff[i_eoff]) && (eState)) {
        Serial.println("E_OFF");
        digitalWrite(ePin,HIGH);
        i_eoff++;
        eState = false;
      }
    }

    // FFF-6
    if ((i_fon) < i_fLen) { 
      if (((millis() - t) > fOn[i_fon]) && (!fState)){
        Serial.println("F_ON");
        digitalWrite(fPin,LOW);
        i_fon++;
        fState = true;
      }
    }
    if ((i_foff) < i_fLen) { 
      if (((millis() - t) > fOff[i_foff]) && (fState)) {
        Serial.println("F_OFF");
        digitalWrite(fPin,HIGH);
        i_foff++;
        fState = false;
      }
    }

    // GGG-7
    if ((i_gon) < i_gLen) { 
      if (((millis() - t) > gOn[i_gon]) && (!gState)){
        Serial.println("G_ON");
        digitalWrite(gPin,LOW);
        i_gon++;
        gState = true;
      }
    }
    if ((i_goff) < i_gLen) { 
      if (((millis() - t) > gOff[i_goff]) && (gState)) {
        Serial.println("G_OFF");
        digitalWrite(gPin,HIGH);
        i_goff++;
        gState = false;
      }
    }
    
    // HHH-8
    if ((i_hon) < i_hLen) { 
      if (((millis() - t) > hOn[i_hon]) && (!hState)){
        Serial.println("H_ON");
        digitalWrite(hPin,LOW);
        i_hon++;
        hState = true;
      }
    }
    if ((i_hoff) < i_hLen) { 
      if (((millis() - t) > hOff[i_hoff]) && (hState)) {
        Serial.println("H_OFF");
        digitalWrite(hPin,HIGH);
        i_hoff++;
        hState = false;
      }
    }
 
    // III-9
    if ((i_ion) < i_iLen) { 
      if (((millis() - t) > iOn[i_ion]) && (!iState)){
        Serial.println("I_ON");
        digitalWrite(iPin,LOW);
        i_ion++;
        iState = true;
      }
    }
    if ((i_ioff) < i_iLen) { 
      if (((millis() - t) > iOff[i_ioff]) && (iState)) {
        Serial.println("I_OFF");
        digitalWrite(iPin,HIGH);
        i_ioff++;
        iState = false;
      }
    }

  }
  
}
