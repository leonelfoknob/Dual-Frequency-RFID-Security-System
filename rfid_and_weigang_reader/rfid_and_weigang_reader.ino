#include <SPI.h> // SPI
#include <MFRC522.h> // RFID
#include <Wiegand.h> //Wiegand

WIEGAND okuyucu;
int Wiegand_UID;// kart_kodu

#define SS_PIN 10
#define RST_PIN 9
MFRC522 rfid(SS_PIN, RST_PIN);

byte nuidPICC[4];
int UID_int[4];
String UID_String[4];
String RFI_UID_string; //UID_string

void setup(){ 
  Serial.begin(115200);
  SPI.begin();
  rfid.PCD_Init();
  okuyucu.begin(); 
}
 
void loop() {
  ReadUID_RFID();
  ReadUID_WEIGENER();
}

//READ UID NUMBER FROM TAG
void ReadUID_RFID(){
  if ( !rfid.PICC_IsNewCardPresent())
    return;
  if ( !rfid.PICC_ReadCardSerial())
    return;
  for (byte i = 0; i < 4; i++) {
    nuidPICC[i] = rfid.uid.uidByte[i];
    UID_int[i] = nuidPICC[i];
    UID_String[i] = String(UID_int[i]);
  }
   RFI_UID_string = UID_String[0]+UID_String[1]+UID_String[2]+UID_String[3];
  /*Serial.println("Un badge est détecté UID : ");*/
  Serial.print("RFI_UID_string : ");Serial.println(RFI_UID_string);
  /*Serial.print(",");*/
  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}
//weigener from tag
void ReadUID_WEIGENER(){
    if(okuyucu.available()){
    Wiegand_UID =okuyucu.getCode();
   // Serial.print("Kart üzerindeki kod: ");
    Serial.print("Wiegand_UID : ");Serial.println(Wiegand_UID);
    }
}
