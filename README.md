# Лілка

<!-- AI-ASSISTANT-NOTES:START -->
## Мапа роботи для AI-агентів

Останнє оновлення: 2026-06-28. Цей розділ написаний для агентів кодування, яким потрібно швидко зрозуміти репозиторій.

Імена файлів, API, символів, гілок, команд і форматів залишені без перекладу навмисно.

### Призначення

Fork з Lilka handheld/embedded platform repository with firmware, SDK, docs and hardware/KiCad assets.

### Тип проєкту

Large embedded hardware/firmware fork.

### Основні точки входу і ролі файлів

- `README.md` - upstream project overview
- `Makefile` - root build/documentation entrypoint
- `firmware/` - device firmware and example apps, including doom port
- `sdk/` - SDK/library code
- `hardware/` - KiCad hardware design files and footprints
- `docs/` - Sphinx documentation
- `.github/workflows/` - firmware/sdk/docs CI

### Індекс джерел

- Показано 45 з 520 текстових source-файлів; generated/vendor/build-heavy області навмисно підсумовані.
- `docs/conf.py` - Python-модуль
- `docs/_static/custom.js` - JS/TS-модуль
- `docs/extensions/todos.py` - Python-модуль; символи: ToDoExtractor, run
- `firmware/doom/move_firmware.py` - Python-модуль; символи: copy_firmware
- `firmware/keira/targets.py` - Python-модуль; символи: decode_backtrace
- `hardware/v2/csv_to_md_bom_converter.py` - Python-модуль; символи: csv_to_markdown
- `firmware/doom/src/doom_splash.h` - заголовок / оголошення
- `firmware/doom/src/i_buzzersound.cpp` - C++ реалізація; символи: I_Buzzer_InitSound, lilka::serial_log, I_Buzzer_ShutdownSound, GetSfxLumpName, I_Buzzer_GetSfxLumpNum, I_Buzzer_UpdateSound, I_Buzzer_UpdateSoundParams, I_Buzzer_StartSound, I_Buzzer_StopSound, I_Buzzer_SoundIsPlaying, I_Buzzer_PrecacheSounds
- `firmware/doom/src/i_defaultmusic.cpp` - C++ реалізація; символи: I_Default_InitMusic, I_Default_ShutdownMusic, I_Default_SetMusicVolume, I_Default_PlaySong, I_Default_PauseSong, I_Default_ResumeSong, I_Default_StopSong, I_Default_RegisterSong, I_Default_UnRegisterSong, I_Default_MusicIsPlaying, I_Default_PollMusic
- `firmware/doom/src/i_i2ssound.cpp` - C++ реалізація; символи: I_I2S_InitSound, lilka::serial_log, I_I2S_ShutdownSound, GetSfxLumpName, I_I2S_GetSfxLumpNum, I_I2S_UpdateSound, I_I2S_UpdateSoundParams, I_I2S_StartSound, queueSound, soundTask, esp_i2s::i2s_write, I_I2S_StopSound, I_I2S_SoundIsPlaying, I_I2S_PrecacheSounds
- `firmware/doom/src/i_nosound.cpp` - C++ реалізація; символи: I_NoSound_InitSound, I_NoSound_ShutdownSound
- `firmware/doom/src/main.cpp` - головна реалізація / обробники подій; символи: buttonHandler, lilka::begin, lilka::serial_log, gameTask, drawTask
- `firmware/keira/sdcard/test.js` - JS/TS-модуль
- `firmware/keira/src/app.cpp` - C++ реалізація; символи: App::App, lilka::Canvas, frame, lilka::serial_log, App::start, lilka::serial_err, App::_run, App::suspend, App::resume, App::stop, App::queueDraw, App::setCore, App::setFlags, App::getFlags
- `firmware/keira/src/app.h` - заголовок / оголошення; символи: App, AppManager, onSuspend, onResume, onStop
- `firmware/keira/src/appmanager.cpp` - C++ реалізація; символи: AppManager::AppManager, lock, AppManager::getInstance, AppManager::setPanel, SuspensionData, AppManager::runApp, AppManager::removeTopApp, lilka::serial_err, AppManager::renderToast, AppManager::renderToCanvas, AppManager::startToast
- `firmware/keira/src/appmanager.h` - заголовок / оголошення; символи: AppManager
- `firmware/keira/src/keira_splash.h` - заголовок / оголошення
- `firmware/keira/src/main.cpp` - головна реалізація / обробники подій; символи: AppManager::getInstance, ServiceManager::getInstance, lilka::begin
- `firmware/keira/src/service.cpp` - C++ реалізація; символи: Service::Service, Service::start, lilka::serial_log, Service::_run, lilka::serial_err, Service::setStackSize
- `firmware/keira/src/service.h` - заголовок / оголошення; символи: Service, AppManager, ServiceManager
- `firmware/keira/src/servicemanager.cpp` - C++ реалізація; символи: ServiceManager::ServiceManager, ServiceManager::getInstance, ServiceManager::addService
- `firmware/keira/src/servicemanager.h` - заголовок / оголошення; символи: AcquireServiceManager, ServiceManager, getService, std::find_if, lilka::serial_err
- `firmware/sample/src/main.cpp` - головна реалізація / обробники подій; символи: lilka::begin
- `firmware/template/src/main.cpp` - головна реалізація / обробники подій; символи: lilka::begin
- `sdk/lib/lilka/prepare.py` - Python-модуль
- `sdk/tools/image2code/image2code.py` - Python-модуль
- `sdk/tools/image2code/ship.h` - заголовок / оголошення
- `firmware/keira/src/apps/callbacktest.cpp` - C++ реалізація; символи: CallBackTestApp::CallBackTestApp, CallBackTestApp::CallbackExample, CallBackTestApp::run
- `firmware/keira/src/apps/callbacktest.h` - заголовок / оголошення; символи: CallBackTestApp
- `firmware/keira/src/apps/gpiomanager.cpp` - C++ реалізація; символи: GPIOManagerApp::GPIOManagerApp, GPIOManagerApp::readPinData, GPIOManagerApp::run, lilka::serial_log, GPIOManagerApp::readSpeedCompare, GPIOManagerApp::getStrBits
- `firmware/keira/src/apps/gpiomanager.h` - заголовок / оголошення; символи: GPIOManagerApp
- `firmware/keira/src/apps/launcher.cpp` - C++ реалізація; символи: LauncherApp::LauncherApp, ServiceManager::getInstance, LauncherApp::run, ITEM::SUBMENU, ITEM::APP, ITEM::MENU, LauncherApp::showMenu, LauncherApp::alert, LauncherApp::runApp, AppManager::getInstance, LauncherApp::setWiFiTxPower, LauncherApp::wifiToggle, LauncherApp::wifiManager, LauncherApp::about
- `firmware/keira/src/apps/launcher.h` - заголовок / оголошення; символи: item_t, item_t::MENU, LauncherApp
- `firmware/keira/src/apps/statusbar.cpp` - C++ реалізація; символи: StatusBarApp::StatusBarApp, StatusBarApp::run, ServiceManager::getInstance, tm, StatusBarApp::drawIcons
- `firmware/keira/src/apps/statusbar.h` - заголовок / оголошення; символи: StatusBarApp
- `firmware/keira/src/apps/wifi_config.cpp` - C++ реалізація; символи: WiFiConfigApp::WiFiConfigApp, WiFiConfigApp::getEncryptionTypeStr, WiFiConfigApp::run, ServiceManager::getInstance
- `firmware/keira/src/apps/wifi_config.h` - заголовок / оголошення; символи: WiFiConfigApp
- `firmware/keira/src/services/clock.cpp` - C++ реалізація; символи: ClockService::ClockService, ClockService::run, ServiceManager::getInstance, lilka::serial_log, tm, timeval
- `firmware/keira/src/services/clock.h` - заголовок / оголошення; символи: ClockService, tm
- `firmware/keira/src/services/ftp.cpp` - C++ реалізація; символи: FTPService::FTPService, ServiceManager::getInstance, FTPService::run, FTPService::getEnabled, FTPService::setEnabled, FTPService::getUser, FTPService::getPassword, FTPService::createPassword
- `firmware/keira/src/services/ftp.h` - заголовок / оголошення; символи: FTPService
- `firmware/keira/src/services/KeiraBLEService.cpp` - C++ реалізація; символи: KeiraBLEService::KeiraBLEService, lilka::serial_log, KeiraBLEService::run, std::to_string
- `firmware/keira/src/services/KeiraBLEService.h` - заголовок / оголошення; символи: KeiraBLEService
- `firmware/keira/src/services/network.cpp` - C++ реалізація; символи: NetworkService::NetworkService, ipAddr, NetworkService::run, lilka::serial_log, NetworkService::autoConnect, NetworkService::getNetworkState, NetworkService::getSignalStrength, NetworkService::connect, NetworkService::getEnabled, NetworkService::setEnabled, NetworkService::getPassword, NetworkService::hash, NetworkService::getIpAddr, NetworkService::setNetworkState

### Потік виконання / даних

- Firmware and SDK build from Makefile/project-specific subdirectories.
- Docs are generated from docs/ and include firmware/hardware references.
- Hardware changes live under hardware/ and should be handled with KiCad tooling.

### Збірка, запуск або перевірка

- Use upstream README/Makefile targets for firmware, SDK and docs.

### Підказки для AI-агентів

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
