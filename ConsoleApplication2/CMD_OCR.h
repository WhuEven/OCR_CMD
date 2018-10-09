#pragma once

#include<iostream>
#include<stdio.h>
#include<string>
#include <fstream>
#include <sstream>
#include <io.h>
#include<opencv.hpp>

using namespace std;
using namespace cv;

void tesseract_ocr(string img, string name);
const char* char_to_cmd(string img, string name);