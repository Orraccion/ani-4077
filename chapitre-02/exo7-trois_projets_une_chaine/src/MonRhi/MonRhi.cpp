#include "MonRhi/MonRhi.h"
#include "MonUtil/MonUtil.h"

namespace monrhi {
    const char* Version()          { return "MonRhi 0.2"; }
    std::string BackendActif()     { return "aucun"; }
    void Initialiser()             { monutil::Afficher("MonRhi::Initialiser()"); }   
}