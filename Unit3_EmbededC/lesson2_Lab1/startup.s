.global reset //to make reset symbol global to linker script 

reset: 
	ldr sp, =stack_top
	bl main
stop:
	b stop