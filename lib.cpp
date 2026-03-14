#include "lib.h"

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}

int build_number() {
    return PATCH_VERSION;
}
