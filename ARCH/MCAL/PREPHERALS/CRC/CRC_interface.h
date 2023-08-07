/**************************************/
/* Description : CRC interface File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 15:37:10  23 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef CRC_INTERFACE_H
#define CRC_INTERFACE_H

class CRC_ct{
public:
uint32_kt CRC_u32Calculate32BitsSequence(uint32_kt au32DataCpy[],uint32_kt u32LengthCpy);
void CRC_vSaveTemp8bitsData(uint8_kt u8DataCpy);
uint8_kt CRC_u8ReadSavedTemp8bitsData(void);
void CRC_vReset(void);
};

#endif
