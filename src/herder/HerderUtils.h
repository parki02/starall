#pragma once

// Copyright 2017 Starall Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "xdr/Starall-types.h"
#include <vector>

namespace starall
{

struct SCPEnvelope;
struct SCPStatement;
struct StarallValue;

std::vector<Hash> getTxSetHashes(SCPEnvelope const& envelope);
std::vector<StarallValue> getStarallValues(SCPStatement const& envelope);
}
