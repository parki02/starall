% starall-core(1)
% Starall Development Foundation
%

# NAME

starall-core - Core daemon for Starall payment network

# SYNOPSYS

starall-core [OPTIONS]

# DESCRIPTION

Starall is a decentralized, federated peer-to-peer network that allows
people to send payments in any asset anywhere in the world
instantaneously, and with minimal fee. `Starall-core` is the core
component of this network. `Starall-core` is a C++ implementation of
the Starall Consensus Protocol configured to construct a chain of
ledgers that are guaranteed to be in agreement across all the
participating nodes at all times.

## Configuration file

In most modes of operation, starall-core requires a configuration
file.  By default, it looks for a file called `starall-core.cfg` in
the current working directory, but this default can be changed by the
`--conf` command-line option.  The configuration file is in TOML
syntax.  The full set of supported directives can be found in
`%prefix%/share/doc/starall-core_example.cfg`.

%commands%

# EXAMPLES

See `%prefix%/share/doc/*.cfg` for some example starall-core
configuration files

# FILES

starall-core.cfg
:   Configuration file (in current working directory by default)

# SEE ALSO

<https://www.starall.org/developers/starall-core/software/admin.html>
:   starall-core administration guide

<https://www.starall.org>
:   Home page of Starall development foundation

# BUGS

Please report bugs using the github issue tracker:\
<https://github.com/starall/starall-core/issues>
