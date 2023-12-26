// Samsung Flip3 5G Firmware kernel (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include "kernel.h"

void initializeKernel() {
  initializeScheduler();

  initializeMemoryManagement();

  initializeInterrupts();

  registerDrivers();

  startScheduler();
}
