CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o) 
AS= $(wildcard *.s)
OBJ_AS= $(AS:.s=.o)
project_name= learn_in_depth_cortex_m3



$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@

$(project_name).elf: $(OBJ) startup1.o
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) startup1.o -o $(project_name).elf -Map=Map_file.map

%.o: %.c 
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

startup1.o: startup1.s 
	$(CC)as.exe $(CFLAGS) startup1.s -o startup1.o

clean:
	rm *.elf *.bin 

clean_all:
	rm *.elf *.bin *.o 


