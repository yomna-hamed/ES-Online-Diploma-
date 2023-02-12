/* Linker Script for Cortex_M3 
	Eng: Yomna Hamed
*/

MEMORY {
	Flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
	SRAM(RWX) : ORIGIN = 0x20000000, LENGTH = 512M
}

SECTIONS {
	.text : {
		*(.vectors)
		*(.text)
		*(.rodata)
		E_text = .;
	}> Flash 
	.data : {
		S_data = .;
		*(.data) 
		. = ALIGN(4) ;
		E_data = .;
	}> SRAM AT> Flash
	.bss : {
		S_bss = .;
		*(.bss)
		E_bss = .;
	}> SRAM
}