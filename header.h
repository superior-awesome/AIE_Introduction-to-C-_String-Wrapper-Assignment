#pragma once

#include "String.h"

void GetChoice(int* a);
void writeBothStrings(String* a, String* b);
void MakeChoice(int* a, String* strOne, String* strTwo);
void MakeChoiceToFile(int a, std::fstream* _file, String* strOne, String* strTwo);
