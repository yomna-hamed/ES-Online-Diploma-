CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m4
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o) 
AS= $(wildcard *.s)
OBJ_AS= $(AS:.s=.o)
project_name= learn_in_depth_cortex_m4


%.o: %.c 
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(project_name).elf: $(OBJ) 
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) -o $(project_name).elf -Map=Map_file.map
	cp $(project_name).elf $(project_name).axf

$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm *.elf *.bin 

clean_all:
	rm *.elf *.bin *.o 


