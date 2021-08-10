//
// Created by truno on 6/10/2021.
//

#ifndef THISOS_IDT_H
#define THISOS_IDT_H

struct IDTDescr{
    uint16_t offset_1;
    uint16_t selector;
    uint8_t zero;
    uint8_t type_attr;
    uint16_t offset_2;
    void SetOffset(uint32_t offset);
    uint32_t GetOffset();
};

#endif //THISOS_IDT_H
