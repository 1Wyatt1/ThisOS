#!/bin/sh
set -e
. ./iso.sh

export QEMU="/usr/bin/qemu-system-i386"

$QEMU -cdrom ThisOS.iso
