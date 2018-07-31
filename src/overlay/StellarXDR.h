#pragma once
#include "xdr/Starall-ledger-entries.h"
#include "xdr/Starall-ledger.h"
#include "xdr/Starall-overlay.h"
#include "xdr/Starall-transaction.h"
#include "xdr/Starall-types.h"

namespace starall
{

std::string xdr_printer(const PublicKey& pk);
}
