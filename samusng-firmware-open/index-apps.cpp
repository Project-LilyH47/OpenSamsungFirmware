// Samsung Flip3 5G Firmware Apps For Android OS (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "apps.h"

void initializePhoneApp() {
  initializePhoneAppUI();
  initializePhoneAppLogic();

  registerPhoneApp();
}

void initializeMessagesApp() {
  initializeMessagesAppUI();
  initializeMessagesAppLogic();

  registerMessagesApp();
}

void initializeCameraApp() {
  initializeCameraAppUI();
  initializeCameraAppLogic();

  registerCameraApp();
}

void initializeSettingsApp() {
  initializeSettingsAppUI();
  initializeSettingsAppLogic();

  registerSettingsApp();
}
