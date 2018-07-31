#pragma once
#include <xdr/Starall-types.h>

namespace std
{
template <> struct hash<starall::uint256>
{
    size_t operator()(starall::uint256 const& x) const noexcept;
};
}
