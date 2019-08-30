################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Clase\ 2\ Lab\ funcion\ maxmin.c 

OBJS += \
./src/Clase\ 2\ Lab\ funcion\ maxmin.o 

C_DEPS += \
./src/Clase\ 2\ Lab\ funcion\ maxmin.d 


# Each subdirectory must supply rules for building sources it contributes
src/Clase\ 2\ Lab\ funcion\ maxmin.o: ../src/Clase\ 2\ Lab\ funcion\ maxmin.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Clase 2 Lab funcion maxmin.d" -MT"src/Clase\ 2\ Lab\ funcion\ maxmin.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


