#include <iostream>
#include "CRC.h"

const uint64_t CRC64::m_polynomial = 0xC96C5795D7870F42ull;

CRC::CRC()
{}

CRC::~CRC()
{}

void CRC::create_crc_table()
{}

uint64_t CRC64::get_crc_code(uint8_t *stream, int length)
{}

