// -*- C++ -*-
// Automatically generated from xdr/Stellar-overlay.x.
// DO NOT EDIT or your changes may be overwritten

#ifndef __XDR_XDR_STELLAR_OVERLAY_H_INCLUDED__
#define __XDR_XDR_STELLAR_OVERLAY_H_INCLUDED__ 1

#include <xdrpp/types.h>

#include "xdr/Starall-ledger.h"

namespace starall {

enum ErrorCode : std::int32_t {
  ERR_MISC = 0,
  ERR_DATA = 1,
  ERR_CONF = 2,
  ERR_AUTH = 3,
  ERR_LOAD = 4,
};
} namespace xdr {
template<> struct xdr_traits<::starall::ErrorCode>
  : xdr_integral_base<::starall::ErrorCode, std::uint32_t> {
  using case_type = std::int32_t;
  static Constexpr const bool is_enum = true;
  static Constexpr const bool is_numeric = false;
  static const char *enum_name(::starall::ErrorCode val) {
    switch (val) {
    case ::starall::ERR_MISC:
      return "ERR_MISC";
    case ::starall::ERR_DATA:
      return "ERR_DATA";
    case ::starall::ERR_CONF:
      return "ERR_CONF";
    case ::starall::ERR_AUTH:
      return "ERR_AUTH";
    case ::starall::ERR_LOAD:
      return "ERR_LOAD";
    default:
      return nullptr;
    }
  }
  static const std::vector<int32_t> &enum_values() {
    static const std::vector<int32_t> _xdr_enum_vec = {
      ::starall::ERR_MISC,
      ::starall::ERR_DATA,
      ::starall::ERR_CONF,
      ::starall::ERR_AUTH,
      ::starall::ERR_LOAD
    };
    return _xdr_enum_vec;
  }
};
} namespace starall {

struct Error {
  ErrorCode code{};
  xdr::xstring<100> msg{};

  Error() = default;
  template<typename _code_T,
           typename _msg_T,
           typename = typename
           std::enable_if<std::is_constructible<ErrorCode, _code_T>::value
                          && std::is_constructible<xdr::xstring<100>, _msg_T>::value
                         >::type>
  explicit Error(_code_T &&_code,
                 _msg_T &&_msg)
    : code(std::forward<_code_T>(_code)),
      msg(std::forward<_msg_T>(_msg)) {}
};
} namespace xdr {
template<> struct xdr_traits<::starall::Error>
  : xdr_struct_base<field_ptr<::starall::Error,
                              decltype(::starall::Error::code),
                              &::starall::Error::code>,
                    field_ptr<::starall::Error,
                              decltype(::starall::Error::msg),
                              &::starall::Error::msg>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::Error &obj) {
    archive(ar, obj.code, "code");
    archive(ar, obj.msg, "msg");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::Error &obj) {
    archive(ar, obj.code, "code");
    archive(ar, obj.msg, "msg");
    xdr::validate(obj);
  }
};
} namespace starall {

struct AuthCert {
  Curve25519Public pubkey{};
  uint64 expiration{};
  Signature sig{};

  AuthCert() = default;
  template<typename _pubkey_T,
           typename _expiration_T,
           typename _sig_T,
           typename = typename
           std::enable_if<std::is_constructible<Curve25519Public, _pubkey_T>::value
                          && std::is_constructible<uint64, _expiration_T>::value
                          && std::is_constructible<Signature, _sig_T>::value
                         >::type>
  explicit AuthCert(_pubkey_T &&_pubkey,
                    _expiration_T &&_expiration,
                    _sig_T &&_sig)
    : pubkey(std::forward<_pubkey_T>(_pubkey)),
      expiration(std::forward<_expiration_T>(_expiration)),
      sig(std::forward<_sig_T>(_sig)) {}
};
} namespace xdr {
template<> struct xdr_traits<::starall::AuthCert>
  : xdr_struct_base<field_ptr<::starall::AuthCert,
                              decltype(::starall::AuthCert::pubkey),
                              &::starall::AuthCert::pubkey>,
                    field_ptr<::starall::AuthCert,
                              decltype(::starall::AuthCert::expiration),
                              &::starall::AuthCert::expiration>,
                    field_ptr<::starall::AuthCert,
                              decltype(::starall::AuthCert::sig),
                              &::starall::AuthCert::sig>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::AuthCert &obj) {
    archive(ar, obj.pubkey, "pubkey");
    archive(ar, obj.expiration, "expiration");
    archive(ar, obj.sig, "sig");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::AuthCert &obj) {
    archive(ar, obj.pubkey, "pubkey");
    archive(ar, obj.expiration, "expiration");
    archive(ar, obj.sig, "sig");
    xdr::validate(obj);
  }
};
} namespace starall {

struct Hello {
  uint32 ledgerVersion{};
  uint32 overlayVersion{};
  uint32 overlayMinVersion{};
  Hash networkID{};
  xdr::xstring<100> versionStr{};
  std::int32_t listeningPort{};
  NodeID peerID{};
  AuthCert cert{};
  uint256 nonce{};

  Hello() = default;
  template<typename _ledgerVersion_T,
           typename _overlayVersion_T,
           typename _overlayMinVersion_T,
           typename _networkID_T,
           typename _versionStr_T,
           typename _listeningPort_T,
           typename _peerID_T,
           typename _cert_T,
           typename _nonce_T,
           typename = typename
           std::enable_if<std::is_constructible<uint32, _ledgerVersion_T>::value
                          && std::is_constructible<uint32, _overlayVersion_T>::value
                          && std::is_constructible<uint32, _overlayMinVersion_T>::value
                          && std::is_constructible<Hash, _networkID_T>::value
                          && std::is_constructible<xdr::xstring<100>, _versionStr_T>::value
                          && std::is_constructible<std::int32_t, _listeningPort_T>::value
                          && std::is_constructible<NodeID, _peerID_T>::value
                          && std::is_constructible<AuthCert, _cert_T>::value
                          && std::is_constructible<uint256, _nonce_T>::value
                         >::type>
  explicit Hello(_ledgerVersion_T &&_ledgerVersion,
                 _overlayVersion_T &&_overlayVersion,
                 _overlayMinVersion_T &&_overlayMinVersion,
                 _networkID_T &&_networkID,
                 _versionStr_T &&_versionStr,
                 _listeningPort_T &&_listeningPort,
                 _peerID_T &&_peerID,
                 _cert_T &&_cert,
                 _nonce_T &&_nonce)
    : ledgerVersion(std::forward<_ledgerVersion_T>(_ledgerVersion)),
      overlayVersion(std::forward<_overlayVersion_T>(_overlayVersion)),
      overlayMinVersion(std::forward<_overlayMinVersion_T>(_overlayMinVersion)),
      networkID(std::forward<_networkID_T>(_networkID)),
      versionStr(std::forward<_versionStr_T>(_versionStr)),
      listeningPort(std::forward<_listeningPort_T>(_listeningPort)),
      peerID(std::forward<_peerID_T>(_peerID)),
      cert(std::forward<_cert_T>(_cert)),
      nonce(std::forward<_nonce_T>(_nonce)) {}
};
} namespace xdr {
template<> struct xdr_traits<::starall::Hello>
  : xdr_struct_base<field_ptr<::starall::Hello,
                              decltype(::starall::Hello::ledgerVersion),
                              &::starall::Hello::ledgerVersion>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::overlayVersion),
                              &::starall::Hello::overlayVersion>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::overlayMinVersion),
                              &::starall::Hello::overlayMinVersion>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::networkID),
                              &::starall::Hello::networkID>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::versionStr),
                              &::starall::Hello::versionStr>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::listeningPort),
                              &::starall::Hello::listeningPort>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::peerID),
                              &::starall::Hello::peerID>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::cert),
                              &::starall::Hello::cert>,
                    field_ptr<::starall::Hello,
                              decltype(::starall::Hello::nonce),
                              &::starall::Hello::nonce>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::Hello &obj) {
    archive(ar, obj.ledgerVersion, "ledgerVersion");
    archive(ar, obj.overlayVersion, "overlayVersion");
    archive(ar, obj.overlayMinVersion, "overlayMinVersion");
    archive(ar, obj.networkID, "networkID");
    archive(ar, obj.versionStr, "versionStr");
    archive(ar, obj.listeningPort, "listeningPort");
    archive(ar, obj.peerID, "peerID");
    archive(ar, obj.cert, "cert");
    archive(ar, obj.nonce, "nonce");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::Hello &obj) {
    archive(ar, obj.ledgerVersion, "ledgerVersion");
    archive(ar, obj.overlayVersion, "overlayVersion");
    archive(ar, obj.overlayMinVersion, "overlayMinVersion");
    archive(ar, obj.networkID, "networkID");
    archive(ar, obj.versionStr, "versionStr");
    archive(ar, obj.listeningPort, "listeningPort");
    archive(ar, obj.peerID, "peerID");
    archive(ar, obj.cert, "cert");
    archive(ar, obj.nonce, "nonce");
    xdr::validate(obj);
  }
};
} namespace starall {

struct Auth {
  std::int32_t unused{};

  Auth() = default;
  template<typename _unused_T,
           typename = typename
           std::enable_if<std::is_constructible<std::int32_t, _unused_T>::value
                         >::type>
  explicit Auth(_unused_T &&_unused)
    : unused(std::forward<_unused_T>(_unused)) {}
};
} namespace xdr {
template<> struct xdr_traits<::starall::Auth>
  : xdr_struct_base<field_ptr<::starall::Auth,
                              decltype(::starall::Auth::unused),
                              &::starall::Auth::unused>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::Auth &obj) {
    archive(ar, obj.unused, "unused");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::Auth &obj) {
    archive(ar, obj.unused, "unused");
    xdr::validate(obj);
  }
};
} namespace starall {

enum IPAddrType : std::int32_t {
  IPv4 = 0,
  IPv6 = 1,
};
} namespace xdr {
template<> struct xdr_traits<::starall::IPAddrType>
  : xdr_integral_base<::starall::IPAddrType, std::uint32_t> {
  using case_type = std::int32_t;
  static Constexpr const bool is_enum = true;
  static Constexpr const bool is_numeric = false;
  static const char *enum_name(::starall::IPAddrType val) {
    switch (val) {
    case ::starall::IPv4:
      return "IPv4";
    case ::starall::IPv6:
      return "IPv6";
    default:
      return nullptr;
    }
  }
  static const std::vector<int32_t> &enum_values() {
    static const std::vector<int32_t> _xdr_enum_vec = {
      ::starall::IPv4,
      ::starall::IPv6
    };
    return _xdr_enum_vec;
  }
};
} namespace starall {

struct PeerAddress {
  struct _ip_t {
    using _xdr_case_type = xdr::xdr_traits<IPAddrType>::case_type;
  private:
    _xdr_case_type type_;
    union {
      xdr::opaque_array<4> ipv4_;
      xdr::opaque_array<16> ipv6_;
    };

  public:
    static Constexpr const bool _xdr_has_default_case = false;
    static const std::vector<IPAddrType> &_xdr_case_values() {
      static const std::vector<IPAddrType> _xdr_disc_vec {
        IPv4,
        IPv6
      };
      return _xdr_disc_vec;
    }
    static Constexpr int _xdr_field_number(_xdr_case_type which) {
      return which == IPv4 ? 1
        : which == IPv6 ? 2
        : -1;
    }
    template<typename _F, typename..._A> static bool
    _xdr_with_mem_ptr(_F &_f, _xdr_case_type _which, _A&&..._a) {
      switch (_which) {
      case IPv4:
        _f(&_ip_t::ipv4_, std::forward<_A>(_a)...);
        return true;
      case IPv6:
        _f(&_ip_t::ipv6_, std::forward<_A>(_a)...);
        return true;
      }
      return false;
    }

    _xdr_case_type _xdr_discriminant() const { return type_; }
    void _xdr_discriminant(_xdr_case_type which, bool validate = true) {
      int fnum = _xdr_field_number(which);
      if (fnum < 0 && validate)
        throw xdr::xdr_bad_discriminant("bad value of type in _ip_t");
      if (fnum != _xdr_field_number(type_)) {
        this->~_ip_t();
        type_ = which;
        _xdr_with_mem_ptr(xdr::field_constructor, type_, *this);
      }
      else
        type_ = which;
    }
    explicit _ip_t(IPAddrType which = IPAddrType{}) : type_(which) {
      _xdr_with_mem_ptr(xdr::field_constructor, type_, *this);
    }
    _ip_t(const _ip_t &source) : type_(source.type_) {
      _xdr_with_mem_ptr(xdr::field_constructor, type_, *this, source);
    }
    _ip_t(_ip_t &&source) : type_(source.type_) {
      _xdr_with_mem_ptr(xdr::field_constructor, type_, *this,
                        std::move(source));
    }
    ~_ip_t() { _xdr_with_mem_ptr(xdr::field_destructor, type_, *this); }
    _ip_t &operator=(const _ip_t &source) {
      if (_xdr_field_number(type_)
          == _xdr_field_number(source.type_))
        _xdr_with_mem_ptr(xdr::field_assigner, type_, *this, source);
      else {
        this->~_ip_t();
        type_ = std::numeric_limits<_xdr_case_type>::max();
        _xdr_with_mem_ptr(xdr::field_constructor, source.type_, *this, source);
      }
      type_ = source.type_;
      return *this;
    }
    _ip_t &operator=(_ip_t &&source) {
      if (_xdr_field_number(type_)
           == _xdr_field_number(source.type_))
        _xdr_with_mem_ptr(xdr::field_assigner, type_, *this,
                          std::move(source));
      else {
        this->~_ip_t();
        type_ = std::numeric_limits<_xdr_case_type>::max();
        _xdr_with_mem_ptr(xdr::field_constructor, source.type_, *this,
                          std::move(source));
      }
      type_ = source.type_;
      return *this;
    }

    IPAddrType type() const { return IPAddrType(type_); }
    _ip_t &type(IPAddrType _xdr_d, bool _xdr_validate = true) {
      _xdr_discriminant(_xdr_d, _xdr_validate);
      return *this;
    }

    xdr::opaque_array<4> &ipv4() {
      if (_xdr_field_number(type_) == 1)
        return ipv4_;
      throw xdr::xdr_wrong_union("_ip_t: ipv4 accessed when not selected");
    }
    const xdr::opaque_array<4> &ipv4() const {
      if (_xdr_field_number(type_) == 1)
        return ipv4_;
      throw xdr::xdr_wrong_union("_ip_t: ipv4 accessed when not selected");
    }
    xdr::opaque_array<16> &ipv6() {
      if (_xdr_field_number(type_) == 2)
        return ipv6_;
      throw xdr::xdr_wrong_union("_ip_t: ipv6 accessed when not selected");
    }
    const xdr::opaque_array<16> &ipv6() const {
      if (_xdr_field_number(type_) == 2)
        return ipv6_;
      throw xdr::xdr_wrong_union("_ip_t: ipv6 accessed when not selected");
    }
  };

  _ip_t ip{};
  uint32 port{};
  uint32 numFailures{};

  PeerAddress() = default;
  template<typename _ip_T,
           typename _port_T,
           typename _numFailures_T,
           typename = typename
           std::enable_if<std::is_constructible<_ip_t, _ip_T>::value
                          && std::is_constructible<uint32, _port_T>::value
                          && std::is_constructible<uint32, _numFailures_T>::value
                         >::type>
  explicit PeerAddress(_ip_T &&_ip,
                       _port_T &&_port,
                       _numFailures_T &&_numFailures)
    : ip(std::forward<_ip_T>(_ip)),
      port(std::forward<_port_T>(_port)),
      numFailures(std::forward<_numFailures_T>(_numFailures)) {}
};
} namespace xdr {
template<> struct xdr_traits<::starall::PeerAddress::_ip_t> : xdr_traits_base {
  static Constexpr const bool is_class = true;
  static Constexpr const bool is_union = true;
  static Constexpr const bool has_fixed_size = false;

  using union_type = ::starall::PeerAddress::_ip_t;
  using case_type = ::starall::PeerAddress::_ip_t::_xdr_case_type;
  using discriminant_type = decltype(std::declval<union_type>().type());

  static const char *union_field_name(case_type which) {
    switch (union_type::_xdr_field_number(which)) {
    case 1:
      return "ipv4";
    case 2:
      return "ipv6";
    }
    return nullptr;
  }
  static const char *union_field_name(const union_type &u) {
    return union_field_name(u._xdr_discriminant());
  }

  static std::size_t serial_size(const ::starall::PeerAddress::_ip_t &obj) {
    std::size_t size = 0;
    if (!obj._xdr_with_mem_ptr(field_size, obj._xdr_discriminant(), obj, size))
      throw xdr_bad_discriminant("bad value of type in _ip_t");
    return size + 4;
  }
  template<typename Archive> static void
  save(Archive &ar, const ::starall::PeerAddress::_ip_t &obj) {
    xdr::archive(ar, obj.type(), "type");
    if (!obj._xdr_with_mem_ptr(field_archiver, obj.type(), ar, obj,
                               union_field_name(obj)))
      throw xdr_bad_discriminant("bad value of type in _ip_t");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::PeerAddress::_ip_t &obj) {
    discriminant_type which;
    xdr::archive(ar, which, "type");
    obj.type(which);
    obj._xdr_with_mem_ptr(field_archiver, obj.type(), ar, obj,
                          union_field_name(which));
    xdr::validate(obj);
  }
};
template<> struct xdr_traits<::starall::PeerAddress>
  : xdr_struct_base<field_ptr<::starall::PeerAddress,
                              decltype(::starall::PeerAddress::ip),
                              &::starall::PeerAddress::ip>,
                    field_ptr<::starall::PeerAddress,
                              decltype(::starall::PeerAddress::port),
                              &::starall::PeerAddress::port>,
                    field_ptr<::starall::PeerAddress,
                              decltype(::starall::PeerAddress::numFailures),
                              &::starall::PeerAddress::numFailures>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::PeerAddress &obj) {
    archive(ar, obj.ip, "ip");
    archive(ar, obj.port, "port");
    archive(ar, obj.numFailures, "numFailures");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::PeerAddress &obj) {
    archive(ar, obj.ip, "ip");
    archive(ar, obj.port, "port");
    archive(ar, obj.numFailures, "numFailures");
    xdr::validate(obj);
  }
};
} namespace starall {

enum MessageType : std::int32_t {
  ERROR_MSG = 0,
  AUTH = 2,
  DONT_HAVE = 3,
  GET_PEERS = 4,
  PEERS = 5,
  GET_TX_SET = 6,
  TX_SET = 7,
  TRANSACTION = 8,
  GET_SCP_QUORUMSET = 9,
  SCP_QUORUMSET = 10,
  SCP_MESSAGE = 11,
  GET_SCP_STATE = 12,
  HELLO = 13,
};
} namespace xdr {
template<> struct xdr_traits<::starall::MessageType>
  : xdr_integral_base<::starall::MessageType, std::uint32_t> {
  using case_type = std::int32_t;
  static Constexpr const bool is_enum = true;
  static Constexpr const bool is_numeric = false;
  static const char *enum_name(::starall::MessageType val) {
    switch (val) {
    case ::starall::ERROR_MSG:
      return "ERROR_MSG";
    case ::starall::AUTH:
      return "AUTH";
    case ::starall::DONT_HAVE:
      return "DONT_HAVE";
    case ::starall::GET_PEERS:
      return "GET_PEERS";
    case ::starall::PEERS:
      return "PEERS";
    case ::starall::GET_TX_SET:
      return "GET_TX_SET";
    case ::starall::TX_SET:
      return "TX_SET";
    case ::starall::TRANSACTION:
      return "TRANSACTION";
    case ::starall::GET_SCP_QUORUMSET:
      return "GET_SCP_QUORUMSET";
    case ::starall::SCP_QUORUMSET:
      return "SCP_QUORUMSET";
    case ::starall::SCP_MESSAGE:
      return "SCP_MESSAGE";
    case ::starall::GET_SCP_STATE:
      return "GET_SCP_STATE";
    case ::starall::HELLO:
      return "HELLO";
    default:
      return nullptr;
    }
  }
  static const std::vector<int32_t> &enum_values() {
    static const std::vector<int32_t> _xdr_enum_vec = {
      ::starall::ERROR_MSG,
      ::starall::AUTH,
      ::starall::DONT_HAVE,
      ::starall::GET_PEERS,
      ::starall::PEERS,
      ::starall::GET_TX_SET,
      ::starall::TX_SET,
      ::starall::TRANSACTION,
      ::starall::GET_SCP_QUORUMSET,
      ::starall::SCP_QUORUMSET,
      ::starall::SCP_MESSAGE,
      ::starall::GET_SCP_STATE,
      ::starall::HELLO
    };
    return _xdr_enum_vec;
  }
};
} namespace starall {

struct DontHave {
  MessageType type{};
  uint256 reqHash{};

  DontHave() = default;
  template<typename _type_T,
           typename _reqHash_T,
           typename = typename
           std::enable_if<std::is_constructible<MessageType, _type_T>::value
                          && std::is_constructible<uint256, _reqHash_T>::value
                         >::type>
  explicit DontHave(_type_T &&_type,
                    _reqHash_T &&_reqHash)
    : type(std::forward<_type_T>(_type)),
      reqHash(std::forward<_reqHash_T>(_reqHash)) {}
};
} namespace xdr {
template<> struct xdr_traits<::starall::DontHave>
  : xdr_struct_base<field_ptr<::starall::DontHave,
                              decltype(::starall::DontHave::type),
                              &::starall::DontHave::type>,
                    field_ptr<::starall::DontHave,
                              decltype(::starall::DontHave::reqHash),
                              &::starall::DontHave::reqHash>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::DontHave &obj) {
    archive(ar, obj.type, "type");
    archive(ar, obj.reqHash, "reqHash");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::DontHave &obj) {
    archive(ar, obj.type, "type");
    archive(ar, obj.reqHash, "reqHash");
    xdr::validate(obj);
  }
};
} namespace starall {

struct StarallMessage {
  using _xdr_case_type = xdr::xdr_traits<MessageType>::case_type;
private:
  _xdr_case_type type_;
  union {
    Error error_;
    Hello hello_;
    Auth auth_;
    DontHave dontHave_;
    xdr::xvector<PeerAddress,100> peers_;
    uint256 txSetHash_;
    TransactionSet txSet_;
    TransactionEnvelope transaction_;
    uint256 qSetHash_;
    SCPQuorumSet qSet_;
    SCPEnvelope envelope_;
    uint32 getSCPLedgerSeq_;
  };

public:
  static Constexpr const bool _xdr_has_default_case = false;
  static const std::vector<MessageType> &_xdr_case_values() {
    static const std::vector<MessageType> _xdr_disc_vec {
      ERROR_MSG,
      HELLO,
      AUTH,
      DONT_HAVE,
      GET_PEERS,
      PEERS,
      GET_TX_SET,
      TX_SET,
      TRANSACTION,
      GET_SCP_QUORUMSET,
      SCP_QUORUMSET,
      SCP_MESSAGE,
      GET_SCP_STATE
    };
    return _xdr_disc_vec;
  }
  static Constexpr int _xdr_field_number(_xdr_case_type which) {
    return which == ERROR_MSG ? 1
      : which == HELLO ? 2
      : which == AUTH ? 3
      : which == DONT_HAVE ? 4
      : which == GET_PEERS ? 0
      : which == PEERS ? 5
      : which == GET_TX_SET ? 6
      : which == TX_SET ? 7
      : which == TRANSACTION ? 8
      : which == GET_SCP_QUORUMSET ? 9
      : which == SCP_QUORUMSET ? 10
      : which == SCP_MESSAGE ? 11
      : which == GET_SCP_STATE ? 12
      : -1;
  }
  template<typename _F, typename..._A> static bool
  _xdr_with_mem_ptr(_F &_f, _xdr_case_type _which, _A&&..._a) {
    switch (_which) {
    case ERROR_MSG:
      _f(&StarallMessage::error_, std::forward<_A>(_a)...);
      return true;
    case HELLO:
      _f(&StarallMessage::hello_, std::forward<_A>(_a)...);
      return true;
    case AUTH:
      _f(&StarallMessage::auth_, std::forward<_A>(_a)...);
      return true;
    case DONT_HAVE:
      _f(&StarallMessage::dontHave_, std::forward<_A>(_a)...);
      return true;
    case GET_PEERS:
      return true;
    case PEERS:
      _f(&StarallMessage::peers_, std::forward<_A>(_a)...);
      return true;
    case GET_TX_SET:
      _f(&StarallMessage::txSetHash_, std::forward<_A>(_a)...);
      return true;
    case TX_SET:
      _f(&StarallMessage::txSet_, std::forward<_A>(_a)...);
      return true;
    case TRANSACTION:
      _f(&StarallMessage::transaction_, std::forward<_A>(_a)...);
      return true;
    case GET_SCP_QUORUMSET:
      _f(&StarallMessage::qSetHash_, std::forward<_A>(_a)...);
      return true;
    case SCP_QUORUMSET:
      _f(&StarallMessage::qSet_, std::forward<_A>(_a)...);
      return true;
    case SCP_MESSAGE:
      _f(&StarallMessage::envelope_, std::forward<_A>(_a)...);
      return true;
    case GET_SCP_STATE:
      _f(&StarallMessage::getSCPLedgerSeq_, std::forward<_A>(_a)...);
      return true;
    }
    return false;
  }

  _xdr_case_type _xdr_discriminant() const { return type_; }
  void _xdr_discriminant(_xdr_case_type which, bool validate = true) {
    int fnum = _xdr_field_number(which);
    if (fnum < 0 && validate)
      throw xdr::xdr_bad_discriminant("bad value of type in StarallMessage");
    if (fnum != _xdr_field_number(type_)) {
      this->~StarallMessage();
      type_ = which;
      _xdr_with_mem_ptr(xdr::field_constructor, type_, *this);
    }
    else
      type_ = which;
  }
  explicit StarallMessage(MessageType which = MessageType{}) : type_(which) {
    _xdr_with_mem_ptr(xdr::field_constructor, type_, *this);
  }
  StarallMessage(const StarallMessage &source) : type_(source.type_) {
    _xdr_with_mem_ptr(xdr::field_constructor, type_, *this, source);
  }
  StarallMessage(StarallMessage &&source) : type_(source.type_) {
    _xdr_with_mem_ptr(xdr::field_constructor, type_, *this,
                      std::move(source));
  }
  ~StarallMessage() { _xdr_with_mem_ptr(xdr::field_destructor, type_, *this); }
  StarallMessage &operator=(const StarallMessage &source) {
    if (_xdr_field_number(type_)
        == _xdr_field_number(source.type_))
      _xdr_with_mem_ptr(xdr::field_assigner, type_, *this, source);
    else {
      this->~StarallMessage();
      type_ = std::numeric_limits<_xdr_case_type>::max();
      _xdr_with_mem_ptr(xdr::field_constructor, source.type_, *this, source);
    }
    type_ = source.type_;
    return *this;
  }
  StarallMessage &operator=(StarallMessage &&source) {
    if (_xdr_field_number(type_)
         == _xdr_field_number(source.type_))
      _xdr_with_mem_ptr(xdr::field_assigner, type_, *this,
                        std::move(source));
    else {
      this->~StarallMessage();
      type_ = std::numeric_limits<_xdr_case_type>::max();
      _xdr_with_mem_ptr(xdr::field_constructor, source.type_, *this,
                        std::move(source));
    }
    type_ = source.type_;
    return *this;
  }

  MessageType type() const { return MessageType(type_); }
  StarallMessage &type(MessageType _xdr_d, bool _xdr_validate = true) {
    _xdr_discriminant(_xdr_d, _xdr_validate);
    return *this;
  }

  Error &error() {
    if (_xdr_field_number(type_) == 1)
      return error_;
    throw xdr::xdr_wrong_union("StarallMessage: error accessed when not selected");
  }
  const Error &error() const {
    if (_xdr_field_number(type_) == 1)
      return error_;
    throw xdr::xdr_wrong_union("StarallMessage: error accessed when not selected");
  }
  Hello &hello() {
    if (_xdr_field_number(type_) == 2)
      return hello_;
    throw xdr::xdr_wrong_union("StarallMessage: hello accessed when not selected");
  }
  const Hello &hello() const {
    if (_xdr_field_number(type_) == 2)
      return hello_;
    throw xdr::xdr_wrong_union("StarallMessage: hello accessed when not selected");
  }
  Auth &auth() {
    if (_xdr_field_number(type_) == 3)
      return auth_;
    throw xdr::xdr_wrong_union("StarallMessage: auth accessed when not selected");
  }
  const Auth &auth() const {
    if (_xdr_field_number(type_) == 3)
      return auth_;
    throw xdr::xdr_wrong_union("StarallMessage: auth accessed when not selected");
  }
  DontHave &dontHave() {
    if (_xdr_field_number(type_) == 4)
      return dontHave_;
    throw xdr::xdr_wrong_union("StarallMessage: dontHave accessed when not selected");
  }
  const DontHave &dontHave() const {
    if (_xdr_field_number(type_) == 4)
      return dontHave_;
    throw xdr::xdr_wrong_union("StarallMessage: dontHave accessed when not selected");
  }
  xdr::xvector<PeerAddress,100> &peers() {
    if (_xdr_field_number(type_) == 5)
      return peers_;
    throw xdr::xdr_wrong_union("StarallMessage: peers accessed when not selected");
  }
  const xdr::xvector<PeerAddress,100> &peers() const {
    if (_xdr_field_number(type_) == 5)
      return peers_;
    throw xdr::xdr_wrong_union("StarallMessage: peers accessed when not selected");
  }
  uint256 &txSetHash() {
    if (_xdr_field_number(type_) == 6)
      return txSetHash_;
    throw xdr::xdr_wrong_union("StarallMessage: txSetHash accessed when not selected");
  }
  const uint256 &txSetHash() const {
    if (_xdr_field_number(type_) == 6)
      return txSetHash_;
    throw xdr::xdr_wrong_union("StarallMessage: txSetHash accessed when not selected");
  }
  TransactionSet &txSet() {
    if (_xdr_field_number(type_) == 7)
      return txSet_;
    throw xdr::xdr_wrong_union("StarallMessage: txSet accessed when not selected");
  }
  const TransactionSet &txSet() const {
    if (_xdr_field_number(type_) == 7)
      return txSet_;
    throw xdr::xdr_wrong_union("StarallMessage: txSet accessed when not selected");
  }
  TransactionEnvelope &transaction() {
    if (_xdr_field_number(type_) == 8)
      return transaction_;
    throw xdr::xdr_wrong_union("StarallMessage: transaction accessed when not selected");
  }
  const TransactionEnvelope &transaction() const {
    if (_xdr_field_number(type_) == 8)
      return transaction_;
    throw xdr::xdr_wrong_union("StarallMessage: transaction accessed when not selected");
  }
  uint256 &qSetHash() {
    if (_xdr_field_number(type_) == 9)
      return qSetHash_;
    throw xdr::xdr_wrong_union("StarallMessage: qSetHash accessed when not selected");
  }
  const uint256 &qSetHash() const {
    if (_xdr_field_number(type_) == 9)
      return qSetHash_;
    throw xdr::xdr_wrong_union("StarallMessage: qSetHash accessed when not selected");
  }
  SCPQuorumSet &qSet() {
    if (_xdr_field_number(type_) == 10)
      return qSet_;
    throw xdr::xdr_wrong_union("StarallMessage: qSet accessed when not selected");
  }
  const SCPQuorumSet &qSet() const {
    if (_xdr_field_number(type_) == 10)
      return qSet_;
    throw xdr::xdr_wrong_union("StarallMessage: qSet accessed when not selected");
  }
  SCPEnvelope &envelope() {
    if (_xdr_field_number(type_) == 11)
      return envelope_;
    throw xdr::xdr_wrong_union("StarallMessage: envelope accessed when not selected");
  }
  const SCPEnvelope &envelope() const {
    if (_xdr_field_number(type_) == 11)
      return envelope_;
    throw xdr::xdr_wrong_union("StarallMessage: envelope accessed when not selected");
  }
  uint32 &getSCPLedgerSeq() {
    if (_xdr_field_number(type_) == 12)
      return getSCPLedgerSeq_;
    throw xdr::xdr_wrong_union("StarallMessage: getSCPLedgerSeq accessed when not selected");
  }
  const uint32 &getSCPLedgerSeq() const {
    if (_xdr_field_number(type_) == 12)
      return getSCPLedgerSeq_;
    throw xdr::xdr_wrong_union("StarallMessage: getSCPLedgerSeq accessed when not selected");
  }
};
} namespace xdr {
template<> struct xdr_traits<::starall::StarallMessage> : xdr_traits_base {
  static Constexpr const bool is_class = true;
  static Constexpr const bool is_union = true;
  static Constexpr const bool has_fixed_size = false;

  using union_type = ::starall::StarallMessage;
  using case_type = ::starall::StarallMessage::_xdr_case_type;
  using discriminant_type = decltype(std::declval<union_type>().type());

  static const char *union_field_name(case_type which) {
    switch (union_type::_xdr_field_number(which)) {
    case 1:
      return "error";
    case 2:
      return "hello";
    case 3:
      return "auth";
    case 4:
      return "dontHave";
    case 5:
      return "peers";
    case 6:
      return "txSetHash";
    case 7:
      return "txSet";
    case 8:
      return "transaction";
    case 9:
      return "qSetHash";
    case 10:
      return "qSet";
    case 11:
      return "envelope";
    case 12:
      return "getSCPLedgerSeq";
    }
    return nullptr;
  }
  static const char *union_field_name(const union_type &u) {
    return union_field_name(u._xdr_discriminant());
  }

  static std::size_t serial_size(const ::starall::StarallMessage &obj) {
    std::size_t size = 0;
    if (!obj._xdr_with_mem_ptr(field_size, obj._xdr_discriminant(), obj, size))
      throw xdr_bad_discriminant("bad value of type in StarallMessage");
    return size + 4;
  }
  template<typename Archive> static void
  save(Archive &ar, const ::starall::StarallMessage &obj) {
    xdr::archive(ar, obj.type(), "type");
    if (!obj._xdr_with_mem_ptr(field_archiver, obj.type(), ar, obj,
                               union_field_name(obj)))
      throw xdr_bad_discriminant("bad value of type in StarallMessage");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::StarallMessage &obj) {
    discriminant_type which;
    xdr::archive(ar, which, "type");
    obj.type(which);
    obj._xdr_with_mem_ptr(field_archiver, obj.type(), ar, obj,
                          union_field_name(which));
    xdr::validate(obj);
  }
};
} namespace starall {

struct AuthenticatedMessage {
  struct _v0_t {
    uint64 sequence{};
    StarallMessage message{};
    HmacSha256Mac mac{};

    _v0_t() = default;
    template<typename _sequence_T,
             typename _message_T,
             typename _mac_T,
             typename = typename
             std::enable_if<std::is_constructible<uint64, _sequence_T>::value
                            && std::is_constructible<StarallMessage, _message_T>::value
                            && std::is_constructible<HmacSha256Mac, _mac_T>::value
                           >::type>
    explicit _v0_t(_sequence_T &&_sequence,
                   _message_T &&_message,
                   _mac_T &&_mac)
      : sequence(std::forward<_sequence_T>(_sequence)),
        message(std::forward<_message_T>(_message)),
        mac(std::forward<_mac_T>(_mac)) {}
  };

  using _xdr_case_type = xdr::xdr_traits<uint32>::case_type;
private:
  _xdr_case_type v_;
  union {
    _v0_t v0_;
  };

public:
  static Constexpr const bool _xdr_has_default_case = false;
  static const std::vector<uint32> &_xdr_case_values() {
    static const std::vector<uint32> _xdr_disc_vec {
      0
    };
    return _xdr_disc_vec;
  }
  static Constexpr int _xdr_field_number(_xdr_case_type which) {
    return which == 0 ? 1
      : -1;
  }
  template<typename _F, typename..._A> static bool
  _xdr_with_mem_ptr(_F &_f, _xdr_case_type _which, _A&&..._a) {
    switch (_which) {
    case 0:
      _f(&AuthenticatedMessage::v0_, std::forward<_A>(_a)...);
      return true;
    }
    return false;
  }

  _xdr_case_type _xdr_discriminant() const { return v_; }
  void _xdr_discriminant(_xdr_case_type which, bool validate = true) {
    int fnum = _xdr_field_number(which);
    if (fnum < 0 && validate)
      throw xdr::xdr_bad_discriminant("bad value of v in AuthenticatedMessage");
    if (fnum != _xdr_field_number(v_)) {
      this->~AuthenticatedMessage();
      v_ = which;
      _xdr_with_mem_ptr(xdr::field_constructor, v_, *this);
    }
    else
      v_ = which;
  }
  explicit AuthenticatedMessage(uint32 which = uint32{}) : v_(which) {
    _xdr_with_mem_ptr(xdr::field_constructor, v_, *this);
  }
  AuthenticatedMessage(const AuthenticatedMessage &source) : v_(source.v_) {
    _xdr_with_mem_ptr(xdr::field_constructor, v_, *this, source);
  }
  AuthenticatedMessage(AuthenticatedMessage &&source) : v_(source.v_) {
    _xdr_with_mem_ptr(xdr::field_constructor, v_, *this,
                      std::move(source));
  }
  ~AuthenticatedMessage() { _xdr_with_mem_ptr(xdr::field_destructor, v_, *this); }
  AuthenticatedMessage &operator=(const AuthenticatedMessage &source) {
    if (_xdr_field_number(v_)
        == _xdr_field_number(source.v_))
      _xdr_with_mem_ptr(xdr::field_assigner, v_, *this, source);
    else {
      this->~AuthenticatedMessage();
      v_ = std::numeric_limits<_xdr_case_type>::max();
      _xdr_with_mem_ptr(xdr::field_constructor, source.v_, *this, source);
    }
    v_ = source.v_;
    return *this;
  }
  AuthenticatedMessage &operator=(AuthenticatedMessage &&source) {
    if (_xdr_field_number(v_)
         == _xdr_field_number(source.v_))
      _xdr_with_mem_ptr(xdr::field_assigner, v_, *this,
                        std::move(source));
    else {
      this->~AuthenticatedMessage();
      v_ = std::numeric_limits<_xdr_case_type>::max();
      _xdr_with_mem_ptr(xdr::field_constructor, source.v_, *this,
                        std::move(source));
    }
    v_ = source.v_;
    return *this;
  }

  uint32 v() const { return uint32(v_); }
  AuthenticatedMessage &v(uint32 _xdr_d, bool _xdr_validate = true) {
    _xdr_discriminant(_xdr_d, _xdr_validate);
    return *this;
  }

  _v0_t &v0() {
    if (_xdr_field_number(v_) == 1)
      return v0_;
    throw xdr::xdr_wrong_union("AuthenticatedMessage: v0 accessed when not selected");
  }
  const _v0_t &v0() const {
    if (_xdr_field_number(v_) == 1)
      return v0_;
    throw xdr::xdr_wrong_union("AuthenticatedMessage: v0 accessed when not selected");
  }
};
} namespace xdr {
template<> struct xdr_traits<::starall::AuthenticatedMessage::_v0_t>
  : xdr_struct_base<field_ptr<::starall::AuthenticatedMessage::_v0_t,
                              decltype(::starall::AuthenticatedMessage::_v0_t::sequence),
                              &::starall::AuthenticatedMessage::_v0_t::sequence>,
                    field_ptr<::starall::AuthenticatedMessage::_v0_t,
                              decltype(::starall::AuthenticatedMessage::_v0_t::message),
                              &::starall::AuthenticatedMessage::_v0_t::message>,
                    field_ptr<::starall::AuthenticatedMessage::_v0_t,
                              decltype(::starall::AuthenticatedMessage::_v0_t::mac),
                              &::starall::AuthenticatedMessage::_v0_t::mac>> {
  template<typename Archive> static void
  save(Archive &ar, const ::starall::AuthenticatedMessage::_v0_t &obj) {
    archive(ar, obj.sequence, "sequence");
    archive(ar, obj.message, "message");
    archive(ar, obj.mac, "mac");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::AuthenticatedMessage::_v0_t &obj) {
    archive(ar, obj.sequence, "sequence");
    archive(ar, obj.message, "message");
    archive(ar, obj.mac, "mac");
    xdr::validate(obj);
  }
};
template<> struct xdr_traits<::starall::AuthenticatedMessage> : xdr_traits_base {
  static Constexpr const bool is_class = true;
  static Constexpr const bool is_union = true;
  static Constexpr const bool has_fixed_size = false;

  using union_type = ::starall::AuthenticatedMessage;
  using case_type = ::starall::AuthenticatedMessage::_xdr_case_type;
  using discriminant_type = decltype(std::declval<union_type>().v());

  static const char *union_field_name(case_type which) {
    switch (union_type::_xdr_field_number(which)) {
    case 1:
      return "v0";
    }
    return nullptr;
  }
  static const char *union_field_name(const union_type &u) {
    return union_field_name(u._xdr_discriminant());
  }

  static std::size_t serial_size(const ::starall::AuthenticatedMessage &obj) {
    std::size_t size = 0;
    if (!obj._xdr_with_mem_ptr(field_size, obj._xdr_discriminant(), obj, size))
      throw xdr_bad_discriminant("bad value of v in AuthenticatedMessage");
    return size + 4;
  }
  template<typename Archive> static void
  save(Archive &ar, const ::starall::AuthenticatedMessage &obj) {
    xdr::archive(ar, obj.v(), "v");
    if (!obj._xdr_with_mem_ptr(field_archiver, obj.v(), ar, obj,
                               union_field_name(obj)))
      throw xdr_bad_discriminant("bad value of v in AuthenticatedMessage");
  }
  template<typename Archive> static void
  load(Archive &ar, ::starall::AuthenticatedMessage &obj) {
    discriminant_type which;
    xdr::archive(ar, which, "v");
    obj.v(which);
    obj._xdr_with_mem_ptr(field_archiver, obj.v(), ar, obj,
                          union_field_name(which));
    xdr::validate(obj);
  }
};
} namespace starall {

}

#endif // !__XDR_XDR_STELLAR_OVERLAY_H_INCLUDED__
