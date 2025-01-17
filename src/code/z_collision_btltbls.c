#include <ultra64.h>
#include <global.h>

DamageTable sDamageTablePresets[] = {
    { { 0x10, 0x01, 0x01, 0x02, 0xE0, 0x01, 0xF2, 0x10, 0xF1, 0xF2, 0xF2, 0x22, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x01, 0x02, 0xE0, 0x01, 0xF2, 0x10, 0xF1, 0xF2, 0xF2, 0x22, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x02, 0x01, 0x02, 0x10, 0x02, 0x02, 0x02, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
        0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x02, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x01, 0x00, 0x10, 0x01, 0x01, 0x10, 0x01, 0x01, 0x01, 0x01, 0x31, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x03, 0x00, 0x06, 0x00, 0x04, 0x04, 0x00, 0x02, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x03, 0x00, 0x06, 0x00, 0x04, 0x04, 0x00, 0x02, 0x06, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 0x01, 0x02, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x00, 0xE2, 0x10, 0x01, 0x02, 0x10, 0xF1, 0xF2, 0xF2, 0x22, 0x32, 0x01, 0x00, 0x00,
        0x00, 0x22, 0x32, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x02, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x01, 0x02, 0x10, 0x01, 0x02, 0x10, 0x01, 0x02, 0x02, 0x22, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x02, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
        0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x00, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x02, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
        0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x00, 0x02, 0x10, 0x01, 0x02, 0x10, 0xF1, 0xF2, 0xF2, 0x22, 0x32, 0x01, 0x00, 0x00,
        0x00, 0x22, 0x32, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x01, 0xF2, 0xE0, 0x01, 0xD2, 0x10, 0x01, 0x02, 0x02, 0x00, 0x32, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x10, 0x01, 0x00, 0xF0, 0x10, 0x01, 0xF0, 0x10, 0x01, 0x02, 0x02, 0x00, 0x12, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
    { { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 } },
};

/**
 * Returns a pointer to one of the 23 damage table presets, or NULL if the index
 * is out of range.
 */
DamageTable* DamageTable_Get(s32 index) {
    if (index < 0 || index > ARRAY_COUNT(sDamageTablePresets)-1) {
        return NULL;
    }

    return &sDamageTablePresets[index];
}

/**
 * Sets all entries in a damage table to 0
 */
void DamageTable_Clear(DamageTable* damageTable) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(damageTable->attack); i++) {
        damageTable->attack[i] = 0;
    }
}
