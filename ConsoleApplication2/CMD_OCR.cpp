#include "pch.h"
#include "CMD_OCR.h"



/*�������*/
const char* char_to_cmd(string img, string name)
{
	const char* result;
	string temp = "tesseract " + img + " " + name + " -l chi_tra";
	result = temp.c_str();
	return result;

}

/*����CMDʶ��*/
void tesseract_ocr(string img, string name)
{
	const char* result;
	string temp = "tesseract " + img + " " + name + " -l chi_tra";
	result = temp.c_str();
	system(result);
}