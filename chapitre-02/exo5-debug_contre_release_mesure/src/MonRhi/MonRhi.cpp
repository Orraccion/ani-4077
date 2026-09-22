#include "MonRhi/MonRhi.h"

namespace monrhi {
    const char* Version()          { return "MonRhi 0.2"; }
    std::string BackendActif()     { return "aucun"; }
    int GrandeSomme()        { 
        int result = 0;
        for (int i = 1; i < 100000000; ++i) {
            result = result + i;
        }
        return result; }
}