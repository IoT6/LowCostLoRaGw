#ifndef LOCAL_LSC
#define LOCAL_LSC

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include "LSC_Encrypt.h"

#define LSC_SHOWB64
#ifdef LSC_SHOWB64
#include <Base64.h> 
#endif

extern uint8_t LSC_Nonce[16];

uint8_t local_lsc_create_pkt(uint8_t* message, uint8_t pl, uint8_t app_key_offset, uint8_t ptype, uint8_t node_addr);

#endif
