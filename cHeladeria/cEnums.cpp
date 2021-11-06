#include "cEnums.h"

string tamanio_to_string(Tamanio esp)
{
	switch (esp)
	{
	case Tamanio::cuarto:
		return "cuarto";
		break;
	case Tamanio::cucurucho:
		return "cucurrucho";
		break;
	case Tamanio::gordito:
		return "Gordito";
		break;
	case Tamanio::kilo:
		return "Kilo";
		break;
	case Tamanio::medio:
		return "Medio";
		break;
	case Tamanio::vaso:
		return "Vaso";
		break;
	}
}
