################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Date.cpp \
../Vehicule.cpp \
../gestionImmatriculation.cpp \
../validationFormat.cpp 

OBJS += \
./Date.o \
./Vehicule.o \
./gestionImmatriculation.o \
./validationFormat.o 

CPP_DEPS += \
./Date.d \
./Vehicule.d \
./gestionImmatriculation.d \
./validationFormat.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


