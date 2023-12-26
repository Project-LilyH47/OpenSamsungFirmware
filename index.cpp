// Samsung Flip3 5G Firmware (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "hardware.h"
#include "drivers.h"
#include "kernel.h"
#include "gui.h"
#include "apps.h"
#include "communication.h"
#include "security.h"

// Remove to Disable KVM (By default enabled in open samsung firmware)
#include "kvm.h"

int main() {
  initializeHardware();

  initializeDisplayDriver();
  initializeAudioDriver();
  initializeStorageDriver();
  initializeNetworkDriver();

  initializeKernel();

  initializeGUI();

  initializePhoneApp();
  initializeMessagesApp();
  initializeCameraApp();
  initializeSettingsApp();

  initializeBluetooth();
  initializeWifi();
  initializeCellular();

  initializeBiometrics();
  initializeEncryption();

  while (true) {
    handleUserInput();

    updateGUI();

    updatePhoneApp();
    updateMessagesApp();
    updateCameraApp();
    updateSettingsApp();

    updateBluetooth();
    updateWifi();
    updateCellular();

    updateBiometrics();
    updateEncryption();
  }

  shutdown();

  return 0;
}
