#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/ThisOS.kernel isodir/boot/ThisOS.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "ThisOS" {
	multiboot /boot/ThisOS.kernel
}
EOF
grub-mkrescue -o ThisOS.iso isodir
