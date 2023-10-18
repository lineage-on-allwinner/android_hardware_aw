#include <stdio.h>
#include <string.h>
#include "libhwinfo.h"

const char* get_wireless_info_value(const char *arg) {
    const char *info = NULL;
    
    if (strcmp(arg, "vendor") == 0) {
        info = get_wifi_vendor_name();
    } else if (strcmp(arg, "module") == 0) {
        info = get_wifi_module_name();
    } else if (strcmp(arg, "driver") == 0) {
        info = get_wifi_driver_name();
    } else if (strcmp(arg, "driver_module") == 0) {
        info = get_wifi_driver_module_name();
    } else if (strcmp(arg, "driver_module_args") == 0) {
        info = get_driver_module_arg();
    } else if (strcmp(arg, "wifi_lib_name") == 0) {
        info = get_wifi_hal_name();
    } else if (strcmp(arg, "bluetooth_lib_name") == 0) {
        info = get_bluetooth_libbt_name();
    } else if (strcmp(arg, "bluetooth_supported") == 0) {
        info = get_bluetooth_is_support() ? "1" : "0";
    }

    return info;
}

int main(int argc, char *argv[])
{
    const char *info = NULL;

    if (argc == 2) {
        info = get_wireless_info_value(argv[1]);
    } else {
        info = get_wifi_module_name();
    }

    if (!info)
        return 1;

    printf("%s\n", info);
    return 0;
}
