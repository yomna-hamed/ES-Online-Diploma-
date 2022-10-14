/* startup.s for Cortex-M3
	Eng: Yomna Hamed
*/

.section .vectors

.word 0x20001000 
.word _reset
.word vector_handler       // NMI
.word vector_handler       // Hard Fault
.word vector_handler       // MM Fault
.word vector_handler       // Bus Fault
.word vector_handler       // Usage Fault
.word vector_handler       // Reserved
.word vector_handler       // Reserved
.word vector_handler       // Reserved 
.word vector_handler       // Reserved
.word vector_handler       // SV Call
.word vector_handler       // Debug Reserved
.word vector_handler       // PendSV
.word vector_handler       // SysTick
.word vector_handler       // IRQ0
.word vector_handler       // IRQ1
.word vector_handler       // IRQ2
.word vector_handler       // ...




.section .text 

_reset:
	bl main
	b . 

.thumb_func

vector_handler: 
	b _reset