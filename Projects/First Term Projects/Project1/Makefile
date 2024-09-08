#@copyright : Mohamed elgohary
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -mthumb -gdwarf-2
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
project_name = Pressure_Sensor

all: $(project_name).hex
	@echo "Build is Done"

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(project_name).elf: $(OPJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOPJ) -o $@ -Map=Map_file.map

$(project_name).hex: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.hex *.map
	@echo "Everything clean"
clean:
	rm *.hex *.elf *.map