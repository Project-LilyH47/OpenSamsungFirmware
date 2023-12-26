// Samsung Flip3 5G Firmware Hardware indexer (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "hardware.h"

void initializeHardware() {
  initializeCPU();

  initializeMemory();

  initializeDisplay();

  initializeAudio();

  initializeStorage();

  initializeNetwork();

  initializeSensors();
}

void initializeCPU() {
  initializeCPURegisters();

  setCPUClockSpeed();
  setCPUVoltage();

  enableCPUInterrupts();
}

void initializeMemory() {
  initializeRAM();

  initializeROM();

  initializeFlashMemory();
}

void initializeDisplay() {
  initializeDisplayController();

  initializeLCDPanel();

  initializeTouchScreenController();
}

void initializeAudio() {
  initializeAudioCodec();

  initializeSpeakerAmplifier();

  initializeMicrophonePreamplifier();
}

void initializeStorage() {
  initializeStorageController();

  initializeStorageDevice();
}

void initializeNetwork() {
  initializeWiFiController();

  initializeBluetoothController();

  initializeCellularModem();
}

void initializeSensors() {
  initializeAccelerometer();

  initializeGyroscope();

  initializeMagnetometer();

  initializeProximitySensor();

  initializeAmbientLightSensor();

  initializeFingerprintSensor();
}
