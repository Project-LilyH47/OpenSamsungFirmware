// Samsung Flip3 5G Firmware SIM (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "communication.h"

void initializeBluetooth() {
  initializeBluetoothStack();

  registerBluetoothStack();

  startDiscovery();
}

void initializeWifi() {
  initializeWiFiStack();

  registerWiFiStack();

  connectToNetwork();
}

void initializeCellular() {
  initializeCellularModem();

  registerCellularModem();

  connectToNetwork();
}
