################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f103c6ux.s 

OBJS += \
./Startup/startup_stm32f103c6ux.o 

S_DEPS += \
./Startup/startup_stm32f103c6ux.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/startup_stm32f103c6ux.o: ../Startup/startup_stm32f103c6ux.s
	arm-none-eabi-gcc -gdwarf-2 -mcpu=cortex-m3 -g3 -c -x assembler-with-cpp -MMD -MP -MF"Startup/startup_stm32f103c6ux.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

