################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/events_init.c \
C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/gui_guider.c \
C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/setup_scr_main.c \
C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/setup_scr_menu.c \
C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/setup_scr_splashscreen.c 

OBJS += \
./Generated/events_init.o \
./Generated/gui_guider.o \
./Generated/setup_scr_main.o \
./Generated/setup_scr_menu.o \
./Generated/setup_scr_splashscreen.o 

C_DEPS += \
./Generated/events_init.d \
./Generated/gui_guider.d \
./Generated/setup_scr_main.d \
./Generated/setup_scr_menu.d \
./Generated/setup_scr_splashscreen.d 


# Each subdirectory must supply rules for building sources it contributes
Generated/events_init.o: C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/events_init.c Generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DSTM32F746NGHx -DSTM32F746G_DISCO -DDEBUG -DSTM32F746xx -DUSE_HAL_DRIVER -c -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/core" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/HAL_Driver/Inc" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/Utilities/STM32746G-Discovery" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/device" -I../../Gui/generated -I../../Gui/generated/guider_customer_fonts -I../../Gui/generated/guider_fonts -I../../Gui/generated/images -I.././lvgl/src/lv_font -O3 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Generated/events_init.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Generated/gui_guider.o: C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/gui_guider.c Generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DSTM32F746NGHx -DSTM32F746G_DISCO -DDEBUG -DSTM32F746xx -DUSE_HAL_DRIVER -c -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/core" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/HAL_Driver/Inc" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/Utilities/STM32746G-Discovery" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/device" -I../../Gui/generated -I../../Gui/generated/guider_customer_fonts -I../../Gui/generated/guider_fonts -I../../Gui/generated/images -I.././lvgl/src/lv_font -O3 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Generated/gui_guider.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Generated/setup_scr_main.o: C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/setup_scr_main.c Generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DSTM32F746NGHx -DSTM32F746G_DISCO -DDEBUG -DSTM32F746xx -DUSE_HAL_DRIVER -c -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/core" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/HAL_Driver/Inc" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/Utilities/STM32746G-Discovery" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/device" -I../../Gui/generated -I../../Gui/generated/guider_customer_fonts -I../../Gui/generated/guider_fonts -I../../Gui/generated/images -I.././lvgl/src/lv_font -O3 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Generated/setup_scr_main.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Generated/setup_scr_menu.o: C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/setup_scr_menu.c Generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DSTM32F746NGHx -DSTM32F746G_DISCO -DDEBUG -DSTM32F746xx -DUSE_HAL_DRIVER -c -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/core" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/HAL_Driver/Inc" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/Utilities/STM32746G-Discovery" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/device" -I../../Gui/generated -I../../Gui/generated/guider_customer_fonts -I../../Gui/generated/guider_fonts -I../../Gui/generated/images -I.././lvgl/src/lv_font -O3 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Generated/setup_scr_menu.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Generated/setup_scr_splashscreen.o: C:/Github/SourceMeasureUnit/DisplayFirmware/Gui/generated/setup_scr_splashscreen.c Generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DSTM32F746NGHx -DSTM32F746G_DISCO -DDEBUG -DSTM32F746xx -DUSE_HAL_DRIVER -c -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/core" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/HAL_Driver/Inc" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/Utilities/STM32746G-Discovery" -I"C:/Github/SourceMeasureUnit/DisplayFirmware/lv_port_stm32f746_disco/CMSIS/device" -I../../Gui/generated -I../../Gui/generated/guider_customer_fonts -I../../Gui/generated/guider_fonts -I../../Gui/generated/images -I.././lvgl/src/lv_font -O3 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Generated/setup_scr_splashscreen.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

