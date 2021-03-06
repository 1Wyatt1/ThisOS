#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "keyboard.h"

// read controller status
uint8_t keyboard_ctrl_read_status() {
    return inb(KEYBOARD_CTRL_STATS_REG);
}

// send command byte to controller
void keyboad_ctrl_send_cmd (uint8_t cmd) {
    // wait for controller input buffer to be clear
    while (1)
        if ( (keyboard_ctrl_read_status () && KEYBOARD_CTRL_STATS_MASK_IN_BUF) == 0)
            break;
    outb(KEYBOARD_CTRL_CMD_REG, cmd);
}

//read encoder buffer
uint8_t kybrd_enc_read_buf () {
    return inb(KYBRD_ENC_INPUT_BUF);
}

// write command byte to encoder
void kybrd_enc_send_cmd (uint8_t cmd) {
    // wait for controller input buffer to be clear
    while (1)
        if ( (kybrd_ctrl_read_status () & KYBRD_CTRL_STATS_MASK_IN_BUF) == 0)
            break;
    // send command byte to encoder
    outb(KYBRD_ENC_CMD_REG, cmd);
}
