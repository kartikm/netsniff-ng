/*
 * proto_vlan.h - VLAN proto helpers & declarations
 * Subject to the GPL, version 2.
 */

#ifndef PROTO_VLAN_H
#define PROTO_VLAN_H

#include <stdbool.h>
#include <inttypes.h>

static inline uint16_t vlan_tci2prio(uint16_t tci)
{
	return (tci & 0xe000) >> 13;
}

static inline uint16_t vlan_tci2cfi(uint16_t tci)
{
	return (tci & 0x1000) >> 12;
}

static inline uint16_t vlan_tci2vid(uint16_t tci)
{
	return tci & 0x0fff;
}

#endif
