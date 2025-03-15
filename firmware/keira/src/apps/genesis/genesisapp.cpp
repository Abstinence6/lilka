#include "genesisapp.h"
#include "genesis.hpp"
#include <stdio.h>
#include "apps/nes/driver.h"

EXT_RAM_ATTR unsigned char *romfile;

GenesisApp::GenesisApp(String path) : App("GENESIS", 0, 0, lilka::display.width(), lilka::display.height()) {
    argv[0] = new char[path.length() + 1];
    strcpy(argv[0], path.c_str());
    //this->setStackSize(1024*8*50);
    lilka::serial_log("Total heap: %d", ESP.getHeapSize());
    lilka::serial_log("Free heap: %d", ESP.getFreeHeap());
    lilka::serial_log("Total PSRAM: %d", ESP.getPsramSize());
    lilka::serial_log("Free PSRAM: %d", ESP.getFreePsram());
    lilka::serial_log("Free Max Alloc Psram: %d", ESP.getMaxAllocPsram());
    
    romfile = (uint8_t*)heap_caps_malloc(0x600000, MALLOC_CAP_SPIRAM);

    FILE *fp;
    fp = fopen(argv[0], "rb");
    size_t size = fread(romfile,  16, 0x600000 / 16, fp);
    fclose(fp);

    Driver::setApp(this);

    init_genesis(romfile, size);

    setFlags(static_cast<AppFlags>(AppFlags::APP_FLAG_FULLSCREEN | AppFlags::APP_FLAG_INTERLACED));

    lilka::serial_log("init_genesis done");
}

GenesisApp::~GenesisApp() {
    delete[] argv[0];
}

void GenesisApp::run() {
    // Load the ROM
    //lilka::serial_log("setApp");
    //delay(10);
    //Driver::setApp(this);
    lilka::serial_log("run_genesis_rom");
    //delay(10);
    while(1)
        run_genesis_rom();
    //lilka::serial_log("run end");
    //delay(10);
    //nofrendo_main(1, argv);
    // TODO: Figure out how to terminate the emulator without crashing
}
