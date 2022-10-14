/* Linker Script for Cortex_M3 
	Eng: Yomna Hamed
*/

MEMORY {
	Flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
	SRAM(RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS {
	.text : {
		startup.o(.vectors)
		*(.text)
		E_text = .;
	}> Flash 
	.data : {
		S_data = .;
		*(.data) 
		E_data = .;
	}> SRAM AT> Flash
	.bss : {
		S_bss = .;
		*(.bss)
		E_bss = .;
		. = . + 0x1000;
		Stack_Top = .;
	}> SRAM
}