# Лілка

<!-- AI-ASSISTANT-NOTES:START -->
## AI working map

Last updated: 2026-06-28. This section is written for coding agents that need to understand the repository quickly.

### Purpose

Fork of Lilka handheld/embedded platform repository with firmware, SDK, docs and hardware/KiCad assets.

### Project type

Large embedded hardware/firmware fork.

### Primary entrypoints and file roles

- `README.md` - upstream project overview
- `Makefile` - root build/documentation entrypoint
- `firmware/` - device firmware and example apps, including doom port
- `sdk/` - SDK/library code
- `hardware/` - KiCad hardware design files and footprints
- `docs/` - Sphinx documentation
- `.github/workflows/` - firmware/sdk/docs CI

### Source index

- Showing 45 of 520 text source files; generated/vendor/build-heavy areas are intentionally summarized.
- `docs/conf.py` - Python module
- `docs/_static/custom.js` - JS/TS module
- `docs/extensions/todos.py` - Python module; symbols: ToDoExtractor, run
- `firmware/doom/move_firmware.py` - Python module; symbols: copy_firmware
- `firmware/keira/targets.py` - Python module; symbols: decode_backtrace
- `hardware/v2/csv_to_md_bom_converter.py` - Python module; symbols: csv_to_markdown
- `firmware/doom/src/doom_splash.h` - header / declarations
- `firmware/doom/src/i_buzzersound.cpp` - C++ implementation; symbols: I_Buzzer_InitSound, lilka::serial_log, I_Buzzer_ShutdownSound, GetSfxLumpName, I_Buzzer_GetSfxLumpNum, I_Buzzer_UpdateSound, I_Buzzer_UpdateSoundParams, I_Buzzer_StartSound, I_Buzzer_StopSound, I_Buzzer_SoundIsPlaying, I_Buzzer_PrecacheSounds
- `firmware/doom/src/i_defaultmusic.cpp` - C++ implementation; symbols: I_Default_InitMusic, I_Default_ShutdownMusic, I_Default_SetMusicVolume, I_Default_PlaySong, I_Default_PauseSong, I_Default_ResumeSong, I_Default_StopSong, I_Default_RegisterSong, I_Default_UnRegisterSong, I_Default_MusicIsPlaying, I_Default_PollMusic
- `firmware/doom/src/i_i2ssound.cpp` - C++ implementation; symbols: I_I2S_InitSound, lilka::serial_log, I_I2S_ShutdownSound, GetSfxLumpName, I_I2S_GetSfxLumpNum, I_I2S_UpdateSound, I_I2S_UpdateSoundParams, I_I2S_StartSound, queueSound, soundTask, esp_i2s::i2s_write, I_I2S_StopSound, I_I2S_SoundIsPlaying, I_I2S_PrecacheSounds
- `firmware/doom/src/i_nosound.cpp` - C++ implementation; symbols: I_NoSound_InitSound, I_NoSound_ShutdownSound
- `firmware/doom/src/main.cpp` - main implementation / event handlers; symbols: buttonHandler, lilka::begin, lilka::serial_log, gameTask, drawTask
- `firmware/keira/sdcard/test.js` - JS/TS module
- `firmware/keira/src/app.cpp` - C++ implementation; symbols: App::App, lilka::Canvas, frame, lilka::serial_log, App::start, lilka::serial_err, App::_run, App::suspend, App::resume, App::stop, App::queueDraw, App::setCore, App::setFlags, App::getFlags
- `firmware/keira/src/app.h` - header / declarations; symbols: App, AppManager, onSuspend, onResume, onStop
- `firmware/keira/src/appmanager.cpp` - C++ implementation; symbols: AppManager::AppManager, lock, AppManager::getInstance, AppManager::setPanel, SuspensionData, AppManager::runApp, AppManager::removeTopApp, lilka::serial_err, AppManager::renderToast, AppManager::renderToCanvas, AppManager::startToast
- `firmware/keira/src/appmanager.h` - header / declarations; symbols: AppManager
- `firmware/keira/src/keira_splash.h` - header / declarations
- `firmware/keira/src/main.cpp` - main implementation / event handlers; symbols: AppManager::getInstance, ServiceManager::getInstance, lilka::begin
- `firmware/keira/src/service.cpp` - C++ implementation; symbols: Service::Service, Service::start, lilka::serial_log, Service::_run, lilka::serial_err, Service::setStackSize
- `firmware/keira/src/service.h` - header / declarations; symbols: Service, AppManager, ServiceManager
- `firmware/keira/src/servicemanager.cpp` - C++ implementation; symbols: ServiceManager::ServiceManager, ServiceManager::getInstance, ServiceManager::addService
- `firmware/keira/src/servicemanager.h` - header / declarations; symbols: AcquireServiceManager, ServiceManager, getService, std::find_if, lilka::serial_err
- `firmware/sample/src/main.cpp` - main implementation / event handlers; symbols: lilka::begin
- `firmware/template/src/main.cpp` - main implementation / event handlers; symbols: lilka::begin
- `sdk/lib/lilka/prepare.py` - Python module
- `sdk/tools/image2code/image2code.py` - Python module
- `sdk/tools/image2code/ship.h` - header / declarations
- `firmware/keira/src/apps/callbacktest.cpp` - C++ implementation; symbols: CallBackTestApp::CallBackTestApp, CallBackTestApp::CallbackExample, CallBackTestApp::run
- `firmware/keira/src/apps/callbacktest.h` - header / declarations; symbols: CallBackTestApp
- `firmware/keira/src/apps/gpiomanager.cpp` - C++ implementation; symbols: GPIOManagerApp::GPIOManagerApp, GPIOManagerApp::readPinData, GPIOManagerApp::run, lilka::serial_log, GPIOManagerApp::readSpeedCompare, GPIOManagerApp::getStrBits
- `firmware/keira/src/apps/gpiomanager.h` - header / declarations; symbols: GPIOManagerApp
- `firmware/keira/src/apps/launcher.cpp` - C++ implementation; symbols: LauncherApp::LauncherApp, ServiceManager::getInstance, LauncherApp::run, ITEM::SUBMENU, ITEM::APP, ITEM::MENU, LauncherApp::showMenu, LauncherApp::alert, LauncherApp::runApp, AppManager::getInstance, LauncherApp::setWiFiTxPower, LauncherApp::wifiToggle, LauncherApp::wifiManager, LauncherApp::about
- `firmware/keira/src/apps/launcher.h` - header / declarations; symbols: item_t, item_t::MENU, LauncherApp
- `firmware/keira/src/apps/statusbar.cpp` - C++ implementation; symbols: StatusBarApp::StatusBarApp, StatusBarApp::run, ServiceManager::getInstance, tm, StatusBarApp::drawIcons
- `firmware/keira/src/apps/statusbar.h` - header / declarations; symbols: StatusBarApp
- `firmware/keira/src/apps/wifi_config.cpp` - C++ implementation; symbols: WiFiConfigApp::WiFiConfigApp, WiFiConfigApp::getEncryptionTypeStr, WiFiConfigApp::run, ServiceManager::getInstance
- `firmware/keira/src/apps/wifi_config.h` - header / declarations; symbols: WiFiConfigApp
- `firmware/keira/src/services/clock.cpp` - C++ implementation; symbols: ClockService::ClockService, ClockService::run, ServiceManager::getInstance, lilka::serial_log, tm, timeval
- `firmware/keira/src/services/clock.h` - header / declarations; symbols: ClockService, tm
- `firmware/keira/src/services/ftp.cpp` - C++ implementation; symbols: FTPService::FTPService, ServiceManager::getInstance, FTPService::run, FTPService::getEnabled, FTPService::setEnabled, FTPService::getUser, FTPService::getPassword, FTPService::createPassword
- `firmware/keira/src/services/ftp.h` - header / declarations; symbols: FTPService
- `firmware/keira/src/services/KeiraBLEService.cpp` - C++ implementation; symbols: KeiraBLEService::KeiraBLEService, lilka::serial_log, KeiraBLEService::run, std::to_string
- `firmware/keira/src/services/KeiraBLEService.h` - header / declarations; symbols: KeiraBLEService
- `firmware/keira/src/services/network.cpp` - C++ implementation; symbols: NetworkService::NetworkService, ipAddr, NetworkService::run, lilka::serial_log, NetworkService::autoConnect, NetworkService::getNetworkState, NetworkService::getSignalStrength, NetworkService::connect, NetworkService::getEnabled, NetworkService::setEnabled, NetworkService::getPassword, NetworkService::hash, NetworkService::getIpAddr, NetworkService::setNetworkState

### Runtime / data flow

- Firmware and SDK build from Makefile/project-specific subdirectories.
- Docs are generated from docs/ and include firmware/hardware references.
- Hardware changes live under hardware/ and should be handled with KiCad tooling.

### Build, run, or validate

- Use upstream README/Makefile targets for firmware, SDK and docs.

### AI agent guidance

- This is a fork; keep local changes small and easy to rebase.
- Do not hand-edit generated docs/build outputs.
- Hardware files require KiCad-aware review.

<!-- AI-ASSISTANT-NOTES:END -->

![Made in Ukraine](https://img.shields.io/badge/Made%20in-Ukraine-blue?logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxMjAwIiBoZWlnaHQ9IjgwMCI%2BCjxyZWN0IHdpZHRoPSIxMjAwIiBoZWlnaHQ9IjgwMCIgZmlsbD0iIzAwNTdCNyIvPgo8cmVjdCB3aWR0aD0iMTIwMCIgaGVpZ2h0PSI0MDAiIHk9IjQwMCIgZmlsbD0iI0ZGRDcwMCIvPgo8L3N2Zz4%3D)
[![Documentation Status](https://readthedocs.org/projects/lilka/badge/?version=latest)](https://docs.lilka.dev)
[![PlatformIO Registry](https://badges.registry.platformio.org/packages/and3rson/library/Lilka.svg)](https://registry.platformio.org/libraries/and3rson/Lilka)
[![firmware](https://github.com/and3rson/lilka/actions/workflows/firmware.yml/badge.svg)](https://github.com/and3rson/lilka/actions/workflows/firmware.yml)
[![code quality](https://github.com/and3rson/lilka/actions/workflows/code-quality.yml/badge.svg)](https://github.com/and3rson/lilka/actions/workflows/code-quality.yml)
[![Discord](https://img.shields.io/discord/1202315568846213172?label=Discord)][discord]

DIY-консоль, яку можна зібрати з дешевих готових модулів.

![Лілка v2](./img/v21.jpg)

## Де її можна купити?

Всі посилання та інструкції доступні [ось тут](https://lilka.dev/shop/)!

## Демо

Новини про проєкт Лілка V2:

[![Новини про проєкт "Лілка](https://img.youtube.com/vi/Xh49N__p2jE/hqdefault.jpg)](https://www.youtube.com/watch?v=Xh49N__p2jE)

Перша версія Лілки:

[![Проєкт "Лілка"](https://img.youtube.com/vi/6Tz70vqRrs0/hqdefault.jpg)](https://www.youtube.com/watch?v=6Tz70vqRrs0)

## Документація

Повна документація проєкту буде доступна ось тут: <https://docs.lilka.dev>

## Спільнота

Приєднуйтесь до [нашого сервера в Discord][discord]!

## Я хочу допомогти писати код!

Ми будемо тільки раді! Є декілька варіантів:

- Хочете написати гру, програму, документацію чи щось таке? Звісно! Документація є [тут (C++)](https://docs.lilka.dev/uk/latest/keira/custom_apps/) і [тут (Lua)](https://docs.lilka.dev/uk/latest/keira/lua/intro/).
- Хочете допомогти з вдосконаленням коду? Виконайте команду `make todo` - вона відобразить всі TODO з коду, де потрібна допомога.
- Хочете допомогти ідейно? Знайшли баг або маєте ідею щодо покращення архітектури? Створіть новий тікет або пишіть в наш [Discord][discord] в форум `#лілка`.

[discord]: https://discord.gg/HU68TaKCu6
