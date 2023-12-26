// Indexer modules, Google play adds them when a app needs them, Because of course its like apt where you need a lot of things to install simple app.

// Samsung Flip3 5G Firmware PPA Apps indexer Modules (main.en-us) (RF-E35 Firmware)
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

// Print is = to print in logs that user cant see at all

#include "apps.h"
#include "indexer.h"

const char* indexer_modules[] = {
  "ppa-one-ui"
  "initializeApps"
  "samsung-r-boot-screen"
  "initializeTouchScreenController"
};

int initializeIndexerModules() {
  initializeIndexerFramework();

  for (int i = 0; i < sizeof(indexer_modules) / sizeof(char*); i++) {
    registerIndexerModule(indexer_modules[i]);
  }

  startIndexerMainLoop();

  return 0;
}

int registerIndexerModule(const char* module_name) {
  IndexerModule* module = lookupModule(module_name);
  if (!module) {
    return -1;
  }

  registerModule(module);

  installDependencies(module);

  initializeModule(module);

  return 0;
}

IndexerModule* lookupModule(const char* module_name) {
  IndexerModule* module = new IndexerModule();
  module->name = module_name;
  module->version = "1.0";
  module->dependencies = new char*[1];
  module->dependencies[0] = "libc";
  return module;
}

int installDependencies(IndexerModule* module) {
  printf("Installing dependencies for module %s...\n", module->name);
  return 0;
}

int initializeModule(IndexerModule* module) {
  printf("Initializing module %s...\n", module->name);
  return 0;
}
