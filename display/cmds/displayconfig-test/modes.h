
#ifndef _modes_h_
#define _modes_h_

#include <vendor/aw/display/config/1.0/IDisplayConfig.h>
using ::vendor::aw::display::config::V1_0::Dataspace;
using ::vendor::aw::display::config::V1_0::PixelFormat;

struct modename {
    int vendorid;
    const char *name;
};

const std::vector<modename>& getModeList();
modename getModenameByVendorId(uint32_t id);
const char* layerModeName(int id);
const char* dataspaceName(Dataspace mode);
const char* pixelformtName(PixelFormat id);

#endif
