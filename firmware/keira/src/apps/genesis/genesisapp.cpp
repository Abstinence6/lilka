#include "genesisapp.h"
#include "genesis.hpp"
#include <stdio.h>

EXT_RAM_ATTR unsigned char *romfile;

GenesisApp::GenesisApp(String path) : App("GENESIS", 0, 0, lilka::display.width(), lilka::display.height()) {
    argv[0] = new char[path.length() + 1];
    strcpy(argv[0], path.c_str());
    this->setStackSize(1024*16);
    lilka::serial_log(argv[0]);

    FILE *fp;
    fp = fopen(argv[0], "rb");
    size_t size = fread(romfile, 0x0400, 16, fp);
    fclose(fp);

    romfile = new unsigned char[1024*16];
    init_genesis(romfile, size);
   
#ifdef NESAPP_INTERLACED
    setFlags(static_cast<AppFlags>(AppFlags::APP_FLAG_FULLSCREEN | AppFlags::APP_FLAG_INTERLACED));
#else
    setFlags(static_cast<AppFlags>(AppFlags::APP_FLAG_FULLSCREEN));
#endif

    lilka::serial_log("init end");
}

GenesisApp::~GenesisApp() {
    delete[] argv[0];
}

void GenesisApp::run() {
    // Load the ROM
    lilka::serial_log("run start");
    run_genesis_rom();
    lilka::serial_log("run end");
    //Driver::setGenesisApp(this);
    //nofrendo_main(1, argv);
    // TODO: Figure out how to terminate the emulator without crashing
}
