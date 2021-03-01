
Debian
====================
This directory contains files used to package globalsalarycoind/globalsalarycoin-qt
for Debian-based Linux systems. If you compile globalsalarycoind/globalsalarycoin-qt yourself, there are some useful files here.

## globalsalarycoin: URI support ##


globalsalarycoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install globalsalarycoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your globalsalarycoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/globalsalarycoin128.png` to `/usr/share/pixmaps`

globalsalarycoin-qt.protocol (KDE)

