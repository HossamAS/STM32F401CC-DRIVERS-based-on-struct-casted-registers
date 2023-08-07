ENTRY(Reset_Handler)


MEMORY
{
  FLASH (rx)    : ORIGIN = 0x08000000, LENGTH = 256K
  RAM  (xrw)	: ORIGIN = 0x20000000, LENGTH = 64K
 
}


SECTIONS
{

  .isr_vector :
  {
    . = ALIGN(4);
    KEEP(*(.isr_vector)) 
    . = ALIGN(4);
  } >FLASH


  .text :
  {
    . = ALIGN(4);
    *(.text)  
    *(.text*)    
    . = ALIGN(4);     
  } >FLASH


  .rodata :
  {
    . = ALIGN(4);
    *(.rodata)                
    . = ALIGN(4);
  } >FLASH
  
 _sidata = LOADADDR(.data);
 
  .data : 
  {
    . = ALIGN(4);
    _sdata = .;        
    *(.data)           
    *(.data*)          
    . = ALIGN(4);
    _edata = .;        
  } >RAM AT> FLASH

  . = ALIGN(4);
  .bss :
  {
    _sbss = .;         
    *(.bss)
    *(.bss*)
    *(.common)
    . = ALIGN(4);
    _ebss = .; 
  } >RAM

}


