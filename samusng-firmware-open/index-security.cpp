// Samsung Flip3 5G Firmware security indexer (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "security.h"

void initializeBiometrics() {
  initializeFingerprintSensor();
  initializeIrisScanner();
  initializeFaceRecognition();

  registerBiometricSensors();
}

void initializeEncryption() {
  initializeEncryptionEngine();

  registerEncryptionEngine();

  encryptData();
}
