#pragma once
#include "app.h"

class GenesisApp : public App {
public:
    explicit GenesisApp(String path);
    ~GenesisApp();

private:
    void run();

    char* argv[1];
};
