// Samsung Flip3 5G Firmware Drivers (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "drivers.h"

void initializeDisplayDriver() {
  initializeDisplayControllerDriver();

  registerDisplayDriver();
}

void initializeAudioDriver() {
  initializeAudioCodecDriver();

  registerAudioDriver();
}

void initializeStorageDriver() {
  initializeStorageControllerDriver();

  registerStorageDriver();
}

void initializeNetworkDriver() {
  initializeWiFiDriver();

  initializeBluetoothDriver();

  initializeCellularModemDriver();

  registerNetworkDrivers();
}
