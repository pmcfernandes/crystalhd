# Maintainer: Pedro Fernandes <pmcfernandes@gmail.com>

pkgname=crystalhd
pkgver=20100327
pkgrel=1
kgdesc="Broadcom CrystalHD driver for Kernel 4.9"
arch=('any')
depends=('linux49-headers')
makedepends=('git')
url='https://github.com/pmcfernandes/crystalhd"
license=('GPL')
md5sums=('SKIP')

pkgver() {
  cd crystalhd
  printf "r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
  cd crystalhd/driver/linux
  autoconf
  ./configure
}

build() {
  cd crystalhd/driver/linux
  make
}

package() {
  cd crystalhd/driver/linux
  sudo make install
  sudo modprobe crystalhd
}
