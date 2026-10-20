#pragma once
#include "api/Com.h"
#include <rec/robotino/api2/Motor.h>
#include <rec/robotino/api2/utils.h>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdint.h>

#define MOTOR_COUNT 3
#ifndef ROOT_LOG_PATH
#define ROOT_LOG_PATH "logs"
#endif
#define LOG_HEADER "Time;M1 pos;M2 pos;M3 pos;M1 vel;M2 vel;M3 vel;M1 cur;M2 cur;M3 cur;\n"

std::filesystem::path getLogPath();
void logRobotinoState(std::ostream &log);
