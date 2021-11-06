#pragma once
#include <string>
#include <iostream>
using namespace std;

enum class Tamanio { vaso, cucurucho, cuarto, medio, kilo, gordito };

string tamanio_to_string(Tamanio esp);

