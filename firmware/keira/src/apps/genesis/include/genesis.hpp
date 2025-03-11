#pragma once

#include <string>
#include <vector>

void reset_genesis();
void init_genesis(uint8_t *romdata, size_t rom_data_size);
void load_genesis(std::string save_path);
void save_genesis(std::string save_path);
void run_genesis_rom();
void deinit_genesis();
std::vector<uint8_t> get_genesis_video_buffer();
