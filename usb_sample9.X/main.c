#include "mcc_generated_files/system.h"
#include "usb.h"

/* ここからメイン */
int main(void) {
    // initialize the device
    SYSTEM_Initialize();
    USB_Initialize();

    while (1) {
        // Add your application code
        USB_GetKey();
    }

    return 1;
}

