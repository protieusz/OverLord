// Copyright 2024 
// ProtieusKeebs
// SPDX-License-Identifier: GPL-2.0+

#include_next "mcuconf.h"

#undef RP_SPI_USE_SPI0
#define RP_SPI_USE_SPI0 FALSE

#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI1 TRUE