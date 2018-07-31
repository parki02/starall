#!/bin/sh -e

# Public domain

case "$0" in
    */*)
	cd $(dirname $0)
	;;
esac

case "$1" in
    --skip-submodules|-s)
	skip_submodules=yes
	;;
    "")
	;;
    *)
	echo usage: $0 [--skip-submodules] >&2
	exit 1
	;;
esac


echo "11111111111111111111111111111111111"
#case "${skip_submodules}" in
#     0|no|false|"")
#        git submodule update --init
#        git submodule foreach '
#           autogen=$(find . -name autogen.sh)
#           if [ -x "$autogen" ]; then
#               cd $(dirname "$autogen")
#               ./autogen.sh
#           fi
#           '
#    ;;
#esac

echo "22222222222222222222222222222222222"
./make-mks
autoreconf -i
