/*
 */

#include "culpa_do_akita.h"

//function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state) {
    writePinLow(B3);
    writePinLow(B2);
    writePinLow(B1);
    switch (get_highest_layer(state)) {
        case 1:
            writePinHigh(B3);
            break;
        case 2:
            writePinHigh(B2);
            break;
        case 3:
            writePinHigh(B1);
            break;
        default:
            writePinHigh(B3);
            writePinHigh(B2);
            writePinHigh(B1);
            break;
    }
    return state;
}
