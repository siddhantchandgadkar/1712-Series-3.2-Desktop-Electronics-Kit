#ifndef CONFIG_H_
#define CONFIG_H_

class Constants {

  //Instruction Codes and Reponse codes from Pi and Node
  #define INSTRUCT_CODE_GET_TEENSY_ID                       0x00
  #define INSTRUCT_CODE_TEST_COMMUNICATION                  0x01
  #define INSTRUCT_CODE_TEST_LED                            0x02
  #define INSTRUCT_CODE_TEST_ALL_LED                        0x03
  #define INSTRUCT_CODE_TEST_SPEAKER                        0x04
  #define INSTRUCT_CODE_TEST_ALL_SPEAKER                    0x05
  #define INSTRUCT_CODE_TEST_MOTOR                          0x06
  #define INSTRUCT_CODE_TEST_ALL_MOTOR                      0x07
  #define INSTRUCT_CODE_TEST_SMA                            0x08
  #define INSTRUCT_CODE_TEST_PROPOGATE_ALL_SMA              0x09
  #define INSTRUCT_CODE_READ_IR                             0x0A
  #define INSTRUCT_CODE_READ_ALL_IR                         0x0B
  #define INSTRUCT_CODE_READ_ENVELOPE                       0x0C
  #define INSTRUCT_CODE_READ_ALL_ENVELOPE                   0x0D
  #define INSTRUCT_CODE_LED_FADE_ANIMATION                  0x0E
  #define INSTRUCT_CODE_PLAY_SD_WAV                         0x0F

  //Trigger Codes from Node
  #define TRIGGER_CODE_IR_THRESHOLD                         0xFF
  #define TRIGGER_CODE_IR_LEFT_TO_RIGHT                     0xFE
  #define TRIGGER_CODE_IR_RIGHT_TO_LEFT                     0xFD
  #define TRIGGER_CODE_ENVELOPE_THRESHOLD                   0xFC
  #define TRIGGER_CODE_GRIDEYE_THRESHOLD                    0xFB

};

#endif // CONFIG_H_