################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/images/_osmu_alpha_100x100.c 

OBJS += \
./Generated/images/_osmu_alpha_100x100.o 

C_DEPS += \
./Generated/images/_osmu_alpha_100x100.d 


# Each subdirectory must supply rules for building sources it contributes
Generated/images/_osmu_alpha_100x100.o: C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/images/_osmu_alpha_100x100.c Generated/images/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DSTM32F746NGHx -DSTM32F746G_DISCO -DDEBUG -DSTM32F746xx -DUSE_HAL_DRIVER -c -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/core" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/HAL_Driver/Inc" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/Utilities/STM32746G-Discovery" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/device" -I../../Gui/generated -I../../Gui/generated/guider_customer_fonts -I../../Gui/generated/guider_fonts -I../../Gui/generated/images -I.././lvgl/src/lv_font -O3 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Generated/images/_osmu_alpha_100x100.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

